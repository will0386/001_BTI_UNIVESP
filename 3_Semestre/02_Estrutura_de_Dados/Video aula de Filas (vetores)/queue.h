#ifndef QUEUE_H
#define QUEUE_H

#include "item_type.h"

const int MAX_ITEMS = 100;

class Queue {
	private:
		int front;
		int back;
		ItemType* structure;
	
	public:
		Queue();		//Constructor
		~Queue();		//Destruidor
		bool isEmpty() const;
		bool isFull() const;
		void print() const;
		void enqueue(ItemType);  //O "enqueue" estará colocando elementos na fila
		ItemType dequeue();			//O "dequeue" estará retirando elementos da fila
};

#endif
