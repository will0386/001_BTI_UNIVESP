#ifndef NODETYPE_H
#define NODETYPE_H

typedef char ItemType;

//estrutura usada para guardar a informação e o endereço do proximo elemento.
struct NodeType {
	ItemType info;
	NodeType* next;
};

#endif
