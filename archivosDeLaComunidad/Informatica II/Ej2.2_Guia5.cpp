//Desarrollar un programa que permita declarar un arreglo estatico de 20 elementos de tipo struct. Cada elemento del arreglo
//guarda informacion de un ciclo completo de una maquina. Los miembros del tipo de dato struct son:
//temperatura maxima, minima, numero de veces de encendido. Se desea generar un arreglo dinamico con las temperaturas maximas 
//de los procesos que hayan tenido menos de 3 encendidos. Mostrar el contenido de los 2 arreglos por pantalla.
#include <iostream>
using namespace std;
#define tam 10
# include <malloc.h>

struct ejerc
{
	float temp_max,temp_min;
	int enc;
};

int main()
{
	struct ejerc elem[tam];
	int i,cont[20],cant=0;
	float *p;
	
	for(i=0;i<tam;i++)
	{
		cout<<"Ingrese la temperatura maxima "<<i+1<<": ";
		cin>>elem[i].temp_max;
		cout<<"Ingrese la temperatura minima "<<i+1<<": ";
		cin>>elem[i].temp_min;
		cout<<"Ingrese numero de veces de encendido "<<i+1<<": ";
		cin>>elem[i].enc;
		cout<<"\n";
		
		if( elem[i].enc < 3 )
		{		 cont[i] = i; cant=cant+1;	}
	}
	
	p = new (float[cant]);
	
	for(i=0;i<cant;i++)
		*(p+i) = elem[ cont[i] ].temp_max; 
	
	cout<<"\n\nLa estructura original cargada es: "<<endl;
	for(i=0;i<tam;i++)
	{
		cout<<"Temperatura maxima"<<i+1<<": "<<elem[i].temp_max<<endl;
		cout<<"Temperatura minima"<<i+1<<": "<<elem[i].temp_min<<endl;
		cout<<"Cantidad de encendidos"<<i+1<<": "<<elem[i].enc<<"\n\n";
	}
	
	cout<<"\n\nLa estructura con menos de 3 encendidos es: "<<"\n";
	for(i=0;i<cant;i++)
	{
		cout<<"Encendidos"<<i+1<<" :"<<*(p+i)<<endl;
	}
	
	return 0;
}
