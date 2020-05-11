/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() //Default contructor
{
	startPage = 0;
	endPage = 0;
	publisher = "";
	numberOfPages = 0;
}

Book::Book(string n2, string a2, int y2, string pub, int sp, int ep, int np):Reference (n2,a2,y2) // Parametrized Constructor
{
	publisher = pub;
	startPage = sp;
	endPage = ep;
	numberOfPages = np;
}
int Book::getNumberOfPages()
{
	return numberOfPages;
}
string Book::getPublisher()
{
	return publisher;
}

void Book::printBook() {
	printReference(); //We used this function to print the herited data members from the class Reference
	cout << "The number of pages in this book is: "<<getNumberOfPages()<<endl;
	cout <<"The publisher of this book is: "<<getPublisher()<<endl;
}
