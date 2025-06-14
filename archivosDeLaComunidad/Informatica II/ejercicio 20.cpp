//ejercicio 20 

#include <iostream>
using namespace std;

class persona
{
	protected:
		int edad;
		long int documento;
		char nombre[20];
};

class universitario : public persona
{
	protected:
		char carrera[20];
		float promedio;
	public:
		friend void listar(class materia);
};


class materia: public universitario
{
	protected:
		char materias [20];
	public:
		materia();
		friend void listar(class materia);
};

materia::materia()
{
	cout<<"Ingrese el apellido: ";cin>>nombre;
	cout<<"Ingrese la edad: ";cin>>edad;
	cout<<"Ingrese el documento: ";cin>>documento;
	cout<<"Ingrese la carrera: ";cin>>carrera;
	cout<<"Ingrese la promedio: ";cin>>promedio;
	cout<<"Ingrese la materia: ";cin>>materias;
}

void listar (class materia b ) 
{
	cout<<"Ingrese el apellido: ";cout<<b.nombre;cout<<endl;
	cout<<"Ingrese la edad: ";cout<<b.edad;cout<<endl;
	cout<<"Ingrese el documeno: ";cout<<b.documento;cout<<endl;
	cout<<"Ingrese la carrera: ";cout<<b.carrera;cout<<endl;
	cout<<"Ingrese la promedio: ";cout<<b.promedio;cout<<endl;
	cout<<"Ingrese la materia: ";cout<<b.materias;cout<<endl;
	
}



int main()
{
	class materia ba;
	listar(ba);
	return 0;
}


