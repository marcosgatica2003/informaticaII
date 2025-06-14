/*
 * Guia9_Ej13.cxx
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

class punto
{	protected:
		int a,b;//centro de la circ
	public:
		punto (int a1, int b1) {a=a1;b=b1;};
		void ingresa (int a1, int b1);
};

class cir: public punto	//acceso publico?
{	private:
		int r;	//radio de la circ
	public:
		cir(int a, int b, int r1): punto(a,b) {r=r1;};
		void ingresac (int r1);
		void muestra();
};

void cir:: muestra ()
{	int a1,b1,r1;	
		r1=r;
		a1=a;
		b1=b;
		cout<< "radio: "<<r1<<endl<< "x: "<<a1<<endl<< "y: "<<b1<<endl;
}
void punto :: ingresa (int a1, int b1)
{	a=a1;
	b=b1;
}
void cir :: ingresac (int r1)
{	r=r1;
}
	
		
int main(int argc, char **argv)
{int x,y,ra;	
	punto pun1(0,0);
	cir circ1(0,0,0);
	cout<< "ingrese x"<<endl;
	cin>> x;
	cout<< "ingrese y"<<endl;
	cin>> y;
	pun1.ingresa(x,y);
	cout<< "ingrese radio"<<endl;
	cin>> ra;
	circ1.ingresac(ra);
	circ1.ingresa(x,y);
	circ1.muestra();
	
	
	
	return 0;
}

