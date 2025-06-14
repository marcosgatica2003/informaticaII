/*
 * Guia9_Ej2.cxx
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

class vector{
	private:
	int v[10];
	public:
	vector(int v1);
	void carga(int v1,int a);
	void maymen(void);
};

vector::vector(int v1)
{for (int i = 0; i < 10; i++)
{	v[i]=v1;
}
}

void vector::carga(int v1, int a)
{	v[a]=v1;
}

void vector::maymen()
{	int may, men;
	may=v[0];
	men=v[0];
	for (int i = 0; i < 10; i++)
	{
		if (v[i]>may)
		{	may=v[i];
		}
		if (v[i]<men)
		{	men=v[i];
		}
	}
	cout<<"El mayor es: "<<may<<endl;
	cout<<"El menor es: "<<men<<endl;
}

int main(int argc, char **argv)
{
	int x;
	static int b=0;
	vector vec1(0);
	
	for (int i = 0; i < 10; i++)
	{	cout<<"Ingrese el valor"<<i+1<<endl;
		cin>>x;
		vec1.carga(x,b);
		b++;
	}
	vec1.maymen();
	return 0;
}

