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

struct lista {
   int dato;
   struct lista *sig;
};

int main(int argc, char **argv)
{
	struct lista *p,*actual,*anterior,*primero;
	int dato,i;
	p=actual=anterior=primero=NULL;
	for(i=0;i<5;i++)
	{
	p=new(lista);
	if(p!=NULL)
	{
		printf("Ingrese un dato para agregar a la lista\n\n");
		scanf("%d",&dato);
		p->dato=dato;
		p->sig=NULL;
		if(primero==NULL)
		{
			primero =p;
		}
        else
        {
			if(dato<primero->dato)
			{
				p->sig=primero;
				primero = p;
		    }
		    else
		    {
				actual=primero;
				while((actual!=NULL)&&(dato>actual->dato))
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
{	int i=1;
	printf("valor %d= %d\n ",i,actual->dato);
    actual=actual->sig;
    i++;
 }
}
