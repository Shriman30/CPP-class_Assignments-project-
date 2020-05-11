/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Outpatient.h"
//#include"Person.h"
#include<iostream>
using namespace std;

Outpatient::Outpatient() :doctor() //defualt constructor
{
	//doctor = new Doctor;
	hospitalCharge;
	
}

Outpatient::Outpatient(string n , Date ad, Time at, Doctor doc):Person(n), doctor(doc)// regular constructor
{
	appointmentDate = ad;
	appointmentTime = at;
	hospitalCharge;
}

double Outpatient::getHospitalCharge() {
	return hospitalCharge;
}

void Outpatient::getAppointmentTime() {
	appointmentTime.printTime();
}

void Outpatient::setAppointmentTime(int h, int m)
{
	appointmentTime.setHour(h);
	appointmentTime.setMinute(m);
}

void Outpatient::getAppointmentDate()
{
	appointmentDate.printDate();
}

void Outpatient::setAppointmentDate(int d, int m, int y) {
	appointmentDate.setDay(d);
	appointmentDate.setMonth(m);
	appointmentDate.setYear(y);
}

void Outpatient::addDoctor(Doctor doctor, string name, string spec,string num){
	doctor.setName(name);
	doctor.setSpecialty(spec);
	doctor.setLicenseNum(num);
}

void Outpatient::removeDoctor(){
	doctor.~Doctor();
}


void Outpatient::printPerson() {
	cout << "Patient name: " << getName() << endl;
	cout << "Patient ID: " << getId() << endl;
	cout << "Appointment Date: ";
	appointmentDate.printDate();
	cout << "Appointment Time: ";
	appointmentTime.printTime();
	cout << "The patient has an appointment with :"<<endl;
	doctor.printPerson();
}