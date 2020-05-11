/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include"Passenger.hpp"
#include<iostream>
using namespace std;

//Default constructor
Passenger::Passenger(){
    passengerName=" ";
    tripRequestCounter=0; //this counter will be incremented whenever a request for a trip is made. Since this is not a static variable, the counter will be set specifically for the passenger

    for (int i=0;i<5;i++){
        trips[i]=0;
    }
    
}

//Constructor. we can use this constructor specifically when the user is askd to enter their personal info.
Passenger::Passenger(string name,int d, int m, int y){
    passengerName=name;
    DateOfBirth.setDate(d,m,y);

    tripRequestCounter=0; //same counter as constructor, will be incremented whenever a request for a trip is made
    }


void Passenger::addReservation(int Id){ //this member function will allow a user to add up to 5 trips under their name
                                        //we are using ID because it's easier to operatre with an Id instead of the passenger's name. We can simply provide the user with an Id or ask the user to enter an Id.
    if (trips[tripRequestCounter]<6){
        trips[tripRequestCounter]=Id;
        tripRequestCounter++; //counter is incremented until counter =5
    }
    else{
        cout<<"Note:You cannot have more than 5 reservations under your name! "<<endl; //message delivered to passenger when passenger adds more than 5
    }
}

//member function to get the passenger's date of birth

void Passenger::getPassengerDOB()
{
    DateOfBirth.printDate();  // how do we turn this into a constant function. Because the date of birth is not supposed to change once it is set
}



// memberfunction to set the pasenger's name
void Passenger::setPassengerName(string name){
    passengerName= name;
}
//member function to get the passenger'name
string Passenger:: getPassengerName(){
    return passengerName;
}

void Passenger:: printPassenger(){
    cout<<"Passenger's name: "<<passengerName<<endl;
    cout<<"Passenger's Date Of Birth is: "<<endl;
    DateOfBirth.printDate();
}
int Passenger::getCounter(){
    return tripRequestCounter;
}

//This member function will allow the passenger to remove their reservation request

void Passenger:: deleteReservationRequest(int Id){
    for (int i=0; i<Id;i++)    // for every element in the array, until the value of the ID, if the position of the  array matchs the Id number, then shift the elements of that array backwards.
        if(trips[i]==Id){
            for(int j=0; j<Id;j++)
                trips[i]=trips[i+1];
        }
    tripRequestCounter--; //counter will be decremented as the IDs get succssfully removed and a message will be printed
    cout<<"Request successfully removed"<<endl;
}

//The destructor will be used to remove the trips array and the date of birth of the passenger. Don
Passenger::~Passenger()
{
    DateOfBirth.~Date(); //this will delete the Date Of birth of the passenger. Better to notify the use
    cout<<"Informatoin successfully removed"<<endl; //the name of the passenger is still intact. Must figure out how to remove it.
}
