#include "stack.h"
#include <iostream>
using namespace std;

int main() {
	ItemType character;
	Stack stack;
	ItemType stackItem;
	string palavra;				//Usa o std::string para guardar a palavra escrita pelo usuario.
	
	cout << "Insira uma string." <<endl;
	cin.get(character);	
	
	bool isMatched = true;
	while (isMatched && character != '\n') {
		palavra += character;				//Vai colocar cada caracter na string "palavra"
		
		if (character == '{' || character == '(' || character == '[') {
			stack.push(character);
		}
		if(character == '}' || character == ')' || character == ']') {
			if(stack.isEmpty()) {
				isMatched = false;
			} else {
				stackItem = stack.pop();
				isMatched = ((character == '}' && stackItem == '{') || 
										 (character == ')' && stackItem == '(') || 
										 (character == ']' && stackItem == '['));
			}
		}
		cin.get(character);
	}
	
	if(isMatched && stack.isEmpty()) {
		cout << "Bem formada: " << palavra << endl;		
	} else {
		cout << "Mal formada: " << palavra << endl;
	}
}

