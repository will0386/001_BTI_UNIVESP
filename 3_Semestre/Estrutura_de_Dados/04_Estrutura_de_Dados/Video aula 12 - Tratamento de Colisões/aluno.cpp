#include "aluno.h"

// Construtor
Aluno::Aluno() {
	this->ra = -1;			// Será configurado o "ra" com -1, qua vai significar que a posição esta vazia
	this->nome = "";			// Configurado uma string vazia para nome
};

// Construtor
Aluno::Aluno(int ra, std::string nome) {			// construtor com parametros
	this->ra = ra;			// Vai colocar o "ra" que veio por parametro no atributo "ra"
	this->nome = nome;			// Vai colocar o "nome" que veio por parametro no atributo "nome"
}

// Para obter o nome
string Aluno::getNome() const {
	return nome;
}

// Para obter o ra
int Aluno::getRa() const {
	return ra;
}
