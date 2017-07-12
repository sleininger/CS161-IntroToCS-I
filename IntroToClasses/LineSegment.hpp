#ifndef LINESEGMENT_H
#define LINESEGMENT_H

class LineSegment {

	private:
		Point point1;
		Point point2;

	public:
		LineSegment();
		LineSegment(Point&, Point&);
		void setEnd1(Point);
		void setEnd2(Point);
		Point getEnd1();
		Point getEnd2();
		double length();
		double slope();

};
#endif
