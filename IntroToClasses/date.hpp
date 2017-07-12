#ifndef DATE_H
#define DATE_H

//Declare the class
class date {

	private:
		int month;
		int day;
		int year;

	public:
		//Two constructors, default and one with parameters
		date(int, int, int);
		date();
		//Set methods for each private variable
		void setMonth(int);
		void setDay(int, int);
		void setYear(int);
		//Methods for printing the date in different ways
		void print1();
		void print2();
		void print3();


};
#endif
