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
#define tam 3
int main(int argc, char **argv)
{int m[tam][tam],i,j;
printf("este programa imprime la diagonal principal de una matriz 3x3\n");
for (i = 0; i < tam; i++)
{	for(j=0;j<tam;j++)
		{	printf("\nA[%d][%d]=\t",i+1,j+1);
			scanf("%d",&m[i][j]);
			
		}
}
       int *vec=(int *)malloc(tam*sizeof(int));
for (i = 0; i < tam; i++)
{	
	vec[i]=m[0][i];
	
}
printf("fila1\n");
for (i = 0; i < tam; i++)
{
	printf("vec[%d]=%d\n",i+1, vec[i]);
}

	return 0;
}

