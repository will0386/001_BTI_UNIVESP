#ifndef QUEUE_H
#define QUEUE_H
#include "node_type.h"

class Queue {
	private:
		NodeType* front;
		NodeType* back;
		
	public:
		Queue();		//Construtor
		~Queue();		//Destrutor
		bool isEmpty() const;
		bool isFull() const;
		void print() const;
		void enqueue(ItemType);
		ItemType dequeue();
};

#endif
