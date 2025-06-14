/*
 * sin título.cxx
 * 
 * Copyright 2012 Usuario} <usuario@ubuntu>
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




#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct lista {
   char apellido[20];
   int edad;
   struct lista *sig;
};
int menu(void);
int main(int argc, char **argv)
{
	struct lista *p,*actual,*anterior,*primero;
	int bandera=0,op;
	p=actual=anterior=primero=NULL;
do{	
	op=menu();
switch(op)
{
		case 1:
			{	p=new(lista);
				if(p!=NULL)
				{	if(anterior!=NULL)
				{anterior=actual;}
				printf("ingrese apellido\n");
				scanf("%s",p->apellido);
				printf("Ingrese edad\n\n");
				scanf("%d",&p->edad);
				actual=p;
				if(primero==NULL)
				{primero=actual;}
				p->sig=NULL;
				}
				break;
			}	
		case 2:
			{	free(actual);
				actual=anterior;
				p=actual;
				actual->sig=p;
				p->sig=NULL;
				break;
			}

		case 3:
		{
			actual=primero;
			while(actual!=NULL)
				{
			printf("apellido: %s\n ",actual->apellido);
			printf("edad= %d\n ",actual->edad);
			actual=actual->sig;
				
				}
			break;}
		default:
			{	printf("fin\n");
				bandera=1;
				break;}
}
}while(bandera==0);
	return 0;
}
int menu(void)
{ 	int opc;
	printf("\n1-guardar nodo\n2-borrar nodo\n3-mostrar nodos\n");
	scanf("%d",&opc);
	return opc;
}
