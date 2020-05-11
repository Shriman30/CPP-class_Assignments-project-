/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include"Person.h"

using namespace std;
class Doctor: public Person
{
private:
	string licenseNum;
	string specialty;
	Person* patients[10]; // to get the name or id of any type of patients dealt by the doctor
	int counter = 0;
	

public:
	Doctor(); // default constructor
	Doctor(string, string, string); // Regular constructor

	//getters
	string getLicenseNum();
	string getSpecialty();

	// setters

	void setLicenseNum(string);
	void setSpecialty(string);

	void addPatient2List(Person&);
	void removeFromList(Person&);
	
	//print function
	void printList();
	void printPerson(); // ovrrides the printPerson() of class Person
};

