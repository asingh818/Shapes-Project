#include "Triangle.h"
#include <cmath>
Triangle::Triangle(double firstX, double firstY, double secondX, double secondY, double thirdX, double thirdY)
	:TwoDimensionalShape(0,0), x1(firstX),y1(firstY),x2(secondX),y2(secondY),x3(thirdX),y3(thirdY){
	//set (x1,y2),(x2,y2),(x3,x3) coordinates
	side1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));//formula to find side1 length
	side2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));//formula to find side2 length
	side3 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));//formula to find side3 length
	xCenter = ((side2 * x1) + (side3 * x2) + (side1 * x3)) / (side1 + side2 + side3);
	//forumla to find x cooridinate for center
	yCenter = ((side2 * y1) + (side3 * y2) + (side1 * y3)) / (side1 + side2 + side3);
	//forumla to find y cooridinate for center
}

double Triangle::getSide1Length() const{ // return length of side1 (which 
	//is side1 arbitrary but fixed) of triangle
	return side1;
}	

double Triangle::getSide2Length() const { // return length of side2 of triangle
	return side2;
}

double Triangle::getSide3Length() const { // return length of side3 of triangle
	return side3;
}

double Triangle::getArea() const { // return area of triangle
	double s = (side1 + side2 + side3)/2;
	return sqrt(s*(s - side1)*(s - side2)*(s - side3)); //Herron’s formula to find area
}

void Triangle::print(ostream & out) const { // output triangle object
	//print coordinates, sidelengths, and (x,y) center
	out << "Triangle with three points: "
		<< "(" << x1 << ", " << y1 << "), "
		<< "(" << x2 << ", " << y2 << "), ";
	out << "(" << x3 << ", " << y3 << "); " << std::endl;
	out << "with respective side lengths: "
		<< getSide1Length() << ", " << getSide2Length()
		<< ", " << getSide3Length() << "; " << std::endl;
	out << "and center at " << "(" << xCenter << ", " << yCenter << ")";
}