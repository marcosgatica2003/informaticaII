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
#define N 5
struct lista {
	char nombre[20];
	int inasistencias;
	float prom;
	struct lista *sig;
};

int main(int argc, char **argv)
{
	struct lista *p,*actual,*anterior,*primero;
	int i;
	p=actual=anterior=primero=NULL;
	for(i=0;i<N;i++)
	{
	p=new(lista);
	if(p!=NULL)
	{	printf("Ingrese nombre\n\n");
		scanf("%s",p->nombre);
		printf("Ingrese promedio\n\n");
		scanf("%f",&p->prom);
		printf("Ingrese inasistencias\n\n");
		scanf("%d",&p->inasistencias);
		p->sig=NULL;
		if(primero==NULL)
		{
			primero =p;
		}
        else
        {
			if(p->inasistencias<primero->inasistencias)
			{
				p->sig=primero;
				primero = p;
		    }
		    else
		    {
				actual=primero;
				while((actual!=NULL)&&(p->inasistencias>actual->inasistencias))
				{
					anterior=actual;
					actual=actual->sig;
				}
			    anterior->sig=p;
			    p->sig=actual;
			 }
		 }
}
}
actual=primero;
while(actual!=NULL)
{
    printf("nombre= %s\n ",actual->nombre);
    printf("promedio= %.2f\n ",actual->prom);
	printf("inasistencias= %d\n ",actual->inasistencias);
    actual=actual->sig;
 }
}
