/*
Jayden Wehr
main.cpp

*/

#include <iostream>
#include "functions.h"
#include <queue>
using namespace std;

int main() {

	//Create a queue of integers
	cout << "Creating a queue adding the following integers in the following order: 1 5 14 30 57 " << endl;

	queue<int> q;
	q.push(1);
	q.push(5);
	q.push(14);
	q.push(30);
	q.push(57);
	

	//Calling move_to_rear 
	cout << "Calling move_to_rear..." << endl;
	cout << "Did we succesfully move the first element to the rear: " << move_to_rear(q) << " [Should be 1]" << endl;

	//Print out the contents of our queue
	cout << "Let's print out the contents of our modified queue: ";
	printQueue(q);
	cout << "[Should be 5 14 30 57 1]" << endl;

	cout << endl;
	cout << "//////////////////////////////////////////////////////" << endl;
	cout << endl;

	//////////////////////////////////////////////////////////////////////////
	
	//Create a queue of 1 element
	cout << "Now lets create a queue of 1 element. We'll push the integer 10 into the queue." << endl;
	queue<int> q2;
	q2.push(10);


	//Calling move_to_rear
	cout << "Did we succesfully move the first element to the rear: " << move_to_rear(q2) << " [Should be 0]" << endl;
	
	cout << endl;
	cout << "//////////////////////////////////////////////////////" << endl;
	cout << endl;

	///////////////////////////////////////////////////////////////////////

	//Creating a queue with no elements
	cout << "Now we'll create a queue with no elements" << endl;
	queue<int> q3;

	//Call move_to_rear
	cout << "Did we succesfully move the first element to the rear: " << move_to_rear(q3) << " [Should be 0]" << endl;

	


	return 0;
}