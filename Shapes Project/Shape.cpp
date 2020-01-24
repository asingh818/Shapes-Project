// Shape.cpp
// Member definitions for class Shape
#include "Shape.h"
// default constructor
Shape::Shape(double x, double y)
{
	xCenter = x;
	yCenter = y;
} // end Shape constructor
  // return x from coordinate pair
Shape::~Shape() {
	//std::cout << "Call Destructor" << std::endl;
}

double Shape::getCenterX() const
{
	return xCenter;
} // end function getCenterX
  // return y from coordinate pair
double Shape::getCenterY() const
{
	return yCenter;
} // end function getCenterY
  // overloaded output operator
ostream & operator<<(ostream &out, Shape &s)
{
	s.print(out);
	return out;
} // end overloaded output operator function