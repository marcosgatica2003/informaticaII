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
int i;                          
void leer(float []);
void sumar(float ,float );
void compara(float []);
int main(int argc, char **argv)
{
       float n[3];
       printf(" suma del mayor y el menor numero\n");
       leer(n);
       compara(n);
       return 0;
       }
void compara(float a[]){
                       float mayor=a[0];
                       float menor=a[0];
                       for(i=1;i<3;i++){
                                            if(mayor<a[i])
                                                            mayor=a[i];
                                            if(menor>a[i])
                                                            menor=a[i];
                                            }
                       sumar(menor,mayor);
                       }
                       
void sumar(float n1,float n2){
                         float res=n1+n2;
                         printf("\n %.2f + %.2f = %.2f\n",n1,n2,res);
                         }
void leer(float a[])
{

	for(i=0;i<3;i++)
	{
		printf(" Ingrese el %d nro:",i+1);
		scanf("%f",&a[i]);
		if(i!=0)
			{		
				if(a[i]==a[i-1]||a[i]==a[i-2])
				{printf("el numero ingresado es igual a un numero ya ingresado, ingreselo nuevamente\n");
				i--;
                }
			}
	}
}
