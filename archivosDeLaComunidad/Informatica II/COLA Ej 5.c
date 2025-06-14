/*
 * COLA Ej 5.c
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
#include <stdlib.h>
#include <malloc.h>

struct nodo{
	int num;
	struct nodo *sig;
};

int main(int argc, char **argv)
{	char op;
	int cont=0,i=0;
	struct nodo *ult,*pri,*p;
	ult=NULL;
	pri=NULL;
	do
	{	p=malloc(sizeof(struct nodo));
		if(!p)
		{printf("No hay memoria.\n");
		exit(0);}
		else
		{	printf("Ingrese numero:\n");
			scanf("%d",&p->num);
			p->sig=NULL;
			if (pri==NULL)
			{	pri=p;}
			else
			{	ult->sig=p;}
			ult=p;}
		printf("Para ingresar otro nodo presione S o s:\n");
		scanf("%s",&op);
		cont++;
	} while (op=='S'||op=='s');
	p=pri;
	do
	{	printf("Número: %d\n",p->num);
		p=p->sig;
		i++;
	} while (i<(cont/2));
		
	return 0;
}

