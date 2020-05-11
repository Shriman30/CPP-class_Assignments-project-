#pragma once
using namespace std;
class Bed
{
	private:
		static int id;
		bool availability;  // true = available and false = not

public:
	Bed(); //default constructors
	Bed(int, bool);// regular constructor
	
	//getters
	bool getAvailability();
	int getBedId();

	//setters
	void setAvailability(bool);
	
	
	//print
	void printBedInfo();







};

