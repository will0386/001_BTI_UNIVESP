#ifndef TIME_H
#define TIME_H

class Time {
	private:  //seção privada
		int hour;
		int minute;
		int second;
	public:
		Time(int hour = 0, int minute = 0, int second = 0); //construtor, onde será informado hora, minuto e segundo, o valor "0" e o valor padrão (default) 
		int getHour() const;
		void setHour(int hour);
		int getMinute() const;
		void setMinute(int minute);
		int getSecond() const;
		void setSecond(int second);
		void print() const;
		void nextSecond();
};

#endif

