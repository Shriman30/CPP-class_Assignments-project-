/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include"Doctor.h"
#include <iomanip>
#include<iostream>
using namespace std;

Doctor::Doctor() :Person() {
	specialty = "";
	licenseNum = "";
	for (int i =0; i<10;i++){
		patients[i] = nullptr;

	}
}

Doctor::Doctor(string name, string spec, string licenseNo) : Person(name) {
	specialty = spec;
	licenseNum = licenseNo;
	for (int i =0; i<10;i++){
		patients[i] = nullptr;

	}
	
}

string Doctor::getLicenseNum() {
	return licenseNum;
}
string Doctor::getSpecialty() {
	return specialty;
}

void Doctor::setLicenseNum(string num) {
	licenseNum = num;
}
void Doctor::setSpecialty(string spec) {
	specialty = spec;
}

void Doctor::addPatient2List(Person& p)
{
	for (int i = 0; i < 10; i++)
	{
		if (patients[i] == nullptr)
		{
			patients[i] = &p;
			cout << "Patient successfully added to list" << endl;
			break;

		}else{
			cout << "Unsuccessful" << endl;
		}
		
	}
	
 }

void Doctor::printList()
{
	cout << "Patient ID" << setw(23) << "Patient Name" << endl;
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << setw(5)<<patients[i]->getId()<< setw(20) << patients[i]->getName() <<endl;
		
	}
}
void Doctor:: removeFromList(Person &p){
	// remove
	for (int i = 0; i < 10; i++)
	{
		if (patients[i]->getId() == p.getId())
		{
			patients[i] = nullptr;
			cout<<"Patient successfully removed from the list"<<endl;
		}
	}
}

void Doctor::printPerson() {
	cout << "Dr. name: " << getName() << endl;
	cout << "Specialty: " << getSpecialty() << endl;
	cout << "License Number: " << getLicenseNum() << endl;
}