// Driver to test Shape hierarchy
#include <iostream>
using namespace std;
#include <vector>
using std::vector;
#include <typeinfo>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"

int main()
{
	
	const int NUMBER_OF_SHAPES = 14;
	// create vector shapes
	vector < Shape * > shapes(NUMBER_OF_SHAPES);
	// initialize vector with Shapes
	shapes[0] = new Circle(3.5, 6, 9);
	shapes[1] = new Square(12, 2, 2);
	shapes[2] = new Sphere(5, 1.5, 4.5, 5.5);
	shapes[3] = new Cube(2.2);
	shapes[4] = new Triangle(0.0, 0.0, 0.0, 3.0, 4.0, 0.0);
	shapes[5] = new Rectangle(3.0, 4.0, 3.0, 4.0);
	shapes[6] = new Triangle(0.0, 0.0, 0.0, -3.0, -4.0, 0.0);
	shapes[7] = new Circle;
	shapes[8] = new Square(12, 6, 6);
	shapes[9] = new Sphere(10, 6.5, 3.5, 4.5);
	shapes[10] = new Cube(10, 7.4, 3.2, 9.0);
	shapes[11] = new Triangle(1.0, 2.0, 9.0, 2.0, 4.0, 9.0);
	shapes[12] = new Rectangle(3.0, 4.0, 3.0, 4.0);
	shapes[13] = new Triangle(-1.0, -2.0, -9.0, -2.0, -4.0, -9.0);


	// output Shape objects and display area and volume as appropriate
	for (int i = 0; i < NUMBER_OF_SHAPES; i++)
	{
		cout << *(shapes[i]) << endl;
		// downcast pointer
		TwoDimensionalShape *twoDimensionalShapePtr{ dynamic_cast<TwoDimensionalShape*>(shapes[i]) }; // fix with downcasting
						 // if Shape is a TwoDimensionalShape, display its area
		if (twoDimensionalShapePtr != nullptr) {
			cout << "Area: " << twoDimensionalShapePtr->getArea() << endl;
			// downcast pointer
			if (dynamic_cast<Triangle*>(twoDimensionalShapePtr)) {
				//check if our downcast pointer is pointing to the triangle shape
				Triangle *Triangleptr{ dynamic_cast<Triangle*>(twoDimensionalShapePtr) };
				// if it is, display the side lengths
				cout << "Triangle Shape: " << endl;
				cout << "	Triangle Side1 = " << Triangleptr->getSide1Length() << endl;
				cout << "	Triangle Side2 = " << Triangleptr->getSide2Length() << endl;
				cout << "	Triangle Side3 = " << Triangleptr->getSide3Length() << endl;
			}
			if (dynamic_cast<Square*>(twoDimensionalShapePtr)) {
				//check if our downcast pointer is pointing to the square shape
				Square *Squareptr{ dynamic_cast<Square*>(twoDimensionalShapePtr) };
				// if it is, display the side length
				cout << "Square Shape: " << endl;
				cout << "	Square side = " << Squareptr->getSideLength() << endl;
			}
			else if (dynamic_cast<Rectangle*>(twoDimensionalShapePtr)) {
				//If our downcast pointer isn't point to a square shape
				// check if it is pointing to the rectangle shape
				Rectangle *Rectangleptr{ dynamic_cast<Rectangle*>(twoDimensionalShapePtr) };
				// if it is, display the length and width
				cout << "Rectangle Shape: " << endl;
				cout << "	Rectangle length = " << Rectangleptr->getLength() << endl;
				cout << "	Rectangle width = " << Rectangleptr->getWidth() << endl;
			}
		}
		ThreeDimensionalShape *threeDimensionalShapePtr{ dynamic_cast<ThreeDimensionalShape*>(shapes[i]) }; // fix with downcasting
						 // if Shape is a ThreeDimensionalShape, display its area and volume
		if (threeDimensionalShapePtr != nullptr)
			cout << "Area: " << threeDimensionalShapePtr->getArea()
			<< "\nVolume: " << threeDimensionalShapePtr->getVolume()
			<< endl;
		cout << endl;
	} // end for loop
	for (int i{}; i < NUMBER_OF_SHAPES; i++) {
		delete shapes[i];
	}
	//free up the memory
	return 0;
} // end main