#include "stack.h"
#include <iostream>
using namespace std;

//Estruturação do Construtor e do Destruidor
Stack::Stack()
{
	length = 0;
	structure = new ItemType[MAX_ITEMS]; //Isso faz a alocação dinamica do vetor dentro do construtor.
}

Stack::~Stack()
{
	delete [] structure;
}

// Verifica se esta vazio, será usado no pop.
bool Stack::isEmpty() const
{
	return (length == 0);
}

// Verifica se esta cheio, será usado no push.
bool Stack::isFull() const
{
	return (length == MAX_ITEMS);
}

// Vai incluir itens na pilha
void Stack::push(ItemType item)
{
	if (!isFull()) {							//Vai verificar se esta cheio
		structure[length] = item;		//Se não estiver cheio, será colocado o novo elemento na posição "length"
		length++;										//vai inclimentar a tamanho na variavel "lenght"
	} else {
		throw "Stack is already full!";		// Não é essencial para esse codigo, mais caso tentem colocar itens alem do maximo, vai retornar um erro que pode ser tratado por outra pessoal ou por um "TRY CATCH"
	}
}

// Vai retirar itens da pilha
ItemType Stack::pop()
{
	if (!isEmpty()) {													//Vai verificar se esta vazio
		ItemType aux = structure[length - 1];		//Vai retirar o elemento que esta no topo da pilha e coloca-ló na variavel "AUX"
		length--;																//Vai retirar uma posição de "lenght"
		return aux;															//Vai entregar o elemento retirado da Pilha para quem solicitou.
	} else {
		throw "Stack is empty!";		// Não é essencial para esse codigo, mais caso tentem colocar itens alem do maximo, vai retornar um erro que pode ser tratado por outra pessoal ou por um "TRY CATCH"
	}
}

// Imprimi a pilha
void Stack::print() const
{
	cout << "Pilha = ";
	for (int i = 0; i < length; i++) {
		cout << structure[i];
	}
	cout << endl;
}
