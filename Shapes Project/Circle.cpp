#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle(double rad, double x, double y):TwoDimensionalShape(x,y),radius(rad){} 
//Set xCenter and yCenter in the TwoDimensionalShape class and set the radius

double Circle::getRadius() const {
	return radius; 
	//return what the radius of the circle is
}

double Circle::getArea() const {
	//area of circle is radius^2 * PI
	return radius * radius * MATHCONSTANTS_H::PI; 
	//call PI from "namespace MATH_CONSTANTS"
}

void Circle::print(ostream & out) const { // output Circle object
	//print radius and (x,y) center
	out << "Circle with radius " << getRadius() << "; center at ";
	out << "(" << xCenter << ", " << yCenter << ")";
}
