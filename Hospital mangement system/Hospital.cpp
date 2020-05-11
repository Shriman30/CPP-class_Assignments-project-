/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Hospital.h"
#include<iostream>

using namespace std;

Hospital::Hospital()  // default constructor
{
	beds = new Bed[capacity];  
	appointments = new Date[500]; // random capacity for number of appointments taken into the hospital
	doctors = new Doctor[maxNumOfDoctors]; // defined maxMumOfDoctors = 100 in header 
	inpatients = new Inpatient[capacity]; // Inpatients and Beds have the same capacity
}

void Hospital::addDoctor(Doctor& d)   //Adding the doctor
{										// adds the object of class Doctor to the the doctors array
	for (int i =0; i< 500;i++)
	{
		if (doctors[i].getName() == "")
		{
			doctors[i] = d; 
			cout<<"Doctor successfully added"<<endl;
			/*docCounter++;*/
			return;
		}
		
	}
	cout << "operation unsuccessful" << endl;
}
void Hospital::addPatient(Inpatient& p)
{
	for (int i = 0; i < capacity; i++)
	{
		if (inpatients[i].getId() == 0)
		{
			inpatients[i]= p;

			cout << "The patient has been added to the system." << endl;
			//inpCounter++;
			return;
		}
	}
	cout << "The patient has NOT been added to the system." << endl;
}
void Hospital::addAppointment(Date& d)
{
	for (int i = 0; i < 500; i++)
	{
		if (appointments[i].getDay()== 0)
		{
			appointments[i] = d;
			cout << "Appointment added to the system." << endl;
			//apCounter++;
			return;
		}
	}
	cout << "Appointment NOT added to the system." << endl;
}

//void Hospital:: addBed(Bed& b){
//	for (int i = 0; i < capacity; i++)
//	{
//		if (beds[i].getAvailability() == true){
//			// beds[i].setName();
//			beds[i].setAvailability(false);
//			cout << "Patient Successfully addedd to bed" << endl;
//			return;
//		}
//	}
//}












// Remove functions

void Hospital::removeAppointment(Date& d)
{
	for (int i = 0; i < 499; i++)
	{
		if (appointments[i].getDay() == d.getDay())
		{
			if (appointments[i].getMonth() == d.getMonth())
			{
				if (appointments[i].getYear() == d.getYear())
				{
					appointments[i] = appointments[i + 1];
				}
			}
		}
	}
	//apCounter--;
}

void Hospital::removeDoctor(Doctor& d)
{
	for (int i = 0; i < capacity; i++)
	{
		if (doctors[i].getLicenseNum() == d.getLicenseNum())
		{
			doctors[i].~Doctor(); //what happens at that position? do you need to shift it?
			cout << "Doctor successfully removed" << endl;
		}
	}
	//docCounter--;
}

void Hospital::removePatient(Inpatient& p)
{
	for (int i = 0; i < capacity; i++)
	{
			if (inpatients[i].getId() == p.getId())
			{
				inpatients[i].~Inpatient();
				cout << "Inatient successfull removed" << endl;
			}
	}
}

// Display functions
void Hospital::displayAppointment()
{
	cout << "Appointments: " << endl;
	for (int i = 0; i < 500; i++)
	{
		if (appointments[i].getDay() != 0)
		{
			appointments[i].printDate();
		}
	}
}

void Hospital::displayBeds()
{
	for (int i = 0; i < capacity; i++)
	{
		beds[i].printBedInfo();
	}
}
void Hospital::displayDoctor()
{
	for (int i = 0; i < maxNumOfDoctors; i++)
	{
		if (doctors[i].getLicenseNum() != "")
		doctors[i].printPerson();
	}
}
void Hospital::displayInpatient()
{
	for (int i = 0; i < capacity; i++)
	{
		if (inpatients[i].getName() != "")
		inpatients[i].printPerson();
	}
}