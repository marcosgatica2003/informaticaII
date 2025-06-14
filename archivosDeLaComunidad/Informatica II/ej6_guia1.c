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
void copy(int, char[]);
int main(int argc, char **argv)
{	char a[15];
	int i,count=0;
	printf("este programa copia las mayusculas en otro arreglo\n");
	for (i = 0; i < 15; i++)
	{	printf("ingrese las letras en mayuscula y minuscula\n");
		scanf("%s",&a[i]);
	}
for (i = 0; i < 15; i++)
{
	if (a[i]<97)
	{
		count++;
	}
copy(count,a);
	
}

	
	return 0;
}

void copy(int b, char c[])
{	char d[b];
	int i=0,j=0;
	do
	{
			if(c[i]<97)
			{	d[j]=c[i];
				i++;
				j++;
			}
			else
			{	i++;
			}
		}while(i!=b);
	for (i = 0; i < b; i++)
		{
			printf("caracter solo en minuscula:\t %c \n", d[i]);
		}
}
