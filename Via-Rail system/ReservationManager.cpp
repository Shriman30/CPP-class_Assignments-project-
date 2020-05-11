/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include "ReservationManager.hpp"
#include <iostream>
#include<string>

ReservationManager::ReservationManager(){
    capacity=10;
    numOfStationsLeft=6;
    request= new ReservationRequest[numOfStationsLeft*capacity];
    person=new Passenger[capacity];
}

void ReservationManager::setReservationRequest(ReservationRequest *R){
    request[R->getReservationRequestCounter()]=*R;
}
void ReservationManager::set_the_passengers(Passenger pers){
    person[person->getCounter()]=pers;
}

void ReservationManager:: modifyPassenger(Passenger pers){
    passenger= pers.getCounter();
}

//member function that deletes the reservation requests of a passenger

void ReservationManager::RemoveRequests(){
    request->~ReservationRequest();
  
}
//A member function that processes a reservation request received as a parameter. Reservation will be successful, if seats are available for all the passengers in the 
//group for the entire trip. If reservation is successfuI it should return reservation request number otherwise zero. If reservation is successful, reservation object 
//should be inserted to the reservation request array, otherwise should be deleted. If reservation is successful, you should check if this passenger is on the passenger 
//array, if not passenger should be stored in this array. The reservation number should be added to the passenger object.

bool ReservationManager::systemCapacity(string Startstation,string destination,int resNum){
    int ss=0;
    if (Startstation=="Montreal"){
        ss=0;
    }
    else if (Startstation=="Dorval"){
        ss=1;
    }
    else if (Startstation=="Brockville"){
        ss=2;
    }
    else if (Startstation=="Kingston"){
        ss=3;
    }
    else if (Startstation=="Belleville"){
        ss=4;
    }
    
    int dest=0;
    if (Startstation=="Dorval"){
        dest=1;
    }
    else if (Startstation=="Brockville"){
        dest=2;
    }
    else if (Startstation=="Kingston"){
        dest=3;
    }
    else if (Startstation=="Belleville"){
        dest=4;
    }
    else if (Startstation=="Toronto"){
        dest=5;
    }
    
    int a=0;
    for (int i=0;i<5;i++){
        if (reservationTable[i][ss]==0)
        {
            for (int j=ss;j<dest-1;j++)
            {
                if(reservationTable[i][j]==0)
                   {
                    if(j==dest-2){
                        a=i;
                        goto successful;
                    }
                }
            }
        }
    
    }
    
    successful:
    for(int i=ss; i<dest-1;i++)
    {
        reservationTable[a][i]=resNum;
    }
    for (int i = 0;i<5;i++)
    {
        for (int j=0;j<6;j++)
        { cout<<reservationTable[i][j]<<' ';
            if (j==5)
            {
                cout<<"\n";
            }
        }
    }
    return false;
}

void ReservationManager::reservationManagerInfo()
{
    cout << capacity << endl;
    cout << travelDate << endl;
    cout << numOfStationsLeft << endl;
    cout << reservationTable << endl;
    cout << person << endl;
    cout << request << endl;
    cout << passenger << endl;
}







