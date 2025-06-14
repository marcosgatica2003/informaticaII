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
#define tam 5
void fun1(char *); 
int mayus(char *);
int minus(char *);
int verificar(char *);
void copiar(char *,char *);
int recorrer(char *,char *);
void imprime(char *,int);
int main(int argc, char **argv)
{
       char arr1[tam],arr2[tam];
       int res;
       printf(" el programa copia las letras de un arreglo a otro\n");
       fun1(arr1);
       res=recorrer(arr1,arr2);
       printf("\nArreglo 1:\n");
       imprime(arr1,tam);
       printf("\nArreglo 2:\n");
       imprime(arr2,res);
       return 0;
       }
       

void fun1(char *A){
	int i;
                   for(i=0;i<tam;i++){
                                          printf("1[%d]=",i+1);
                                          scanf("%s",A+i);
                                          }
                   }
                   
int mayus(char *c){
                   if((*c<91)&&(64<*c))
                                       return 1;
                   else
                       return 0;
                   }
int minus(char *c){
                   if((*c<123)&&(96<*c))
                                       return 1;
                   else
                       return 0;
                   }
int verificar(char *caracter){
                              if((mayus(caracter))||(minus(caracter)))
                                                                     return 1;
                              else
                                  return 0;
                              }
void copiar(char *c1,char *c2){
                               *c2=*c1;
                               }
int recorrer(char *A,char *B){
                              int total=0,i;
                              for( i=0;i<tam;i++)
                                                    if(verificar(A+i)==1){
                                                                          copiar(A+i,B+total);
                                                                          total++;
                                                                          }
                              return total;
                              }
void imprime(char *vec,int cant){
	int i;
                                  for(i=0;i<cant;i++)
                                                         printf("   %c\n",*(vec+i));
                                  }
