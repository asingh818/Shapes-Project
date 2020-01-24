#include "Cube.h"
Cube::Cube(double side, double x, double y, double z)
	:ThreeDimensionalShape(x,y,z),sideLength(side){}
//Set xCenter and yCenter in the ThreeDimensionalShape class and set the side length

double Cube::getArea() const { // return surface area of Cube object
	//area of a cube is sidelength^2 * 6
	return 6 * sideLength * sideLength;
}

double Cube::getVolume() const { // return volume of Cube object
	//Volume of a cube is sidelength^3
	return sideLength * sideLength * sideLength;
}

double Cube::getSideLength() const { // return length of sides
	return sideLength; //return the length of the sides
}

void Cube::print(ostream & out) const { // output Cube object
	//print the sidelength and (x,y,z) center
	out << "Cube with side length " << getSideLength() << "; center at ";
	out << "(" << xCenter << ", " << yCenter << ", " << zCenter << ")";
}