//Desarrollar un programa que perimtan realizar sumas dos numeros complejos. Los numeros complejos estan representados
//por estructuras, con dos miembros: real e imaginario. La suma la realizara un metodo. El complejo resultado 
//se mostrara desde el programa principla. Para terminar el programa se ingresa -1.
#include <iostream>
using namespace std;
#include <stdlib.h>

struct suma
{
	float real,imag;
};


int main ()
{
	struct suma num1,num2;
	int band=0;
	
	while (band!=-1)
	{
		cout<<"Complejo 1"<<endl;
		cout<<"Real: ";cin>> num1.real;
		cout<<"Imaginario: ";cin>> num1.imag;
		
		cout<<"\nComplejo 2"<<endl;
		cout<<"Real: ";cin>> num2.real;
		cout<<"Imaginario: ";cin>> num2.imag;
		
		cout<<"\nLa suma es:";
		cout<<num1.real + num2.real<<",";
		cout<<num1.imag + num2.imag<<"i"; 
		
		cout<<"\nIngrese -1 para salir";
		cin>>band;
		system("clear");
	}
	
	return 0;
}
