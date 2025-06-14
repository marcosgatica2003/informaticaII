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
#define tam 5
int main(int argc, char **argv)
{	int *vec=(int *)malloc(tam*sizeof(int));
	int i,j,aux;
	printf("este programa ordena elementos de un arreglo y los muestra\n\n ingrese datos\n");
	for (i = 0; i < tam; i++)
	{	printf("vec[%d]=",i);
		scanf("%d",&vec[i]);
	}
	for(i=0;i<tam;i++)
		{for(j=0;j<(tam-i);j++)
			if(vec[j]>vec[j+1])
				{	aux=vec[j];
					vec[j]=vec[j+1];
					vec[j+1]=aux;
				}
		}
	printf("vector ordenado\n\n");
	for (i = 0; i < tam; i++)
	{	printf("vec[%d]=%d\n",i,vec[i]);
	}
	return 0;
}

