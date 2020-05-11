#include"Date.hpp"
#include<array>
using namespace std;

class Passenger{
private:
    
private:
    string passengerName;
    Date DateOfBirth; //creating an object of class date for the date of birth
    int trips[5];  
    int tripRequestCounter;
    
public:
    Passenger(); //default constructor
    Passenger(string, int ,int,int);
    ~Passenger();  //destructor to delete the passenger
    
    
    string getPassengerName();
    void setPassengerName(string);
    int get_TheReservation();
    int getCounter();
    void setReservationNumber(int);
    void addReservation(int);
    void printPassenger();
    void deleteReservationRequest(int);
    void getPassengerDOB(); // I don't know how to make this function a constant function in the pasenger.cpp file.
                            // I know we need to make it getPassngerDOB()const, but idk how we can do it in the implementation 
    
};
