/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Person.h"
#include<iostream>
using namespace std;

int Person::idGen = 0;
Person::Person()//Default constructor
{
    name = "";
    id = 0;
}

Person::Person(string n) {
    name = n;
    id = idGen++;
}


int Person:: getId() {
    return id;
}

//setter
void Person::setName(string n) {
    name = n;
}

//getters
string Person::getName(){
    return name;

}
