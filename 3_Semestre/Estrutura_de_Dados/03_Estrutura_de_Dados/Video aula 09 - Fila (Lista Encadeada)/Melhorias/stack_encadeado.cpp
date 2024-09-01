#include "stack.h"
#include <cstddef>			//Para funcionar o NULL
#include <new>				//Para incluir na memoria
#include <iostream>
using namespace std;

Stack::Stack() {
	structure = NULL;			//O constructor estará apontando inicialemtne para o NULO
}

//O destrutor vai desalocar todas as incerções alocaram e não foi desalocado pela remoções
Stack::~Stack() {
	NodeType* tempPtr;									//A variavel "tempPtr" é temporaria, antes de deletar um nó,
	while (structure != NULL) {					// esse é apontato o "tempPtr" e o "structure" 
		tempPtr = structure;							//é apontato para o proximo nó, depois disso se deleta "tempPtr"
		structure = structure -> next;		//Essa SETA "->" é usada quase com a mesma função que o PONTO ".", a diferença maior é que a SETA aqui é usada pois "structure" é um PONTEIRO para "NodeType", caso contrario a sintaxe seria "structure.next".
		delete tempPtr;
	}
}

//Verifica se a pilha esta vazia.
bool Stack::isEmpty() const {
	return (structure == NULL);
}

//verifica se o usuario possui memória disponivel para alocar em novo elemento.
bool Stack::isFull() const {
	NodeType* location;
	try {															//O try{}catch{} vai verificar se acontece um erro ao tenta alocar memória
		location = new NodeType;				//Nesse trecho de codigo, o try vai tenta alocar um "NodeType" e
		delete location;								//deletar na sequencia, caso der certo o usuario pode alocar novo elemento.
		return false;
	} catch(std::bad_alloc exception) {			//caso de algum erro caira no catch, mostrando que não tem
		return true;													//mais espaço na memoria
	}
}

/*Adiciona um novo item no topo da pilha. O nó que acabou de ser criado deve
apontar para quem estava no topo da pilha e o ponteiro structure deverá
apontar para o novo nó*/
void Stack::push(ItemType item) {
	if (!isFull()) {											//Se a pilha não estiver cheia, será criado um novo "NodeType"
		NodeType* location;									//iniciado com "location", esse "location tem um campo "info" que
		location = new NodeType;						//vai receber o "item", esse novo "item" é o atual topo da Pilha
		location->info = item;							//então é preciso fazer que ele aponte para onde o "structure" apontava
		location->next = structure;					//feito isso, como o atual "item" é o topo da pilha é preciso
		structure = location;								//fazer com que o "structure" aponte para ele.
	} else {
		throw "Stack is already full!";
	}
}

//Devolve o objeto que está no topo da pilha.
ItemType Stack::pop() {
	if (!isEmpty()) {
		NodeType* tempPtr;									//é usado uma ideia parecida com o destrutor por isso foi criado "tempPtr"
		tempPtr = structure;								//e mais ou menos a mesma logica do "push", só que deletando o "item"
		ItemType item = structure->info;
		structure = structure->next;
		delete tempPtr;
		return item;
	} else {
		throw "Stack is empty!";
	}
}

void Stack::print() const {
	NodeType* tempPtr = structure;				//como não podemos mover o "structure" de lugar usamos o "tempPtr" para
	while (tempPtr != NULL) {							//isso, o "tempPtr" vai correr toda pilha enquanto ela não for NULA
		cout << tempPtr->info;							//e retornar esse valor para o usuario.
		tempPtr = tempPtr->next;
	}
	cout << endl;
}
