/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include"Person.h"
#include"Inpatient.h"
#include"Doctor.h"
#include"Bed.h"

class Hospital
{
	private:
		Date *appointments;
		Bed *beds;
		int const capacity = 500;
		int const maxNumOfDoctors = 100;
		Inpatient* inpatients;
		Doctor*doctors;
		/*int docCounter = 0;
		int inpCounter = 0;
		int apCounter = 0;*/
	
		
	public:

		Hospital();//defualt constructor

		// adder functions
		void addBed(Bed&); // we don't need to add bed
		void addDoctor(Doctor&);   // as reference or as a pointer?
		void addPatient(Inpatient&); // as reference or as a pointer?
		void addAppointment(Date&);  // as reference or as a pointer?
		

		// remove functions

		void removeAppointment(Date&); // as reference or as a pointer?
		void removeBed();
		void removePatient(Inpatient&); // as reference or as a pointer?
		void removeDoctor(Doctor&); // as reference or as a pointer?

		//display functions

		void displayAppointment();
		void displayBeds();
		void displayDoctor(); 
		void displayInpatient();

		//print functions
		void printHospital();






		
};

