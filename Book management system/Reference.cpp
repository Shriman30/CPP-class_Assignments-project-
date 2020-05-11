/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include <iostream>
#include "Reference.h"

using namespace std;

int Reference::refIDGen = 0;
Reference::Reference() // Default constructor
{
	referenceIdentifier = NULL;
	title = "";
	author = "";
	yearOfPublication = 0000;
}
Reference::Reference( string t, string a, int y) //Constructor with parameters
{
	referenceIdentifier = ++refIDGen;
	title = t;
	author = a;
	yearOfPublication = y;
}
int Reference::getReferenceIdentifier()
{
	return referenceIdentifier;
}
string Reference::getTitle()
{
	return title;
}
string Reference::getAuthor()
{
	return author;
}
int Reference::getPublicationYear()
{
	 return yearOfPublication;
}

void Reference::setReferenceID()
{
	
	if (referenceIdentifier == 0)
	{
		refIDGen++;
		referenceIdentifier = refIDGen;
	}
}

void Reference::setReferenceIdentifier() 
{
	referenceIdentifier = NULL;
}
void Reference::printReference()
{
	cout <<"The reference ID is: "<< referenceIdentifier << endl;
	cout << "The title of the requested reference is: " << title << endl;
	cout << "The author of the reference is: " << author << endl;
	cout << "The year of publication is: " << yearOfPublication << endl;
}