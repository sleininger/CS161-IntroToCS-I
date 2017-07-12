#ifndef DICECUP_H
#define DICECUP_H

//Declare class
class diceCup {

	//Private variables here
	private: 
		int numFaces;
		int numDice;

	//Public functions and contructor prototypes herenum
	public:
		diceCup();
		void setNumDice(int);
		void setNumFaces(int);
		int rollDice(int, int);

};
#endif
