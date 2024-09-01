#include "queue.h"
#include "stack.h"
#include <iostream>
using namespace std;

int main() {
	bool palindrome = true;
	
	char character;
	char stackChar;
	char queueChar;
	string palavra;			//para guardar a palavra escrita pelo usuario
	
	Stack stack;
	Queue queue;
	
	cout << "Adicione uma string." << endl;
	cin.get(character);
	while(character != '\n') {
		palavra += character;				//Vai armazenar a string na variavel "palavra"
		
		stack.push(character);
		queue.enqueue(character);
		cin.get(character);
	}
	while(palindrome && !queue.isEmpty()) {
		stackChar = stack.pop();
		queueChar = queue.dequeue();
		if(stackChar != queueChar) {
			palindrome = false;
		}
	}
	
	if(palindrome) {
		cout << "A string: '" << palavra << "' é um Palindrome." << endl;
	} else {
		cout << "A string: '" << palavra << "' não é um Palindrome." << endl;
	}
	return 0;
}
	
