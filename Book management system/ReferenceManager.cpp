/*Shangirna Rajaratnam #40124972
Shriman Vinayagamoorthy #40128897
Operating System: Windows 10
Environment: Microsoft Visual Studio
*/
#include "ReferenceManager.h"
#include<array>
#include <iostream>

using namespace std;
ReferenceManager::ReferenceManager(int cap) //Parametrized constructor
{
	capacity = cap;
	container = new Reference[capacity];
	
}
int counter = 0; // Initializing the counter to 0 because there are no references added yet.
bool ReferenceManager::add(Reference & reference)  //adding references into the array
{
	for (int i = 0; i < capacity; i++)
	{
		if (container[i].getReferenceIdentifier() == NULL)
		{
			container[i] = reference;
			counter++;
			return true;
		}
	}
	if (counter != capacity)
	{
		container[counter] = reference;
		return true;
	}
	
	return false;

}

int ReferenceManager::getRefId(int pos) // Gets the ID at the requested position
{
	if (pos < capacity)
		return container[pos].getReferenceIdentifier();
}

bool ReferenceManager::deleteRef(int pos) // Removes the object from the requested position
{
	if (pos >= capacity)
		return false;
	else
	{
		for (int i = pos; i < capacity - 1; i++)
		{
			container[i] = container[i + 1];
		}
		counter--;
		for (int i = pos; i < capacity - 1; i++) 
		{
			if (container[i].getReferenceIdentifier() == container[i + 1].getReferenceIdentifier())
				container[i + 1].setReferenceIdentifier();
		}
		return true;
	}
	
		}
	

bool ReferenceManager::searchRefID(int id) // Verifies if the requested ID exists or not
{
	for (int i = 0; i < capacity; i++)
	{
		if (container[i].getReferenceIdentifier() == id)
			return true;
	}
	return false;
}
