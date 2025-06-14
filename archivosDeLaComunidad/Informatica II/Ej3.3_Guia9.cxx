/*
 * Gui9_Ej3.cxx
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
using namespace std;

class vector
{private:
		int vec[10];
public:
		vector();
		void carga(int,int);
		void ordena();
		void muestra(void);
};

vector::vector()
{for (int i = 0; i < 10; i++)
	{
	vec[i]=0;
	}
}

void vector :: carga(int a,int j)
{
	vec[j]=a;
}

void vector :: ordena(void)
{
	int bandera=0,aux=0,i=0;
	for ( i = 0; i < 9; i++)
	{
		if (vec[i]>vec[i+1])
		{bandera=1;}
	}
	if (bandera==1)
		{	cout<<"El arreglo está desordenado, y se ordenará."<<endl;
			for (i = 0; i < 10-1 ; i++)
			{	for (int j = 0; j < (10-1); j++)
				{	if(vec[j]>vec[j+1])
					{aux=vec[j];
					vec[j]=vec[j+1];
					vec[j+1]=aux;}
				}
			}
		}
	else
	{cout<<"El arreglo ha sido cargado en forma ordenada."<<endl;}
}

void vector :: muestra(void)
{
	cout<<"El arreglo es:"<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout<<"Valor"<<i+1<<":"<<endl;
		cout<<vec[i]<<endl;
	}
}

int main(int argc, char **argv)
{
	int valor=0;
	class vector vec1;
	cout<<"Ingrese los datos:"<<endl;
	for (int k=0; k < 10; k++)
	{
		cout<<"Valor"<<k+1<<":"<<endl;
		cin>>valor;
		vec1.carga(valor,k);
	}
	cout<<"Se van a mostrar los datos cargados"<<endl;
	vec1.ordena();
	vec1.muestra();
	
	return 0;
}

