/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include "Reference.h"

using namespace std;

class Book : public Reference
{
protected:
	int startPage;
	int endPage;
	string publisher;
	int numberOfPages;

public: 
	Book(); //Default constructor
	Book(string, string, int, string, int, int, int); //Constructor with parameters
	int getNumberOfPages(); //Gets the number of pages
	string getPublisher(); // gets the publisher
	void printBook(); // Prints all the information of the object book

};