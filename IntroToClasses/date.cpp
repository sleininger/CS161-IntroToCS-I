#include <iostream>
#include <cmath>
#include <cstring>
#include "date.hpp"
using namespace std;

/*********************************************
Constructor
**********************************************/
date::date(int m, int d, int y) {
	setMonth(m);
	setDay(d, m);
	setYear(y);
}

/*********************************************
Default Constructor
**********************************************/
date::date() {
	setMonth(1);
	setDay(1, 1);
	setYear(2001);
}

/*********************************************
setMonth(int)
**********************************************/
void date::setMonth(int m) {
	if(m > 12 || m < 1) {
		month = 0;
		cout << "Invalid value entered for month.\n\n";
	}
	else {
		month = m;
	}

}

/*********************************************
setDay(int)
**********************************************/
void date::setDay(int d, int m) {
	if(m == 1 || m == 3 || m ==5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if(d > 31 || d < 1) {
			day = 0;
			cout << "Invalid value entered for day.\n";
		}
		else {
			day = d;
		}
	}
	else if(m == 4 || m == 6 || m == 9 || m == 11) {
		if(d > 30 || d < 1) {
			day = 0;
			cout << "Invalid value entered for day.\n";
		}
		else {
			day = d;
		}
	}
	else if(m == 2) {
		if(d > 28 || d < 1) {
			day = 0;
			cout << "Invalid value entered for day.\n";
		}
		else {
			day = d;
		}
	}
	else {
		day = 0;
		cout << "Invalid value entered for day.\n";
	}
}

/*********************************************
setYear(int)
**********************************************/
void date::setYear(int y) {
	year = y;
}

/*********************************************
print1(int, int, int)
**********************************************/
void date::print1() {
	//Format is 3/15/13
	cout << "\n" << month << "/" << day << "/" << year << endl;


}

/*********************************************
print2(int, int, int)
**********************************************/
void date::print2() {
	//Format is March 15, 2013
	string monthNames[13] = {"InvalidMonth", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	cout << "\n" << monthNames[month] << " " << day << ", " << year << endl;

}

/*********************************************
print3(int, int, int)
**********************************************/
void date::print3() {
	//Format is 15 March 2013
	string monthNames[13] = {"InvalidMonth", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	cout << day << " " << monthNames[month] << " " << year << endl;

}


/*********************************************
MAIN
**********************************************/
int main() {

	int userChoice = 4;
	int inputMonth, inputDay, inputYear;

	while(userChoice > 0) {

		cout << "\nPlease select one of the following format options to display your date:\n\n";
		cout << "Option 1: MM/DD/YY\n";
		cout << "Option 2: Month Name DD, YYYY\n";
		cout << "Option 3: DD Month Name YYYY\n";
		cout << "Enter the number of your selection, or 0 to quit.\n\n";
		cin >> userChoice;

		if(userChoice >= 1 && userChoice <= 3) {
			//Get date information from user
			cout << "Please enter the month in integer form. For example, September would be entered as '9'.\n";
			cout << "Month: ";
			cin >> inputMonth;
			cout << "Please enter the day of the month.\n";
			cout << "Day: ";
			cin >> inputDay;			
			cout << "Please enter the year.\n";
			cout << "Year: ";
			cin >> inputYear;	
		}
		
		//Create date object with user input
		date userDate(inputMonth, inputDay, inputYear);

		//Execute correct option for user's choice
		if(userChoice == 0) {
			return 0;
		}
		else if(userChoice == 1) {
			userDate.print1();
		}
		else if(userChoice == 2) {
			userDate.print2();
		}
		else if(userChoice == 4) {
			userDate.print3();
		}
		else {
			cout << "\n\nInvalid selection, please try again.\n\n";
			userChoice = 4;
		}

	}

return 0;

}
