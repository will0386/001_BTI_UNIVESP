#include <iostream>

using namespace std;

void vlr_loc_memory(int *p)
{
	p = new int;
	*p = 13;
}
void vlr_mod_memory(int *p)
{
	*p = 69;
}
void ref(int *&p)
{
	p = new int;
	*p = 51;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;
	
	cout << endl;
	cout <<"Valores antes da modificação"<< endl;
	cout << endl;
	cout <<"Antes    : "<< p1 <<" "<< p2 <<" "<< p3 << endl;
	cout <<"Antes    : "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
	cout <<"Antes ABC: "<< a <<" "<< b <<" "<< c << endl;
	cout << endl;
	cout <<"-------------------------------------------------------"<< endl;
	
	vlr_loc_memory(p1);
	vlr_mod_memory(p2);
	ref(p3);
	
	cout << endl;
	cout <<"Valores depois da modificação"<< endl;
	cout << endl;
	cout <<"Depois    : "<< p1 <<" "<< p2 <<" "<< p3 << endl;
	cout <<"Depois    : "<<*p1<<" "<<*p2<<" "<<*p3<< endl;
	cout <<"Depois ABC: "<< a <<" "<< b <<" "<< c << endl;
	
	return 0;
}
