/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include"Doctor.h"
#include"Person.h"
#include"Time.h"
#include"Date.h"
#include"Bed.h"

using namespace std;

class Inpatient :public Person {
private:
	Date admissionDate;
	int bed_id;
	Date dischargeDate;
	Doctor doc;
	int duration;
	double hospitalCharge;

public:
	Inpatient();//default constructor
	Inpatient(string, Date, Date, Doctor);// regular constructor

	//getters
	void getAdmissionDate();
	void getDischargeDate();
	int getDuration(); // day2- day1
	int getBedID();
	void getDoctor();
	double getDailyCharge();
	double getTotalHospitalCharge();

	//setters
	void setAdmissionDate(int, int, int);
	void setBedID(Bed);
	void setDischargeDate(int, int, int);
	void setDoctor(Doctor, string, string,string); // assigns a doctor to an inpatient 
	void setDailyCharge(double);
	// remove doctor 
	void removeDoctor();
	//print function
	void printPerson();

};