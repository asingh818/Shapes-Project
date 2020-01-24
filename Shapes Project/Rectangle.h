#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "TwoDimensionalShape.h"
class Rectangle : public TwoDimensionalShape
{
public:
	Rectangle(double = 0.0, double = 0.0, double = 0.0, double = 0.0);
	virtual double getLength() const; // return length of Rectangle
	virtual double getWidth() const; // return the width of Rectangle
	virtual double getArea() const; // return area of Rectangle
	void print(ostream & out = cout) const; // output Rectangle object
private:
	double length;
	double width;
};
#endif