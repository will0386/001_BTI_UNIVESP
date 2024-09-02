#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
using namespace std;

class Aluno {
	private:
		int ra;			// O "ra" será a chave de pesquisa
		std::string nome;	
	public:
		Aluno();			//Construtor sem parametros
		Aluno(int ra, std::string nome);			//Construtor com paramentros para o usuario poder configurar o "ra" e o "nome", como ele quiser.
		string getNome() const;
		int getRa() const;
};

#endif
