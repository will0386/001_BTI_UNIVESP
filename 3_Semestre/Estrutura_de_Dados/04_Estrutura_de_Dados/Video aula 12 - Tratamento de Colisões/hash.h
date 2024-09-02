#ifndef HASH_H
#define HASH_H
#include "aluno.h"
// Estrutura minimalista, apenas com busca, inserção e remoção.

class Hash {
	private:
		int getHash(Aluno aluno);
		int max_items;
		int length;
		Aluno* structure;
	public:
		Hash(int max_items = 100);			// Construtor com limite de 100
		~Hash();												// Destrutor
		bool isFull() const;
		int getLength() const;
		void retrieveItem(Aluno & aluno, bool & found);
		void insertItem(Aluno aluno);
		void deleteItem(Aluno aluno);
		void print();
};

#endif
