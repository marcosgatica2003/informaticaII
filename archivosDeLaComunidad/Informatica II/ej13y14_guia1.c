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
int main(int argc, char **argv)
{	int m[tam][tam]={{2,3,1},{4,5,1},{50,2,4}};
	int i,res[tam];
printf("ej13y14 guia_1\n");
for (i = 0; i < tam; i++)
{	
		res[i]=m[i][0]+m[i][1]+m[i][2];
}
for (i = 0; i < tam; i++)
{
	printf("resultado de la suma de la fila %d=%d\n",i+1,res[i]);
}

	
	return 0;
}

