// Shape.h
// Definition of base-class Shape
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using std::ostream;
using std::cout;
class Shape {
public:
	Shape(double = 0.0, double = 0.0); // default constructor
	virtual ~Shape(); //destructor
	double getCenterX() const; // return x from coordinate pair
	double getCenterY() const; // return y from coordinate pair
	virtual void print(ostream & out = cout) const = 0; // output Shape object
protected:
	double xCenter; // x part of coordinate pair
	double yCenter; // y part of coordinate pair
}; // end class Shape
ostream & operator<<(ostream &, Shape &);
#endif