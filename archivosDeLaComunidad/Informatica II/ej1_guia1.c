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

void leer(float *);
void compara(float *);
int muestra(float *);

int main(int argc, char **argv)
{
       float nro[2];
       int bandera=1;
       printf(" division entre mayor y menor numero ingresados por teclado\n\n");
do
	{
       leer(nro);
       compara(nro);
       bandera=muestra(nro);
     }while(bandera==0);
       return 0;
       }
       
void leer(float *q){
     int i;
     for(i=0;i<2;i++){
                        printf("Ingrese el %d° nro:",i+1);
                        scanf("%f",(q+i));
                        }
     }
     
void compara(float *q){
     float aux;
     if(*q<*(q+1))
               {aux=*q;
               *q=*(q+1);
               *(q+1)=aux;
               }
     }
     
int muestra(float *q){
                    if(*(q+1)!=0)
                               { printf("\n %.2f / %.2f = %.2f",*q,*(q+1),(*q)/(*(q+1)));
								return 1;
								}
                    else
								{printf("\nno se puede dividir por cero, ingrese los nuevos numeros\n");
								return 0;}
                    }
