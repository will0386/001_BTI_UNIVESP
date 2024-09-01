#include "stack.h"
#include <iostream>
using namespace std;

int main() {
	ItemType character;
	Stack stack;
	ItemType stackItem;
	
	cout << "Adicione uma String. " << endl;
	cin.get(character);
	
	// Esse "while" vai ficar empilhando os caracteres até o usuario apertar o "ENTER" no teclado
	while (character != '\n')
		{
			stack.push(character);
			cin.get(character);
		}
	
	// Estará removendo o elemento da pilha e o colocando na saida padrão
	while (!stack.isEmpty())
		{
			stackItem = stack.pop();
			cout << stackItem;
		}
		
	cout << endl;
}
