/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include "Book.h"

using namespace std;

class TextBook: public Book
{
private:
	string URL;
public:
	TextBook(); // Default constructor
	TextBook(string,string,int, string,int,int,int,string ); //Constructor with parameters

	string getURL(); //Gets URL
	void setURL(string); //Sets URL

	void printTextBook(); //Prints the information of the object textbook

};