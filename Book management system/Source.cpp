/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include <iostream>
#include "Book.h"
#include "Article.h"
#include "TextBook.h"
#include"ReferenceManager.h"

using namespace std;

void adding(bool, Reference&);
void deleteR(bool,ReferenceManager&,int);
void exist(bool,ReferenceManager&,int);

int main()
{
	Reference r1("C++","Joe",2000);
	Reference r2("Java","Tom",2019);
	Article a1("An Article", "Kevin", 2012, 25, 36);
	Book b1("A book", "kim", 2035,"hello",26, 66,1000);
	TextBook t1("A book", "kim", 2035, "hello", 26, 66, 1000, "abc3432");
	TextBook t2("A book", "kim", 2035, "hello", 26, 66, 1000, "abc3432");

	cout << "REFERENCE INFORMATION" << endl; // Dispays all the information of the references.
	cout << "-----------------------" << endl;
	
	cout << "Reference 1: \n";
	r1.printReference();
	cout << endl;

	cout << "Reference 2: \n";
	r2.printReference();
	cout << endl;

	cout << "Article: \n";
	a1.printArticle();
	cout << endl;

	cout << "Book: " << endl;
	b1.printBook();
	cout << endl;
	
	cout << "Textbook 1: \n";
	t1.printTextBook();
	cout << endl;

	cout << "Textbook 2: \n";
	t2.printTextBook();
	cout << endl;

	ReferenceManager m1(5); // Sets the number of spaces allocated in the Reference Manager.

	cout << "---------------------------------------------------------" << endl;
	cout << "Adding the references into the manager: " << endl;
	adding(m1.add(r1),r1);
	adding(m1.add(r2),r2);
	adding(m1.add(a1),a1);
	adding(m1.add(b1),b1);
	adding(m1.add(t1),t1);
	adding(m1.add(t2),t2);
	cout << endl;

	cout << "---------------------------------------------------------" << endl;
	cout << "Getting the reference ID from the manager at each position: " << endl;
	cout << m1.getRefId(0) << endl;
	cout << m1.getRefId(1) << endl;
	cout << m1.getRefId(2) << endl;
	cout << m1.getRefId(3) << endl;
	cout << m1.getRefId(4) << endl;
	cout << endl;

	cout << "---------------------------------------------------------" << endl;

	deleteR(m1.deleteRef(0),m1,0);
	deleteR(m1.deleteRef(2),m1,2);
	cout << "New state of the manager after deleting some references:" << endl;
	cout << m1.getRefId(0) << endl;
	cout << m1.getRefId(1) << endl;
	cout << m1.getRefId(2) << endl;
	cout << m1.getRefId(3) << endl;
	cout << m1.getRefId(4) << endl;
	cout << endl;

	cout << "--------------------------------------------------------------" << endl;
	cout << "If we add another reference after deleting some references. "<< endl;
	adding(m1.add(t2), t2);
	cout << m1.getRefId(0) << endl;
	cout << m1.getRefId(1) << endl;
	cout << m1.getRefId(2) << endl;
	cout << m1.getRefId(3) << endl;
	cout << m1.getRefId(4) << endl;
	cout << endl;

	cout << "Searching for the requested ID in the manager: " << endl;
	exist(m1.searchRefID(2),m1,2);
	exist(m1.searchRefID(7), m1, 7);
	
}
void adding(bool a, Reference& r )
{
	if (a == true)
	{
		cout << "The reference of ID "<<r.getReferenceIdentifier()<<" has been added into the Reference Manager." << endl;
		//counter++;
	}
	else cout << "The reference of ID " <<r.getReferenceIdentifier()<<" has NOT been added into the Reference Manager." << endl;
}
void deleteR(bool b,ReferenceManager& m, int p)
{
	if (b == true)
	{
		cout << "The reference at position " << m.getRefId(p) << " has been deleted." << endl;
	}
	else cout << "The reference at the position " << m.getRefId(p) << " has NOT been deleted." << endl;
}
void exist(bool c, ReferenceManager& m, int id)
{
	if (c == true)
		cout << "The reference with the ID " << id << " exists." << endl;
	else cout << "The reference with the ID " << id << " does NOT exist." << endl;
}