/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#pragma once
#include "Reference.h"
#include "Book.h"
#include "TextBook.h"

using namespace std;

class ReferenceManager
{
private:
	Reference *container; // this is the container to store the references in the array
	int capacity; // the size of the array will be fixed to the value of capacity
	int counter; // Counts the number of references added in the manager
public:
	ReferenceManager(int);
	bool add(Reference & reference);
	int getRefId(int pos);    //  returns the identifier of the Reference object stored at position pos of the Reference Manager
	bool deleteRef(int pos);    // removes the element at position pos of the ReferenceManager and returns true, or returns false if pos was not a valid index
	bool searchRefID(int);  //  Searches the reference ID. When found, returns true. If not, false. 
};