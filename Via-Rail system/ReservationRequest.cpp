/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include"ReservationRequest.hpp"
#include<iostream>
using namespace std;

ReservationRequest::ReservationRequest(){  //default constructor
    passenger=nullptr; //Passenger pointer is initialized as null pointer
    departureStation="";
    arrivingStation="";
    reservationID=0;
    numOfSeatsRequested=0;
    travelling=nullptr; //Travelling pointer is initialized as a null pointer
}

int ReservationRequest:: resReqNumGenerator=0; //static integer must be defined and intialized before being implemented in the constructor

//constructor
ReservationRequest::ReservationRequest(string start, string end, int d, int m,int y, int seats,Passenger* person){
    passenger =person;
    departureStation=start;
    arrivingStation=end;
    // restrictions for seat requests
     if (seats>=1&& seats<=4)
         numOfSeatsRequested=seats;
    else if(seats>=5)
        cout<<"You cannot request for more than 5 seats"<<endl; //print this if more than 5 seats requested
    else
        cout<<"You must request at least 1 seat to book your travel"<<endl; //print user requests 0 seats
    //end of restriction

    travelling = new Date(d,m,y); //setting travlling date to d,m,y.
    resReqNumGenerator++; // the generator is incremented everytime a Reservation Request object is created.
    passenger -> addReservation(reservationID); //the value of the reservationID will be store in the trip array from the passenger class.
}

int ReservationRequest::getReservationRequestCounter(){
    return this->resReqNumGenerator;
}

Passenger* ReservationRequest:: getPassenger()const{
    return passenger;
}

//function to get the number of seats requested by the passenger
int ReservationRequest:: getNumOfSeats(){
    return numOfSeatsRequested;
}


void ReservationRequest::printReservationRequest(){
    cout<<travelling<<endl; //printing the travelling date.
    cout<<resReqNumGenerator<<endl; //printing the reservation request generator.
    cout<<numOfSeatsRequested<<endl;//printing the number of seats requested.
    cout<<departureStation<<endl;// printing the departure station.
    cout<<arrivingStation<<endl; //printing the arriving station.
    cout<<reservationID<<endl; //printing the reservation ID.
    cout<<passenger<<endl; //printing the passenger object.
    
}

//The destructor will be used to remove the travelling date of the passenger along with the reservations that were made under their name
ReservationRequest::~ReservationRequest(){
    delete travelling;
    passenger->deleteReservationRequest(reservationID);
}
