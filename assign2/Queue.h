//File Name : Queue.h
//Place for linkedlist manipulations
// Author : Amit Choudhary

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>
#include "QueueItem.h"

using namespace std;

class Queue {
	public:
		Queue();    // ctor inits a new empty Queue
		~Queue();   // dtor erases any remaining QueueItems
		void addItem(const char *pData);
		void removeItem();
		void print();
		void erase();
	private:
		QueueItem *_pHead; // always points to first QueueItem in the list
		QueueItem *_pTail; // always points to the last QueueItem in the list
		int _itemCounter;  // always increasing for a unique id to assign to each new QueueItem
};
#endif
