
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct complejo
{
	int x;
	int y;
};

complejo operator + (complejo,complejo);

int main(void)
{
	struct complejo a,b,resultado;
	a.x=10;
	a.y=20;
	b.x=20;
	b.y=10;
	resultado=a+b;
	cout<<"La suma de los dos complejos es: "<<resultado.x<<"+J"<<resultado.y;
}

complejo operator + (complejo a, complejo b)
{
	complejo temp;
	temp.x=a.x+b.x;
	temp.y=a.y+b.y;
	return(temp);
}
	
