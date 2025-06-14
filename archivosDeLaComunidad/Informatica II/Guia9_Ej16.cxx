/*
 * Gui9_Ej16.cxx
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
#define tam 3

using namespace std;

int menu(void);

class persona{
	protected:
		char nombre[20];
		char apell[20];
		int edad;
		char sexo;
	public:
		persona();
		void cargap(char [],char [],int,char);
		friend void muestra(class persona, class alumno);
		friend void funb(class persona, class alumno);
};

class alumno:public persona{
	private:
		float prom;
		int inasis;
		int legajo;
	public:
		alumno(char nom[], char ap[], int eda, char sex);
		void cargaa(float,int,int);
		friend void muestra(class persona, class alumno);
		void funa();
		friend void funb(class persona, class alumno);
};

persona::persona()    // CONSTRUCTOR
{}

void persona :: cargap(char nom[], char ap[], int eda, char sex)
{
	strcpy(nombre,nom);
	strcpy(apell,ap);
	edad=eda;
	sexo=sex;
}

alumno::alumno(char nom[], char ap[], int eda, char sex):persona()   //CONSTRUCTOR
{}

void alumno :: cargaa(float prome, int ina, int leg)
{
	prom=prome;
	inasis=ina;
	legajo=leg;
}

void alumno :: funa()
{	
	if (inasis>=3)
	{cout<<"-Legajo: "<<legajo<<endl;}
}

void funb(class persona p2, class alumno a2)
{
	if (a2.prom>=7)
		{cout<<"Alumno: "<<p2.apell<<endl;}
}

void muestra(class persona p1, class alumno a1)
{
	cout<<"Nombre: "<<p1.nombre<<endl;
	cout<<"Apellido: "<<p1.apell<<endl;
	cout<<"Edad: "<<p1.edad<<endl;
	cout<<"Sexo: "<<p1.sexo<<endl;
	cout<<"Promedio general: "<<a1.prom<<endl;
	cout<<"Inasistencias: "<<a1.inasis<<endl;
	cout<<"Legajo: "<<a1.legajo<<endl<<endl;
}


int main(int argc, char **argv)
{
	int bandera=0,cont=0,opcion=0,eda,leg,ina;
	char nom[20],ap[20],sex;
	float prome;
	
	class persona *per[tam];
	for (int i = 0; i < tam; i++)
		{per[i] = new persona();}
		
	class alumno *alum[tam];
	for (int i = 0; i < tam; i++)
		{alum[i] = new alumno(nom,ap,eda,sex);}
	
	while(bandera==0)
	{switch (opcion=menu())
	{	case 1:{cout<<"Ingrese los datos del alumno"<<endl;
				cout<<"Nombre:\t";
				cin>>nom;
				cout<<"Apellido:\t";
				cin>>ap;
				cout<<"Edad:\t";
				cin>>eda;
				cout<<"Sexo (M o F):\t";
				cin>>sex;
				cout<<"Promedio general:\t";
				cin>>prome;
				cout<<"Inasistencias:\t";
				cin>>ina;
				cout<<"Legajo:\t";
				cin>>leg;
				per[cont]->cargap(nom,ap,eda,sex);
				alum[cont]->cargaa(prome,ina,leg);
				cont++;
				if(cont==tam)
				{cout<<"Ya ingresó todos los datos posibles."<<endl;
				break;}
				
				break;}
				
		case 2:{if(cont==0)
				{cout<<"ERROR-No hay datos ingresados!"<<endl;
				break;}				
					cout<<"Los datos ingresados son:"<<endl;
					for (int i = 0; i < cont; i++)
					{cout<<"Alumno "<<i+1<<":"<<endl;
					muestra(*per[i],*alum[i]);}	
				break;}
				
		case 3:{if(cont==0)
				{cout<<"ERROR-No hay datos ingresados!"<<endl;
				break;}	
				cout<<"Los legajos de los alumnos con mas de 3 inasistencias son:"<<endl;
					for (int i = 0; i < cont; i++)
					{alum[i]->funa();}	
				break;}
				
		case 4:{if(cont==0)
				{cout<<"ERROR-No hay datos ingresados!"<<endl;
				break;}	
				cout<<"Alumnos sobresalientes:"<<endl;
				for (int i = 0; i < cont; i++)
					{funb(*per[i],*alum[i]);}	
				break;}
				
		default:{cout<<"El programa ha finalizado."<<endl;
				bandera=1;
				break;}
	}
	}
	
	return 0;
}

int menu (void)
{	int opc=0;
	cout<<endl<<"------------>>>>Menu principal<<<<------------"<<endl;
	cout<<"Ingrese la opción que desea realizar:"<<endl<<"1.Cargar datos"<<endl<<"2.Mostrar datos"<<endl;
	cout<<"3.Mostrar legajos con mas de 3 inasistencias"<<endl;
	cout<<"4.Apellidos de alumnos sobresalientes"<<endl;
	cout<<"5.Salir"<<endl<<"Opcion--->";
	cin>>opc;
	return opc;
}
