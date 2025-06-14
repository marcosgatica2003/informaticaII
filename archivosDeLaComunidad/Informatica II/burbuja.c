//      burbuja.c
//      
//      Copyright 2011 luis miguel <luisma@luisma>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.


#include <stdio.h>
#define tam 4
int main(int argc, char** argv)
{
		int vec[]={23,12,21,9},i,j,aux=0,a=0,b=0,vect[]={23,12,21,9};
		for (i = 0; i < tam ; i++)
		{ printf("vec[%d]= %d\n", i+1, vec[i]);
		if(i==3)
			printf("\n");
			
		}
	    printf("Realizamos el ordenamiento con metodo burbuja:\n\n");
		for (i = 0; i < tam-1 ; i++)
		{for (j = 0; j < (tam-1); j++)
		{	
			if(vec[j]>vec[j+1])
				{aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
			
				}
		a=a++;				
		printf("Vuelta N°:%d\n",a);
		if(a==9)
		printf("\n");
		}
		}
		for (i = 0; i < tam; i++)
		{ printf("vec[%d]= %d\n", i+1, vec[i]);	
		}
		printf("\n");
		printf("Realizamos el ordenamiento con metodo burbuja mejorado:\n\n");
		for (i = 0; i < tam-1 ; i++)
		{for (j = 0; j < (tam-1-i); j++)
		{	
			if(vect[j]>vect[j+1])
				{aux=vect[j];
				vect[j]=vect[j+1];
				vect[j+1]=aux;

				}
		b=b++;
		printf("Vuelta N°:%d\n",b);
		if(b==6)
		printf("\n");
		}
		}
		for (i = 0; i < tam; i++)
		{ printf("vect[%d]= %d\n", i+1, vec[i]);
		}		
	return 0;
}
