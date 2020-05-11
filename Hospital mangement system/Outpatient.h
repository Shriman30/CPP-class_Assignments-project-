/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include"Person.h"
#include"Doctor.h"
#include"Date.h"
#include "Time.h"



class Outpatient:public Person
{
private:
	Date appointmentDate;
	Time appointmentTime;
	const double hospitalCharge = 30.50;
	Doctor doctor;

public:
	Outpatient();//default constructor
	Outpatient(string, Date, Time, Doctor); //regular constructor

	//getters and setters and print
	double getHospitalCharge();
	void printPerson();
	void getAppointmentTime();
	void setAppointmentTime(int, int);
	void getAppointmentDate();
	void setAppointmentDate(int, int, int);
	void addDoctor(Doctor, string, string,string);
	void removeDoctor();

};

