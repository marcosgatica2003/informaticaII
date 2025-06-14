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

int main(int argc, char **argv)
{int i,a[]={2,-3,30,-1,-1,50,22,100,0,5};
		printf("este programa muestra los numeros positivos de un arreglo con datos ya cargados\n");
		for (i = 0; i < 10; i++)
		{	if(a[i]>0)
				{printf("el numero positivo es:%d\t\n",a[i]);
				}
			
		}
		
	return 0;
}

