// Melhorias feita com o auxilio do ChatGPT.
#include <iostream>
#include <thread>    //será necessario para a função std::this_thread::sleed_for, que deixará o script pausado até a execução de alguma tarefa.
#include <chrono>    //vai fazer a medição do tempo
#include <ctime>     //Vai ser preciso para obter a hora do sistema
#include "time.h"
using namespace std;

int main() {
	
	//Obter a hora atual do sistema
	time_t now = time(0);  //Pega a do sistema
	tm *localTime = localtime(&now);  //Converte para hora local
	
	//Extrai hora, minutos e segudos e as coloca nas variaveis
	int h = localTime->tm_hour;
	int m = localTime->tm_min;
	int s = localTime->tm_sec;
	
	//Inicia o tempo com o horario coletado do sistema
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
		
	
	
	
	

	
	
