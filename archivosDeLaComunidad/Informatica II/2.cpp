
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int cuadrado(int);
float cuadrado(float);

int main(void)
{
	int x;
	float y;
	cout<<"Ingrese un entero\n\n";
	cin>>x;
	cout<<"\nIngrese un flotante\n\n";
	cin>>y;
	cout<<"\nEl cuadradado de "<<x<<"="<<cuadrado(x);
	cout<<"\nEl cuadradado de "<<y<<"="<<cuadrado(y);
}

int cuadrado(int x)
{
	return(x*x);
}

float cuadrado(float y)
{
	return(y*y);
}
