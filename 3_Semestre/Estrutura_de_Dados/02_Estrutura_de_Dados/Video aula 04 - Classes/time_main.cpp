#include <iostream>
#include "time.h"
using namespace std;

int main() {
	/*
  Neste primeiro objeto, passamos todos os parâmetros. Em outras
  palavras, nenhum valor padrão será usado, que são os valores de contido na 
  classe em time.h.
  */
	
	Time t1(23, 59, 59);
	t1.print();       //23:59:59 é o que se espera
	t1.setHour(12);
	t1.setMinute(30);
	t1.setSecond(15);
	
	t1.print();      //12:30:15 é o que vai ser retornado agora
	cout << "Hour:    " << t1.getHour()    << endl;
	cout << "Minute:  " << t1.getMinute()  << endl;
	cout << "Second:  " << t1.getSecond()  << endl;
	
	/*
	Nesta segunda instância, vamos configurar somente um do parametros, e os
	outros parametros mostrará o padrão (default).
	*/
	
	Time t2(12);
	t2.print();   //12:00:00
	
	/*
	Nesta terceira instância, usamos o "nextSecond()" para inclementar 
	segundos no parametro confugurado.
	*/
	
	Time t3(23, 59, 58);
	t3.print();   //23:59:58
	t3.nextSecond();
	t3.print();   //23:59:59
	t3.nextSecond();
	t3.print();   //00:00:00
}

	
	
