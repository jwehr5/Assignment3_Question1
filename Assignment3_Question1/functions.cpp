#include "functions.h"
#include <queue>
#include <iostream>
using namespace std;

bool move_to_rear(queue<int>& q) {

	bool didRemoveToRear = false;

	//Only move the first element to the rear if the queue is not empty and there is more than 1 element present.
	if (!q.empty() && q.size() > 1) {

		//Save the first element in a variable, pop it, then push it back into the queue.
		int firstElement = q.front();
		q.pop();
		q.push(firstElement);

		didRemoveToRear = true;
	}
	
	return didRemoveToRear;
}


void printQueue(queue<int> q) {

	/*
	After printing each element, pop the queue so we can move on to the next element.
	The queue is passed by value in this function so the queue won't be modified outside of this function.
	*/
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
}

