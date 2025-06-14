/*
 * Arbol_Ej1y2.c
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

struct arbol
{int dato;
struct arbol *izq;
struct arbol *der;
};

void insertar(struct arbol **,int );
void inorden(struct arbol *);

int main(int argc, char **argv)
{
	int i,valor;
	struct arbol *raiz;
	raiz=NULL;
	printf("Ingrese datos del arbol binario:\n");
	for (i = 0; i < 4; i++)
	{
		printf("Ingrese dato:\n");
		scanf("%d",&valor); 
		insertar(&raiz,valor);
	}
	printf("Arbol ingresado, in orden:\n");
	inorden(raiz);
	
	return 0;
}

void insertar(struct arbol **p, int dato)
{
	if (*p==NULL)
	{
		*p=malloc(sizeof(struct arbol));  //Creo el nodo
		(**p).dato=dato;		//Inicializo el nodo
		(**p).izq=NULL;
		(**p).der=NULL;
	}
	else
	{if ((**p).dato>dato)			//
		{insertar(&(**p).izq,dato);}
		else
		{insertar(&(**p).der,dato);}
	}
}

void inorden(struct arbol *punt)		//Acomodo los datos para mostrar
{if(punt!=NULL)
	{inorden((*punt).izq);
	printf(" %d ",(*punt).dato);
	inorden((*punt).der);
	}
}
