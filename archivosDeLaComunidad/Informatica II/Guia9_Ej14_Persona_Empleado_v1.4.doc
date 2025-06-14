/*
 * Coco_Example.cxx
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
#include <string.h>
#include <malloc.h>
using namespace std;

class persona
{	protected:
		char nom[20];
		char ape[20];
		char sex;
		int edad;
		char est[20];
	public:
		persona(char n[],char ap[], char s, int e, char ec[]);
};

class empleado:public persona
{	private:
	char categ[20];
	int ant;
	float rem;
	public:
		empleado(char [], char[], char, int ,char[], char[], int, float);
		void ingresa(char [],char [], char, int, char [], char[], int, float);
		void muestra(char [],char [], char , int , char [], char [], int , float);
};

persona :: persona(char n[],char ap[], char s, int e, char ec[])
{	strcpy(nom,n);
	strcpy(ape,ap);
	sex=s;
	edad=e;
	strcpy(est,ec);
}
empleado::empleado(char n[],char ap[], char s, int e, char ec[], char cat[], int antig, float remu): persona(n,ap,s,e,ec)
{	strcpy(categ,cat);
	ant=antig;
	rem=remu;
}
void empleado:: ingresa(char n[],char ap[], char s, int e, char ec[], char cat[], int antig, float remu)
{	strcpy(categ,cat);
	ant=antig;
	rem=remu;
}

void empleado:: muestra(char n[],char ap[], char s, int e, char ec[], char cat[], int antig, float remu)
{cout<<n<<ap  <<s  <<e  <<ec  <<cat  <<antig  <<remu  <<endl;
}

int menu (void);
void carga (int, empleado);

int menu (void)
{	int opc=0;
	cout<<"Ingrese la opción que desea realizar:"<<endl<<"1.Cargar datos"<<endl<<"2.Mostrar datos"<<endl<<"3.Salir"<<endl;
	cin>>opc;
	return opc;
}
void carga(int contador, empleado emp1[])
{	char nombre[20],apellido[20],sexo,estado[20],catego[20];
	int eda, antigu;
	float remune;
	cout<< "Ingrese los datos del empleado:"<<endl;
	cout<< "ingrese nombre(letra):"<<endl;
	cin>>nombre;
	cout<< "ingrese apellido(letra):"<<endl;
	cin>>apellido;
	cout<< "ingrese sexo(letra):"<<endl;
	cin>>sexo;
	cout<< "ingrese edad:"<<endl;
	cin>>eda;
	cout<< "ingrese estado civil(letra):"<<endl;
	cin>>estado;
	cout<< "ingrese categoría(letra):"<<endl;
	cin>>catego;
	cout<< "ingrese antigüedad:"<<endl;
	cin>>antigu;
	cout<< "ingrese remuneración:"<<endl;
	cin>>remune;
	emp1[contador].ingresa(nombre,apellido,sexo,eda,estado,catego,antigu,remune);
}

int main(int argc, char **argv)
{	int opcion,bandera=0;
	static int cont=0;
	char nombre[20],apellido[20],sexo,estado[20],catego[20];
	int eda, antigu;
	float remune;
	
	class empleado *emp[5];
	for (int i = 0; i < 5; i++)
	{	emp[i] = new empleado(nombre,apellido,sexo,eda,estado,catego,antigu,remune);
	}
	
	cout<< "\t Menu principal:"<<endl;
	
	while(bandera==0)
	{switch (opcion=menu())
	{	case 1:{carga(cont,emp[cont]);
				cont++;
				if(cont==5)
				{cout<<"Ya ingresó todos los datos posibles."<<endl;
				break;}
				break;}
		case 2:{if(cont==0)
				{cout<<"ERROR-No hay datos ingresados!"<<endl;
				break;}				
					cout<<"Los datos ingresados son:"<<endl;
					for (int i = 0; i < cont; i++)
					{cout<<"Empleado "<<i+1<<":"<<endl;
					emp[i]->muestra(nombre,apellido,sexo,eda,estado,catego,antigu,remune);}	
				break;}
		default:{cout<<"El programa ha finalizado."<<endl;
				bandera=1;
				break;}
	}
	
	}
	return 0;
}
