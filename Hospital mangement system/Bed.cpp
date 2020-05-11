/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Bed.h"
#include<iostream>
using namespace std;


int Bed :: id = 0;

Bed::Bed(){
	id++;
	availability = true;
}

Bed::Bed(int ID, bool isAvailable) {

	ID = id++;
	availability = isAvailable;
}

 bool Bed:: getAvailability(){

	 return availability;
}

int Bed::getBedId(){
	return id;
}

void Bed:: setAvailability(bool isAvailable){
	availability = isAvailable;
}

void Bed:: printBedInfo(){
	cout << "Bed ID: " << getBedId() << endl;
	cout << "Bed status: " << getAvailability() << endl;
}


