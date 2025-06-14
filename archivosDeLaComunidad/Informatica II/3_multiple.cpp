
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class centro
{
	protected:
		int x;
		int y;
	public:
	  void carga();
	  void muestra();
};

class radiovector
{
	protected:
		int radio;
	public:
		void carga();
		void muestra();
};

class cilindro : public radiovector, public centro
{
	protected:
		int altura;
	public:
		void carga();
		void muestra();
};


void centro:: carga()
{
	cout<<"Ingrese X\n";
	cin>>x;
	cout<<"Ingrese Y\n";
	cin>>y;
}

void centro::muestra()
{
	cout<<"X: "<<x<<"\n";
	cout<<"Y: "<<y<<"\n";
}


void radiovector:: carga()
{
	cout<<"Ingrese el radio\n";
	cin>>radio;
}

void radiovector::muestra()
{
	cout<<"Radio: "<<radio<<"\n";
}


void cilindro:: carga()
{
	cout<<"Ingrese la altura\n";
	cin>>altura;
}

void cilindro::muestra()
{
	cout<<"Altura: "<<altura<<"\n";
}


int main(void)
{
	class cilindro a;
	a.centro::carga();
	a.radiovector::carga();
	a.carga();
	a.centro::muestra();
	a.radiovector::muestra();
	a.muestra();
return(0);
}
	
