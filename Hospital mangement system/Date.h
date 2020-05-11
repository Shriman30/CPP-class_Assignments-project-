/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
class Date
{private:
	int day, month, year;

public:
	Date(); //default constructor
	Date(int, int, int); // regular constructor 
	// getters
	int getDay();
	int getMonth();
	int getYear();

	//setters
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	//print
	void printDate();
	
};

