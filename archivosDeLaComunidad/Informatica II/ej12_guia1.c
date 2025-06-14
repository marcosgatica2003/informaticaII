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
#define tam 3

void ingresa(char *,char *);
void compara(char *,char *,int ); 
void recorrer(char *,char *);
void mostrar(char *);
int i,j;
int main(int argc, char **argv)
{
       char mat1[tam][tam],mat2[tam][tam];
       printf(" ejercicio 12_guia1\n\n");
       ingresa(mat1[0],mat2[0]);
       recorrer(mat1[0],mat2[0]);
       printf("\n\n matriz 1:\n");
       mostrar(mat1[0]);
       printf("\n\n matriz 2:\n");
       mostrar(mat2[0]);
       return 0;
       }
       
void ingresa(char *m1,char *m2)
{
	for(i=0;i<tam;i++)
		{for(j=0;j<tam;j++)
			{
				printf("A[%d][%d]=",i+1,j+1);
				scanf("%s",m1+i*tam+j);
				*(m2+i*tam+j)=*(m1+i*tam+j);
             }
        }
}

void compara(char *m1,char *m2,int n)
{
	for(i=n+1;i<tam*tam;i++)
		{
			if(*(m1+i)==*(m2+n))
			{	
				*(m2+i)=' ';
			}
		}
}
                                
void recorrer(char *m1,char *m2)
{
	for(i=0;i<tam;i++)
		{
			for(j=0;j<tam;j++)
				{if(*(m2+i*tam+j)!=' ')
					{compara(m1,m2,i*tam+j);
					}
				}
		}
}
void mostrar(char *matriz)
{
	for(i=0;i<tam;i++)
		{
			printf("\t");
			for(j=0;j<tam;j++)
				{
					printf("%c\t",*(matriz+i*tam+j));
					printf("\n");
                }
        }
}
