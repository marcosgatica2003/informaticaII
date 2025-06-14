/*
 * Ej 1.c
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


#include <stdio.h>
#include <malloc.h>
#define TAM 5
struct pila{
	int num;
	struct pila *sig;
};

int main(int argc, char **argv)
{
	int cont=0,i=1;
	struct pila *p, *base;
	base=NULL;
	/*p=malloc(sizeof(struct pila));
	printf("Ingrese numero:\n");
	scanf("%d",&p->num);
	p->sig=base;
	base=p;
	*/
	while(cont<TAM)
	{	p=malloc(sizeof(struct pila));
		printf("Ingrese numero:\n");
		scanf("%d",&p->num);
		p->sig=base;
		base=p;
		cont++;
	}
	p=base;
	while(p!=NULL)
	{printf("Numero[%d]: %d\n",i++,p->num);
	p=p->sig;
	}	
	return 0;
}

