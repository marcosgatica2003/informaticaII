/*
 * GuiaPolim_Ej23-2.cxx
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
#include <malloc.h>
using namespace std;

class vehiculo{
	protected:
		int ano;
		int costo;
	public:
		vehiculo();
		virtual int mostrar(){cout<<ano<<endl<<costo<<endl;return 0;};
};

class vehi_aereo: public vehiculo{
	private:
		int horasv;
	public:
		vehi_aereo(int ,int);
		void cargava(int a,int b,int c){ano=a;costo=b;horasv=c;};
		virtual int mostrar(){cout<<endl<<ano<<" "<<costo<<" "<<horasv<<endl;return 0;};
};

vehiculo::vehiculo()
{}

vehi_aereo::vehi_aereo(int a,int b):vehiculo()
{}

int main(int argc, char **argv)
{
	int a=0,b=0,c=0,op=0,cont=0;
	
	/*class vehi_aereo* *v_a;
	v_a=new vehi_aereo*[2];
	v_a[0]=new vehi_aereo(a,b);
	v_a[1]=new vehi_aereo(a,b);*/
	

	
	class vehi_aereo *v_a[2];
	for (int i = 0; i < 2; i++)
		{v_a[i]=new vehi_aereo(a,b);}
	
	do{
	cout<<"Ingrese Año:"<<endl;
	cin>>a;
	cout<<"Ingrese costo:"<<endl;
	cin>>b;
	cout<<"Ingrese horas de vuelo:"<<endl;
	cin>>c;
	v_a[cont]->cargava(a,b,c);
	cont++;
	cout<<"Desea seguir ingresando? Presione 0"<<endl;
	cin>>op;
	}while ((op!=1)&&(cont<=2));
	cout<<endl<<"Mostramos datos guardados"<<endl;
	for (int i = 0; i < cont; i++)
	{
		v_a[i]->mostrar();
	}
	
	return 0;
}

