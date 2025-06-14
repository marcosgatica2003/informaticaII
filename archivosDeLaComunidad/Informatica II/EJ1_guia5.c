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
struct valores{
	int num1;
	int num2;
	float res;
	};


int main(int argc, char **argv)
{	int i;
	struct valores *p;
	p=malloc(TAM*sizeof(struct valores));
	for (i = 0; i < TAM; i++)
	{
		printf("Ingrese el 1er valor de la estructura %d:\n",i+1);
		scanf("%d",&(*(p+i)).num1);
		printf("Ingrese el 2do valor de la estructura %d:\n",i+1);
		scanf("%d",&(*(p+i)).num2);
	}
	for (i = 0; i < TAM; i++)
	{
		(*(p+i)).res=((*(p+i)).num1+(*(p+i)).num2)/2;
	}
	for (i = 0; i < TAM; i++)
	{
		printf("Estructura %d: N1: %d N2: %d\nPromedio:%.2f\n",i+1,(*(p+i)).num1,(*(p+i)).num2,(*(p+i)).res);
	}
	
	
	return 0;
}

