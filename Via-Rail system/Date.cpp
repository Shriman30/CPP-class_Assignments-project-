/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include"Date.hpp"
#include<iostream>
Date::Date(){
    day= 00;
    month= 00;
    year= 0000;
}

void Date::setDate(int d,int m,int y){
    day = d;
    month =m;
    year =y;
}

int Date::getDay()
{
    return day;
}

int Date:: getMonth()
{
    return month;
}
int Date:: getYear(){
    return year;
}

void Date::printDate(){   //print the date, i.e all the data memebers of the class Date
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}
