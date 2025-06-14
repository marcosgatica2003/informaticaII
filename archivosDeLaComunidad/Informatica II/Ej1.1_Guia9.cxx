/*
 * Guia9_Ej1.cxx
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
#include <math.h>
using namespace std;

class punto{
	private: 
	int a, b;
	public:
	punto(int a1, int b1);
	void ingresa(int a1, int b1);
	//void muestra(int &a1, int &b1);
	float calculo(int a1, int b1);
};

punto::punto(int a1, int b1)
{	a=a1;
	b=b1;
}
void punto::ingresa(int a1, int b1)
{	a=a1;
	b=b1;
}

/*void punto::muestra(int &a1, int &b1)
{	a1=a;
	b1=b;
}*/

float punto::calculo(int a1, int b1)
{	float res;
	//res=sqrt(pow(a,2)+pow(b,2));
	return res=hypot(a,b);
}

int main(int argc, char **argv)
{	punto pun1(0,0);
	int x, y;
	float hyp=0;
	cout<< "Ingrese el valor de x"<<endl;
	cin>>x;
	cout<< "Ingrese el valor de y"<<endl;
	cin>>y;
	pun1.ingresa(x,y);
	hyp=pun1.calculo(x,y);
	cout<<"La hipotenusa es: "<<hyp<<endl;
	cout<<x  <<y<<endl;
	return 0;
}

