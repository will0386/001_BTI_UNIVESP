#include "queue.h"
#include <cstddef>		//Para utilização do NULL
#include <new>				//Para utilização do bad_alloc
#include <iostream>
using namespace std;

Queue::Queue() {
	front = NULL;
	back = NULL;
}

Queue::~Queue() {
	NodeType* tempPtr;
	while (front != NULL) {
		tempPtr = front;
		front = front->next;
		delete tempPtr;
	}
	back = NULL;
}

//Verifica se ainda tem espaço na memoria
bool Queue::isFull() const {
	NodeType* location;
	try {														//O "try" vai tentar alocar memoria, se não consegui
		location = new NodeType;			//vai cair no "catch"
		delete location;
		return false;
	} catch(std::bad_alloc exception) {
		return true;
	}
}

bool Queue::isEmpty() const {
	return(front == NULL);			//Pode ser usado o "back", pois em teoria quando um tiver vazio o outro estará vazio também
}

void Queue::enqueue(ItemType newItem) {
	if(!isFull()) {
		NodeType* newNode;
		newNode = new NodeType;
		newNode->info = newItem;
		newNode->next = NULL;
		if(back == NULL) {
			front = newNode;
		} else {
			back->next = newNode;
		}
		back = newNode;			
	} else {
		throw "Queue is already full!";
	}
}

ItemType Queue::dequeue() {
	if(!isEmpty()) {
		NodeType* tempPtr;
		tempPtr = front;
		ItemType item = front->info;
		front = front->next;
		if(front == NULL) {
			back = NULL;
		}
		delete tempPtr;
		return item;		
	} else {
		throw "Queue is empty!";
	}
}


void Queue::print() const {
	NodeType* tempPtr = front;
	while(tempPtr != NULL) {
		cout << tempPtr->info;
		tempPtr = tempPtr->next;
	}
	cout << endl;
}
	

