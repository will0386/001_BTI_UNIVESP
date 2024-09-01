//Melhorias feitas com o auxilio do ChatGPT
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
	ItemType problematicChar = '\0';		//Varíavel, vai guardar o caracter que causou a quebra
	
	while (isMatched && character != '\n') {
		palavra += character;				//Vai colocar cada caracter na string "palavra"
		
		if (character == '{' || character == '(' || character == '[') {
			stack.push(character);
		}
		if(character == '}' || character == ')' || character == ']') {
			if(stack.isEmpty()) {
				isMatched = false;
				problematicChar = character; //Vai guarda o caracter problem. para imprimir ele
			} else {
				stackItem = stack.pop();
				isMatched = ((character == '}' && stackItem == '{') || 
										 (character == ')' && stackItem == '(') || 
										 (character == ']' && stackItem == '['));
				if (isMatched) {
					problematicChar = character; //Vai guarda o caracter problem. para imprimir ele
				}
			}
		}
		cin.get(character);
	}
	
	//Verifica se ainda há algum caracter de abertura não correspondido
	if(isMatched && !stack.isEmpty()) {
		isMatched = false;
		problematicChar = stack.pop();		//O primeiro caracter não correspondido
	}
	
	if(isMatched && stack.isEmpty()) {
		cout << "Bem formada: " << palavra << endl;		
	} else {
		cout << "Mal formada: " << palavra << endl;
		cout << "Caracter problemático: " << problematicChar << endl;
	}
}

