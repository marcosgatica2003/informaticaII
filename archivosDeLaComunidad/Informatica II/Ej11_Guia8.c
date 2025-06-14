/*
 * Arbol_Ej11.c
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
#include <string.h>

struct arbol{
	char nom[20];
	int edad;
	char sexo;
	int ide;
	struct arbol *izq;
	struct arbol *der;
};

void insertar(struct arbol **, char [], int, char, int);
void inorden(struct arbol *);
int main(int argc, char **argv)
{
	int i,eda,iden;
	char nomb[20],sex;
	struct arbol *raiz;
	raiz=NULL;
	printf("Ingrese arbol:\n");
	for (i = 0; i < 2; i++)
	{
		printf("Ingrese nombre:\n");
		scanf("%s",nomb);
		printf("Ingrese edad:\n");
		scanf("%d",&eda);
		printf("Ingrese sexo (m o f):\n");
		scanf("%s",&sex);
		printf("Ingrese identificacion:\n");
		scanf("%d",&iden);
		insertar(&raiz,nomb,eda,sex,iden);
	}
	printf("Los datos ingresados son:\n");
	inorden(raiz);
	return 0;
}

void insertar(struct arbol **p, char nom[],int edad,char sexo,int ide)
{
	if (*p==NULL)
		{*p=malloc(sizeof(struct arbol));
		strcpy((**p).nom,nom);
		(**p).edad=edad;
		(**p).sexo=sexo;
		(**p).ide=ide;
		(**p).izq=NULL;
		(**p).der=NULL;
		}
	else
		{if ((**p).ide>ide)
			{insertar(&(**p).izq, nom, edad, sexo, ide);
			}
		else
			{insertar(&(**p).der, nom,edad,sexo,ide);
			}
		}
}
	
void inorden(struct arbol *punt)
{if ((punt)!=NULL)
	{inorden((*punt).izq);
	printf("Nombre: %s \nEdad: %d\nSexo: %c\nIdentificacion: %d\n",(*punt).nom,(*punt).edad,(*punt).sexo,(*punt).ide);
	inorden((*punt).der);
	}
}
