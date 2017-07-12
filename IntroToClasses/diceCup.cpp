#include <iostream>
#include <cmath>
#include <ctime>
#include "DiceCup.hpp"
using namespace std;

/*********************************************
Constructor
**********************************************/
diceCup::diceCup() {
	numFaces = 2;
	numDice = 1;
}

/*********************************************
setNumDice(int)
**********************************************/
void diceCup::setNumDice(int totalDice) {
	numDice = totalDice;
}

/*********************************************
setNumFaces(int)
**********************************************/
void diceCup::setNumFaces(int totalFaces) {
	numFaces = totalFaces;
}

/*********************************************
int rollDice(int, int)
**********************************************/
int diceCup::rollDice(int totalFaces, int totalDice) {
	int rollTotal = 0;
	int diceRoll[totalDice];
	unsigned seed;

	seed = time(0);
	srand(seed);

	//Roll each dice and save the value in an array
	for(int i = 0; i < totalDice; i++) {
		diceRoll[i] = rand() % totalFaces + 1;
		cout << "Dice " << i+1 << ": " << diceRoll[i] << "\n";
	}

	//Find the total value of the roll by adding up each die's roll
	for(int k = 0; k < totalDice; k++) {
		rollTotal += diceRoll[k];
	}

	return rollTotal;
}


/*********************************************
Input Validation
**********************************************/
int inputValidation(int num) {
	while(num <= 0) {
		cout << "Oops! Please enter a number greater than 0: ";
		cin >> num;
	}	

	return num;
}

/*********************************************
MAIN
**********************************************/
int main() {

	int diceFaces, diceTotal, roll;

	cout << "Need to roll some dice? I can help you out.\n\n";
	cout << "First, how many dice would you like to roll? ";
	cin >> diceTotal;

	diceTotal = inputValidation(diceTotal);

	cout << "\nNow, how many sides would you like each dice to have? ";
	cin >> diceFaces;

	diceFaces = inputValidation(diceFaces);

	cout << "\nThanks! Rolling your dice...\n\n\n";

	diceCup playerRoll;
	playerRoll.setNumDice(diceTotal);
	playerRoll.setNumFaces(diceFaces);

	cout << "Your rolls: \n\n";
	roll = playerRoll.rollDice(diceFaces, diceTotal);

	cout << "\nYour roll total is " << roll << ".\n\n";

	return 0;
}
