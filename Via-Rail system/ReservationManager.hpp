/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include"ReservationRequest.hpp"
#include<vector>
using namespace std;

class ReservationManager{
private:
    Date* travelDate;
    int capacity;
    int numOfStationsLeft;
    int  **reservationTable;
    Passenger *person;
    ReservationRequest *request;
    int passenger=0;

    
public:
    
    
    ReservationManager();
    void setReservationRequest(ReservationRequest*);
    
    void set_the_passengers(Passenger);
    void modifyPassenger(Passenger);
    void printNumOfPassengers();
    void printList();
    ~ReservationManager();
    
    
    

    void deleteOldRequests(int); //member function that deletes the old reservation requests of a passenger

    
    void deleteAllRequestAfterTravelDate(); //A member function that deletes all reservation requests after the travel date.
    void RemoveRequests();//A member function that receives a reservation request number and cancels reservation request.
    bool systemCapacity(string,string,int); //A member function that processes a reservation request received as a parameter. 
                                            //Reservation will be successful, if seats are available for all the passengers in the group for the entire trip. If reservation 
                                            //is successfuI it should return reservation request number otherwise zero. If reservation is successful, reservation object should 
                                            //be inserted to the reservation request array, otherwise should be deleted. If reservation is successful, you should check if this 
                                            //passenger is on the passenger array, if not passenger should be stored in this array. The reservation number should be added to the passenger object.



    void reservationRequestNum(ReservationRequest*);// A member function that receives a reservation request number as a parameter and outputs the details of the reservation.
    void reservationManagerInfo();
};





