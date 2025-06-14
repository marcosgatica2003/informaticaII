/*
 * Guia9_Ej15-2.cxx
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

class coordenada{
	protected:
		int x;
		int y;
	public:
		coordenada();
		void generar();
};

class complejo : public coordenada{
	public:
		complejo(int,int);
		void mostrar();
};

coordenada::coordenada()
{}

void coordenada::generar(){
	x=rand()%100;
	y=rand()%100;}

complejo::complejo(int a, int b):coordenada()
{} 

void complejo::mostrar(){
	cout<<"Z="<<x<<"+j"<<y<<endl;}

int main(int argc, char **argv)
{
	int op;
	class complejo com(0,0);
	cout<<"Desea generar un complejo? 1 por si."<<endl;
	cin>>op;
	if (op==1)
	{com.generar();
	com.mostrar();}
	else
	cout<<"El programa ha finalizado"<<endl;
	
	return 0;
}

