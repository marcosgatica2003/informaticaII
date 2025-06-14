/*
 * Guia9_Ej15.cxx
 * 
 * Copyright 2012 Sal <saul@ubuntu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <stdlib.h>
using namespace std;

class coordenada
{	protected:
		int x;
		int y;
	public:
		coordenada(int a, int b){x=a;y=b;}
		void genera(int a, int b);
};

void coordenada::genera(int a, int b)
{a=rand()%100;
b=rand()%100;
cout<<a<<"   "<<b<<endl;}

class complejo: public coordenada
{	public:
	complejo(int a, int b):coordenada(a,b){x=a;y=b;}
	void muestra(void){
		genera(x,y);
		cout<<"Z="<<x<<"+j"<<y<<endl;}
};

int main(int argc, char **argv)
{	int op=0;
	complejo c(0,0);
	cout<<"Desea generar una complejo? 1 por si"<<endl;
	cin>>op;
	if (op==1)
	{
	c.muestra();}
	else
	{cout<<"El programa ha finalizado."<<endl;
	}
	
	return 0;
}

