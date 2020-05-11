/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Date.h"
#include<iostream>
using namespace std;

Date::Date() //default constructor
{
	day = 00;
	month = 00;
	year = 00;
}

Date::Date(int d, int m, int y) // regular constructor 
{
	day = d;
	month = m;
	year = y;
}

// getters
int Date::getDay() {
	return day;
}
int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

//setters
void Date::setDay(int d) 
{
	day = d;
}

void Date::setMonth(int m) 
{
	month = m;
}

void Date:: setYear(int y) 
{
	year = y;
}

//print
void Date::printDate()
{
	cout << getDay() << "-" << getMonth() << "-" << getYear() << endl;
}