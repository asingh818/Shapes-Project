#include "Rectangle.h"
Rectangle::Rectangle(double l, double w, double x, double y)
	:TwoDimensionalShape(x,y),length(l),width(w){}
//Set xCenter and yCenter in the TwoDimensionalShape class 
//and set the lenght and width

double Rectangle::getLength() const{ // return length of Rectangle
	return length; //return the length of the rectangle
}

double Rectangle::getWidth() const { // return the width of Rectangle
	return width; // return the width of the rectangle
}

double Rectangle::getArea() const { // return area of Rectangle
	//area of a rectangle is length * width
	return length * width;
}

void Rectangle::print(ostream & out) const {
	//Print the length, width, and (x,y) center
	out << "Rectangle with length " << getLength() << " and width " << getWidth() << "; center at ";
	out << "(" << xCenter << ", " << yCenter << ")";
}