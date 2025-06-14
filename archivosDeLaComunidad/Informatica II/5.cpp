
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

class complejo
{
	private:
	   int x;
	   int y;
	public:
	   complejo();
	   char signo();
	   void cargar();
	   void mostrar();
	   float operator / (class complejo);
};



int main(void)
{
	class complejo a,b;
	float resultado;
	a.cargar();
	b.cargar();
	resultado=a/b;
	printf("\n Resultado: %f",resultado);
}

complejo::complejo()
{
	x=0;
	y=0;
	cout<<"Objeto inicializado OK\n\n";
}

void complejo::cargar()
{
	cout<<"Ingrese la parte real\n\n";
	cin>>x;
	cout<<"Ingrese la parte imaginaria\n\n";
	cin>>y;
}

char complejo::signo()
{
	if(y>0)
	return('+');
	else
	return('-');
}

void complejo::mostrar()
{
	cout<<x<<signo()<<fabs(y);
    cout<<"\n\n";
}

float complejo::operator / (class complejo v)
{
	class complejo temp;
	temp.x=x+v.x;
	temp.y=y+v.y;
	return(3.2);
}
