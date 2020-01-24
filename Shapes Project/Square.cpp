#include "Square.h"
Square::Square(double side, double x, double y)
	:Rectangle(side,side,x,y),sideLength(side){}
	//Set xCenter and yCenter into Rectangle class and set the sidelength

double Square::getSideLength() const { 
	return sideLength; //return length of sides
}

double Square::getArea() const { 
	//area of a square is sidelength^2
	return sideLength * sideLength;
}

void Square::print(ostream & out) const { 
	//print sidelength and (x,y) center
	out << "Square with side length " << getSideLength() << "; center at ";
	out << "(" << xCenter << ", " << yCenter << ")";
}