#ifndef POINT_H
#define POINT_H

class Point {

	private:
		double x;
		double y;

	public:
		Point();
		Point(double, double);
		void setXCoord(double);
		void setYCoord(double);
		double getXCoord() const;
		double getYCoord() const;
		double distanceTo(const Point&);

};
#endif
