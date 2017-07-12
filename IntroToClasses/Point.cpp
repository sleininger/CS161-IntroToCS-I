#include <iostream>
#include <cmath>
#include <cstring>
#include "Point.hpp"
using namespace std;

/*********************************************
Default Constructor
**********************************************/
Point::Point() {
	setXCoord(0);
	setYCoord(0);
}

/*********************************************
Constructor
**********************************************/
Point::Point(double xCoord, double yCoord) {
	setXCoord(xCoord);
	setYCoord(yCoord);
}

/*********************************************
setXCoord(double)
**********************************************/
void Point::setXCoord(double xCoord) {
	x = xCoord;
}

/*********************************************
setYCoord(double)
**********************************************/
void Point::setYCoord(double yCoord) {
	y = yCoord;
}

/*********************************************
getXCoord()
**********************************************/
double Point::getXCoord() const {
	return x;
}

/*********************************************
getYCoord()
**********************************************/
double Point::getYCoord() const {
	return y;
}

/*********************************************
distanceTo(const Point&)
**********************************************/
double Point::distanceTo(const Point &otherPoint) {

	double otherX, otherY, distance;

	//Get other point's x and y coordinates
	//Separated out of equation for readability
	otherX = otherPoint.getXCoord();
	otherY = otherPoint.getYCoord();

	//d = sqrt((x2 - x1)^2  +  (y2 - y1)^2)
	//Run distance equation using both points
	distance = sqrt(((pow(2,(otherX - x))) + (pow(2,(otherY - y)))));

	return distance;
}
