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
void arreglo(int,int[]);
int main(int argc, char **argv)
{	int a[20],i,count=0;
	printf("este programa copia los numeros pares de un arreglo a otro\n");
	for (i = 0; i < 20; i++)
	{	
		count ++;
		printf("ingrese el numero %d\n",i+1);
		scanf("%d",&a[i]);
	}
arreglo(count,a);	
	
	return 0;
}

void arreglo (int c,int b[])
{ int arr[c],i,k=0;
	for (i = 0; i < c; i++)
	{	if((b[i]%2)==0)
			{ 
				arr[k]=b[i];
				k++;
			}
		
	}
	for (i = 0; i < k; i++)
	{	printf(" %d° numero par del arreglo copiado es=\t%d\n",i+1,arr[i]);
	}
}
