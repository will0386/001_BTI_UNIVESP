#ifndef STACK_H
#define STACK_H

#include "item_type.h"

const int MAX_ITEMS = 100;			//Determina o maximo na pilha, mais não aloca todos os 100 vetores de uma vez

class Stack {
	private:
		int length;
		ItemType* structure;
	
	public:
		Stack();			//Construtor
		~Stack();			//Destrutor
		bool isEmpty() const;
		bool isFull() const;
		void print() const;
		
		void push(ItemType);
		ItemType pop();
};

#endif

