#include "Sphere.h"
Sphere::Sphere(double rad, double x, double y, double z)
	:ThreeDimensionalShape(x,y,z),radius(rad){}
//Set xCenter and yCenter in the ThreeDimensionalShape class and set the radius


double Sphere::getArea() const { // return surface area of Sphere
	//area of a sphere is 4 * radius^2 * PI
	return 4 * radius * radius * MATHCONSTANTS_H::PI;
	//call PI from "namespace MATH_CONSTANTS"
}

double Sphere::getVolume() const { // return volume of Sphere
	//volume of a sphere is (4/3) * radius^3 * PI
	return (4.0/3.0) * radius * radius * radius * MATHCONSTANTS_H::PI;
	//call PI from "namespace MATH_CONSTANTS"
}

double Sphere::getRadius() const { // return radius of Sphere
	return radius; // return the radisu of the sphere
}

void Sphere::print(ostream & out) const { // output Sphere object
	//print radius and (x,y,z) center
	out << "Sphere with radius " << getRadius() << "; center at ";
	out << "(" << xCenter << ", " << yCenter << ", " << zCenter << ")";
}