
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

class persona
{
	protected:
	 char nombre[20];
	 int edad;
	public:
	  persona(char*,int);
	  void imprime();
};

class empleado: public persona
{
	private:
		int salario;
	public:
		empleado(char *n,int s, int e) persona(*n,s), salario(e) {};
};
