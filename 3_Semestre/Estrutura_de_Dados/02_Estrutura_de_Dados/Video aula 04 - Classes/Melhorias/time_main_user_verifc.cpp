// Melhorias feita com o auxilio do ChatGPT.
#include <iostream>
#include <thread>    //será necessario para a função std::this_thread::sleed_for, que deixará o script pausado até a execução de alguma tarefa.
#include <chrono>    //vai fazer a medição do tempo
#include "time.h"
using namespace std;

int main() {
	int h, m, s;
	
	/*Solicita ao usuario que entre com o horario. 
	O do-while garante que o bloco de código seja executado ao menos uma vez, e o loop 
	só se repetirá enquanto a condição no while for verdadeira.*/
	
	do {
		cout << "Digite a hora atual (0-23): ";
		cin >> h;
		if (h < 0 || h>23) {
			cout << "O valor é invalido! A hora deve esta entre 0 e 23." << endl;
		}
	} while (h < 0 || h> 23);
	
	do {
		cout << "Digite os minutos atual (0-59): ";
		cin >> m;
		if (m < 0 || m > 59) {
			cout << "O valor é invalido! Os minutos deve esta entre 0 e 59." << endl;
		}
	} while (m < 0 || m > 59);
	
	do {
		cout <<"Digite os Seguntos atual: (0-59): ";
		cin >> s;
		if (s < 0 || s > 59) {
			cout << "O valor é invalido! Os segundos deve esta entre 0 e 59." << endl;
		}
	} while (s < 0 || s > 59);
	
	//cria a hora com os dados fornecidos
	Time t(h, m, s);
	
	while (true){			//Fará o LOOP infinito.
		t.print();			//Imprimi o tempo inicial
		
		//Pausará o tempo por 100 milissegundos (0.1 segundo).
		this_thread::sleep_for(chrono::milliseconds(1000));
		
		t.nextSecond();
		
		//limpa a tela isso é opcional, mais ajuda na visualização)
		system("clear");  //No linox/mac usa o "clear" como parametro, já no windows use o "cls"
	}
	
	return 0;
}
		
	
	
	
	

	
	
