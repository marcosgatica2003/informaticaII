/*
 * sin título.c
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


#include <stdio.h>
#include <malloc.h>
#define tam 10
int condicion(int *c);
int main(int argc, char **argv)
{
		int *p=(int *)malloc(tam*sizeof(int));
		int i;
		printf(" creacion de un arreglo dinamico de tamaño %d y impresion de los multiplos del tamaño\n\n",tam);
		for(i=0;i<tam;i++)
			{
				printf("A[%d]=",i+1);
				scanf("%d",p+i);
			}
		for(i=0;i<tam;i++)
			{	if(condicion(p+i)==1)
				printf("\n%d",*(p+i));
			}
return 0;
}
int condicion(int *var)
{
	if(*var%tam==0)
	return 1;
	else
	return 0;
}
