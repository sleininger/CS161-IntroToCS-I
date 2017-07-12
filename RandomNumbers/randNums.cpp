#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

	int num1, num2, temp, randomNum;
	unsigned seed;
	
	//Get user input
	cout << "Enter two numbers for the range: ";
	cin >> num1;
	cin >> num2;
	cout << "\nThank you." << "\n\nHere are 5 random numbers in between:" << endl;

	//Generate random number seed
	seed = time(0);
	srand(seed);

	//Find which number is lower
	if(num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	//Generate 5 random numbers in range
	for(int i = 0; i < 5; i++) {
		randomNum = rand() % ((num2 - num1) + 1) + num1;
		cout << randomNum << endl;
	}

	return 0;


}
