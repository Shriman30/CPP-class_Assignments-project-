/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include"Passenger.hpp"
using namespace std;

class ReservationRequest{
private:
    static int resReqNumGenerator;
    string departureStation;  //Any stations between Montreal and Belleville.
    string arrivingStation; // Any stations between Dorval and Toronto.
    int numOfSeatsRequested; //can be from 1-4 seats
    int reservationID; //  This would be used a reservation request must be either added or removed from the passenger.
    Passenger* passenger;  //pointer to an object of class passenger to get the information of the passenger
    Date* travelling; // pointer to an object of class Date, which will be used to determine the travelling date of the passenger.
    int counter;  // integer variable as a request number.Whenever the generator is incremented by one, the value of the generator 
                  //will be assigned as a reservation Request Member to the counter. This counter will then be used to store the 
                  //reservation Request Number in the TripCounter found in the passenger class.
    
public:
    ReservationRequest();   //Default constructor.
    ReservationRequest(string, string, int, int,int, int,Passenger*);
    ~ReservationRequest(); //destructor
    
    int getReservationRequestCounter();
    void printReservationRequest(); // this will print all the information
    Passenger*getPassenger()const;
    int getNumOfSeats(); //function to get the number of seats
    
};
