/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include"Inpatient.h"
#include<iostream>
using namespace std;

Inpatient::Inpatient() :doc(), admissionDate(), dischargeDate(), Person()
{
	duration = 0;
	bed_id = 0;
	hospitalCharge;
}

Inpatient::Inpatient(string name, Date ad, Date dd, Doctor d) :doc(d), admissionDate(ad), dischargeDate(dd), Person(name)
{
	duration = dischargeDate.getDay() - admissionDate.getDay();
	bed_id = 0;
	hospitalCharge;
}


void Inpatient::getAdmissionDate()
{
	admissionDate.printDate();
}

void Inpatient::getDischargeDate() {
	dischargeDate.printDate();
}


int Inpatient::getDuration(){
	return duration;
}
int Inpatient::getBedID()
{
	return bed_id;
}
void Inpatient::getDoctor()
{
	doc.printPerson();
}


double Inpatient::getDailyCharge(){
	return hospitalCharge;
}

void Inpatient::setAdmissionDate(int d, int m, int y)
{
	admissionDate.setDay(d);
	admissionDate.setMonth(m);
	admissionDate.setYear(y);
}
void Inpatient::setBedID(Bed b)
{
	bed_id = b.getBedId();
}

void Inpatient::setDischargeDate(int d, int m, int y){
	dischargeDate.setDay(d);
	dischargeDate.setMonth(m);
	dischargeDate.setYear(y);
}
void Inpatient::setDoctor(Doctor doctor, string name, string spec, string num){
	doctor.setName(name);
	doctor.setSpecialty(spec);
	doctor.setLicenseNum(num);
}

void Inpatient::setDailyCharge(double h){
	hospitalCharge = h;
}

double Inpatient::getTotalHospitalCharge(){
	double charge = getDuration() * hospitalCharge;
	return charge;
}
void Inpatient::removeDoctor(){

	doc.~Doctor();
}
//print function
void Inpatient::printPerson()
{
	cout << "The name of the patient is:" << getName() << endl;
	cout << "Type of patient: Inpatient" << endl;
	cout << "Admission Date: "; admissionDate.printDate();
	cout << "dischargeDate: "; dischargeDate.printDate();
	cout << "Patient Id: " << getId() << endl;
	cout << "Patient's bed number is : " << getBedID() << endl;
	doc.printPerson();
	
}
