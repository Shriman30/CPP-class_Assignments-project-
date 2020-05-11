/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include <iostream>
#include "ReservationManager.hpp"

using namespace std;

int main()
{
	string name, start, destination;
	Passenger* passenger = nullptr;
	ReservationRequest* request = nullptr;
	ReservationManager manager;

	name = "Mason";
	Date dob(1, 4, 1999);
	start = "Montreal";
	destination ="Belleville";
	Date travelDate(11, 2, 2020);

	passenger = new Passenger();
	passenger->Passenger(name, 1, 4, 1999);
}