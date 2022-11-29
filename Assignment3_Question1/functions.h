#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;
#include <queue>

/*
* move_to_rear takes the first element of the queue and moves it to the rear of the queue.
 
* @param q This is the queue where the first element will be moved to the rear.
* @return true if the operation was completed succesfully.
* @return false if the operation was not completed succesfully. 
* @return The modified queue
* @pre The queue must not be empty and must have more than 1 element present.
*/
bool move_to_rear(queue<int>& q);


/*
* printQueue prints the contents of the queue.

* @param q This is the queue whose contents will be displayed.
* @pre The queue must not be empty.
*/
void printQueue(queue<int> q);

#endif 

