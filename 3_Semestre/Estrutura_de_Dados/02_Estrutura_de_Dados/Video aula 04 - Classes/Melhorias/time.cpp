/* Implementação da class Time
durante a video aula */
#include <iostream> //Para usar a função std::cout, que é a "Saída de Caracter Padrão".
#include "time.h"  //Para visualizar a classe Time e utilizar ela.

/*Quando se quer incluir classes e ou arquivos padrôes do C++ se utiliza "<>" e no meio o nome do arquivo e ou classe.
Quando se deseja incluir classes e ou arquivos criados pelo programador é necessario usar as "" e no meio o nome do arquivo e ou classe, é importante que o arquivo esteja no mesmo diretorio e ou pasta.*/

using namespace std; //Para escrever o cout ao invés de std::cout, mais isso é valido para todos os objetos da classe iostream como o endl.

/* 
Getters, esse metodo de acesso pode retornar os valores de membro 
privado 'hour' sem expor ele isso traz segurança para o codígo.
Inclui a implementação para todos os mètodos para isso usamos o "::" de resolução de escopo.
O operador "::", ele vai parear a classe com a implementação.
*/

int Time::getHour() const {
	return hour;
}
/*
Dentro da arquivo time.h tem a classe "Time" com os getters mais sem os metodos.
Quando quero disser qual é o metodo:
	é colocado o "INT", que era o retorno decladado
	"TIME::" que opera a resolução do escopo com o "GETHOUR".
	e uso o "CONST", pois ele garante que não vai ter alteração o atributo "HOUR"
*/
int Time::getMinute() const {
	return minute;
}

int Time::getSecond() const {
	return second;
}

/*
Setters, Nos métodos "set", a classe está recebendo como parâmetro uma
variável com o mesmo nome do atributo. Esse fato faz com que o
atributo seja "escondido". Por exemplo, no método setHour abaixo,
quando usarmos a variável "hour", estaremos nos referindo ao
parâmetro e não ao atributo da classe.

Para contornar esse problema, usamos a palavra reservada
"this". Assim:
	this->hour, this->minute e this->second se referem aos atributos.
	hour, minute e second se referem aos parâmetros dos métodos abaixo.
*/

void Time::setHour(int hour) {
	this->hour = hour;
}

void Time::setMinute(int minute) {
	this->minute = minute;
}

void Time::setSecond(int second) {
	this->second = second;
}

void Time::print() const {
	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond() {
	second += 1;
	if (second >= 60) {
		second = 0;
		minute += 1;
	}
	if (minute >= 60) {
		minute = 0;
		hour += 1;
	}
	if (hour >= 23) {
		hour = 0;
	}
}

/*
Contrutor, nessa sintaxe alternativa para inicialização dos atributos.
Colocamos uma lista de inicialização após a declaração dos parâmetros. para separar os parâmetris da lista de inicialização, usamos ":". a lista possui a seguinte sintaxe:
	atributo1(parametroA), atributo2(parametroB), ..., atributoN(parametroN).
*/

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {
	/*
	O corpo do método executa após as inicializações. Neste caso, ele
	está vazio porque as inicialiações eram tudo o que queríamos
	fazer.
	*/
}







