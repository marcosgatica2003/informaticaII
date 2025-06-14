#include <iostream>
#include <stdio.h>
using namespace std;
struct byte{
	
	unsigned long_palabra: 2;
	unsigned bit_stop: 1;
	unsigned bit_paridad: 3;
	unsigned brk: 1;
	unsigned batch: 1;
};

union count{
	struct byte conf;
	int estlin;
};

int main(int argc, char** argv)
{	union count x;
	int a,c;
	char b;
	cout<<"Ingrese un entero y se buscará su configuración"<<endl;
	cin>>x.estlin;
	
	if ((x.conf.long_palabra)==2)
		{a=7;}
	else
		{a=8;}
		
	if((x.conf.bit_stop)==0)
		{c=1;}
	else 
		{c=2;}
	
	if ( (x.conf.bit_paridad) == 0)
		b = 'N';
		
	else if ( (x.conf.bit_paridad) == 1)
		b = 'O';
	
	else if ( (x.conf.bit_paridad) == 3)

		b = 'E';
		
	
	cout << "La configuracion del puerto es:"<<a<<b<<c<<endl;
	return 0;
}
