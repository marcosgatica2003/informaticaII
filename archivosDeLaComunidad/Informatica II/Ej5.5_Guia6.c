/*
 * Ej 5.c
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
#include <stdlib.h>
struct nodo
{ 	int num;
	struct nodo *sig;
};
int main(int argc, char **argv)
{	int count=0;
	char op;
	typedef struct nodo nodo;
	nodo *p,*base;
	
	base=NULL;
	do
	{	p=malloc(sizeof(nodo));
		if(!p)
		{printf("no hay memoria\n");
		exit (1);
		}
		printf ("ingrese el numero\n");
		scanf("%d",&p->num);
		p->sig=base;
		base=p;
		printf("desea ingresar otro nodo? 'S' o 'N'\n");
		scanf("%s",&op);
		count++;
		}
	while(op=='s'||op=='S');
	
	
	p=(base);
	
	while(p!=NULL)
	{	printf("numero:%d\n",(*(p-(count))).num);
		p=p->sig;
	}
	return 0;
}

