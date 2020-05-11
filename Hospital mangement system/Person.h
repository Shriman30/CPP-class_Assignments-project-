/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include<string>
using namespace std;
class Person
{
protected:
	int id;
	string name;

private:
	static int idGen;

public:
	Person();//Default constructor
	Person(string); //Regular constructor


	// getter
	string getName(); // overriden by derived classes
	int getId();

	//setter
	void setName(string);

	//print
	virtual void printPerson()=0; //overriden by derived classes
	
	
};

