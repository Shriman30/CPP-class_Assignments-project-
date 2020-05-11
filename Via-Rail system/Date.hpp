/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
*/
#include<string>
using namespace std;

class Date{
private: //data members
    int day;
    int month;
    int year;
    
public: //member functiond
    Date(); //default constructor
    Date(int, int, int); //constructor
    void setDate(int,int,int);
    int getDay();
    int getMonth();
    int getYear();
    
    void printDate(); //function to print all the data members
};
