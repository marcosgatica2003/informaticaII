
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

class punto
{
	protected:
		int x;
		int y;
	public:
		punto(int,int);
		void print();
};

class circunferencia : public punto
{
	private:
	 int radio;
	public:
	 circunferencia(int a, int b, int c) : punto(a,b){ radio = c;};
	 void muestra();
};

int main(void)
{
	int x,y,r;
	cout<<"Crearemos un punto arbitrario\n";
	cout<<"Ingrese la coordenada X\n";
	cin>>x;
	cout<<"Ingrese la coordenada Y\n";
	cin>>y;
	class punto a(x,y);
	a.print();
	cout<<"Centro de la circunferencia";
	cout<<"Ingrese la coordenada X\n";
	cin>>x;
	cout<<"Ingrese la coordenada Y\n";
	cin>>y;
	cout<<"Ingrese el Radio\n";
	cin>>r;
	class circunferencia b(x,y,r);
	b.muestra();
return(0);
}


punto::punto(int a,int b)
{
	x=a;
	y=b;
}

void punto::print()
{
	cout<<"Coordenada X: "<<x<<"\n";
	cout<<"Coordenada Y: "<<y<<"\n";
}


void circunferencia::muestra()
{
	cout<<"Centro coordenada X: "<<x<<"\n";
	cout<<"Centro coordenada Y: "<<y<<"\n";
	cout<<"Radio de la circunferencia: "<<radio<<"\n";
}

