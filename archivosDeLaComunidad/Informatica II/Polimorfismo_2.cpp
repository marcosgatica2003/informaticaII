//      Polimorfismo_2.cpp
//      
//      Copyright 2012 Lab-Inf <alumno@alumno-desktop>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

//Modificar el ej anterior derivando una clase "terna" a partir de la clase par.
//Recordar de declarar como protected la variable de par

#include <iostream>
using namespace std;
class par{
	protected:
	float x;
	float y;
	public:
	par(float a, float b){
		x=a;y=b;}
	 int prt(){cout<<x<<y;
		return 0;} 
	};
	
class terna:public par{
	float z;
	public:
	terna(float a, float b, float c):par(a,b){
		z=c;}
	int prt(){cout<<x<<y<<z;
				return 0;};
};
	
int main(int argc, char** argv)
{class par* *p;
p=new par*[2];
p[0]=new par(2,2);
p[1]=new terna(3,3,3);
p[0]->prt();
cout<<"\n";
p[1]->prt();
	return 0;
}
