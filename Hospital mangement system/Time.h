/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
class Time
{
private:
	int hour, minute;

public:
	Time(); //Defaut constructor
	Time(int, int); //Regular Constructor

	//Setters
	void setHour(int);
	void setMinute(int);

	//Getters
	int getHour();
	int getMinute();

	void printTime();
};

