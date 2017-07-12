#include <iostream>
#include <cmath>
#include <cstring>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;

/*********************************************
Default Constructor
**********************************************/
LineSegment::LineSegment() {
	Point firstPoint;
	Point secondPoint;

	setEnd1(firstPoint);
	setEnd2(secondPoint);
}

/*********************************************
Constructor
**********************************************/
LineSegment::LineSegment(Point &firstPoint, Point &secondPoint) {
	setEnd1(firstPoint);
	setEnd2(secondPoint);
}

/*********************************************
setEnd1(Point)
**********************************************/
void LineSegment::setEnd1(Point firstPoint) {
	point1 = firstPoint;
}

/*********************************************
setEnd2(Point)
**********************************************/
void LineSegment::setEnd2(Point secondPoint) {
	point2 = secondPoint;
}

/*********************************************
getEnd1()
**********************************************/
Point LineSegment::getEnd1() {
	return point1;
}

/*********************************************
getEnd2()
**********************************************/
Point LineSegment::getEnd2() {
	return point2;
}

/*********************************************
double length()
**********************************************/
double LineSegment::length() {
	Point firstPoint;
	Point secondPoint;
	double lineLength;

	firstPoint = getEnd1();
	secondPoint = getEnd2();

	lineLength = firstPoint.distanceTo(secondPoint);

	return lineLength;
}

/*********************************************
double slope()
**********************************************/
double LineSegment::slope() {
	//slope = (y1 - y2 / (x1 - x2)

	Point firstPoint;
	Point secondPoint;
	double x1, x2, y1, y2, lineSlope;

	firstPoint = getEnd1();
	secondPoint = getEnd2();

	x1 = firstPoint.getXCoord();
	y1 = firstPoint.getYCoord();
	x2 = secondPoint.getXCoord();
	y2 = secondPoint.getYCoord();

	lineSlope = ((y1 - y2)/(x1 - x2));

	return lineSlope;
}

/*********************************************
MAIN
**********************************************/
int main() {

	double firstX, secondX, firstY, secondY;
	double userLength, userSlope;

	cout << "Enter two coordinates and I will give you the distance and slope.\n\n";
	cout << "Enter first X coordinate: ";
	cin >> firstX;
	cout << "\nEnter first Y coordinate: ";
	cin >> firstY;
	cout << "\nEnter second X coordinate: ";
	cin >> secondX;
	cout << "\nEnter second Y coordinate: ";
	cin >> secondY;

	Point firstPoint(firstX, firstY);
	Point secondPoint(secondX, secondY);
	LineSegment userLine(firstPoint, secondPoint);

	userLength = userLine.length();
	userSlope = userLine.slope();

	cout << "\nLength of line: " << userLength << endl;
	cout << "Slope of line: " << userSlope << endl;

	return 0;

}
