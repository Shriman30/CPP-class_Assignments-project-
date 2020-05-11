/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include <string>
using namespace std;

class Reference
{
protected:
	static int refIDGen;
	int referenceIdentifier;
	string title;
	string author;
	int yearOfPublication;

public:
	Reference(); // default constructor 
	Reference(string, string, int); //constructor
	int getReferenceIdentifier(); // to get the reference ID
	void setReferenceID(); // sets a unique reference ID
	void setReferenceIdentifier(); // this function will be used to set 
								   //the reference Identifier locations in the
								   //manager to NULL whenever references are not stored
	string getTitle();
	string getAuthor();
	int getPublicationYear();
	void printReference();
};