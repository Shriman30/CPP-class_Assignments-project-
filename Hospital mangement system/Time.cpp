/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()//Defaut constructor
{
	hour = 00;
	minute = 00;

}
Time::Time(int h, int m) //Regular Constructor
{
	hour = h;
	minute = m;
}

//Setters
void Time::setHour(int h)
{
	hour = h;
}
void Time::setMinute(int m)
{
	minute = m;
}

//Getters
int Time::getHour()
{
	return hour;
}
int Time::getMinute()
{
	return minute;
}


void Time::printTime()
{
	cout << getHour() << " : " << getMinute() << endl;
}

