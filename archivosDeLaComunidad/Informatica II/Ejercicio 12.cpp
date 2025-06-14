//Se desea crear un arreglo de 3 elementos de tipo struct para representar los datos de personas
//a)Declarar un puntero a la estructura
//b)Recorrer el arreglo persona desde un metodo para mostrar por pantalla los datos almacenados
//c)Un metodo que muestre por pantalla las personas mayores de edad

#include <iostream>
using namespace std;

struct persona
{
	char nombre[30];
	int edad,altura,peso;
};

void mostrar( struct persona * );
void imp ( struct persona * );

int main()
{
	struct persona elem[3];
	struct persona *punt;
	int i;
	
	for (i=0;i<3;i++)
	{
		cout<<"Persona "<< i+1<<": "<<endl;
		cout<<"Ingrese el nombre: ";cin>>elem[i].nombre;
		cout<<"Ingrese la edad: ";cin>>elem[i].edad;
		cout<<"Ingrese la altura: ";cin>>elem[i].altura;
		cout<<"Ingrese el peso: ";cin>>elem[i].peso;cout<<"\n";
	}
	punt=elem;
	
	mostrar(punt);
	imp(punt);
	
	return 0;
}


void mostrar ( struct persona * puntero )
{
	int i;
	cout<<"\nLos datos ingresados son:\n";
	for(i=0;i<3;i++)
	{
		cout<<"Nombre: "<<(puntero+i)->nombre<<endl;
		cout<<"Edad: "<<(puntero+i)->edad<<endl;
		cout<<"Altura: "<<(puntero+i)->altura<<endl;
		cout<<"Peso: "<<(puntero+i)->peso<<endl;
		cout<<"\n";
	}
}


void imp ( struct persona * puntero )
{
	int i;
	cout<<"\nMayores de edad\n";
	for(i=0;i<3;i++)
	{
		if(  (puntero+i)->edad > 18  )
		{
			cout<<"Nombre: "<<(puntero+i)->nombre<<endl;
			cout<<"Edad: "<<(puntero+i)->edad<<endl;
			cout<<"Altura: "<<(puntero+i)->altura<<endl;
			cout<<"Peso: "<<(puntero+i)->peso<<endl;
			cout<<"\n";
		}
		
	}
}
