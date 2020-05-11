/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/

#include"Doctor.h"
#include "Outpatient.h"
#include "Inpatient.h"
#include "Hospital.h"
#include <iostream>
using namespace std;

int main() {
	/*Doctor d1("Steve", "Dentist", "A234123R");
	Doctor d2("Cole", "Pediatrician", "FE8867FE");
	Date date1(01, 01, 2020);
	Date date2(05, 01, 2020);
	Time time1(12, 10);

	Hospital h1();

	Outpatient patient("Bob", date1, time1, d1);
	Inpatient patient2("Karen", date1, date2, d1);*/

	Hospital* JewGen;
	JewGen= new Hospital;

	


	Doctor* strange;
	strange = new Doctor;
	strange->setName("Steve");
	strange->setName("Cardiologist");
	strange->setLicenseNum("A234123R");

	Time * time1;
	time1 = new Time;
	time1 ->setHour(12);
	time1->setMinute(00);



	Date* date1;
	date1 = new Date;
	date1->setDay(2);
	date1->setMonth(4);
	date1->setYear(2020);

	Date* date2;
	date2->setDay(6);
	date2->setMonth(4);
	date2->setYear(2020);


	Outpatient* p1;
	p1 = new Outpatient;
	p1->setName("Bob");
	p1->setAppointmentTime(12,30);
	p1->setAppointmentDate(01,01,2020);



	Inpatient* inp1;
	inp1 = new Inpatient;
	inp1->setName("Bob");
	inp1->setAdmissionDate(12, 01, 2020);
	inp1->setDischargeDate(12,03,2020);

	JewGen->printHospital();
	/*d1.printPerson();
	cout << endl;

	d1.addPatient2List(patient2);
	d1.addPatient2List(patient);

	d1.printList();

	patient.getName();
	*/

}