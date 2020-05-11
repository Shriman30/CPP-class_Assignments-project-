/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "TextBook.h"
#include <iostream>
using namespace std;

TextBook::TextBook() //Default constructor
{
	URL = "";
}

TextBook::TextBook(string t3, string a3, int y3, string pub, int sp, int ep, int np, string url): Book(t3,a3,y3,pub,sp,ep,np) //Parametrized constructor
{

	URL = url;
}

string TextBook::getURL()
{
	return URL;
}

void TextBook::setURL(string url)
{
	URL = url;
}

void TextBook::printTextBook()
{
	printBook(); // some data members of this class are derived from the class book
	cout << "The URL of this textbook is: " <<getURL()<<endl;
}
