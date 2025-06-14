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
#define tam1 3
#define tam 5
void ingresa(int *);
void muestra(int *);
void aplazados(int *);
void prom(int *);
void aprobados(int *);
void prom_t(int *);
void operacion(char opc,int *m);
int i,j;
int main(int argc, char **argv)
{
       int matriz[tam][tam1],op;
	   printf("ej15_guia1\n");
       ingresa(matriz[0]);
       muestra(matriz[0]);
       do
       {
			printf("\n\n  MENU:\n1- Numero de aplazados\n2- Pormedio por materia\n3- Numero de aprobados\n4- Promedio notas\n5- Salir\n\n");
			scanf("%d",&op);
			operacion(op,matriz[0]);
		}while(op!=5);                                                  
       return 0;
}
void ingresa(int *m)
{
	for(i=0;i<tam;i++)
		{
			printf("\n\nAlumno %d:\n",i+1);
				for(j=0;j<tam1;j++)
					{
						do
						{
							printf("Nota %d:",j+1);
							scanf("%d",m+i*tam+j);
						}while((*(m+i*tam+j)<1)||(*(m+i*tam+j)>10));
					}
		}
}
            
void muestra(int *m)
{
	for(i=0;i<tam;i++)
		{
				printf("\t");
			for(j=0;j<tam1;j++)
				{
					printf("%d",*(m+i*tam+j));
					if (j==2)
					{printf("\n");}
					else
					{printf("\t");}
				}
		}
}

void aplazados(int *m)
{
	int total=0;
		for(i=0;i<tam;i++)
			{
				for(j=0;j<tam1;j++)
					{
						if(*(m+i*tam+j)<4)
							{total++;}
					}
			}
printf("\n las notas menores a 4 son=%d\n",total);
}
                       
void prom(int *m)
{
	printf("El promedio por materia es:\n");
	float prom[tam1]={0};
	for(j=0;j<tam1;j++)
		{
			for(i=0;i<tam;i++)
			{
			prom[j]+=*(m+i*tam1+j);
			}
		}
printf("\nMateria %d: %.2f",j+1,prom[j]/tam);
}


void aprobados(int *m)
{
	int total=0;
	for(i=0;i<tam;i++)
		{
			for(j=0;j<tam1;j++)
				{
					if(*(m+i*tam+j)>=4)
					total++;
				}
		}
printf("\n numero de notas aprobadas=%d\n",total);
}

void prom_t(int *m)
{
	float prom=0;
	for(i=0;i<tam;i++)
		{
			for(j=0;j<tam1;j++)
				{
					prom+=*(m+i*tam+j);
					printf("\n El promedio total es de %.2f\n",prom/(tam*tam1));
				}
		}
}
                  
void operacion(char opc,int *m)
{
	switch(opc){
				case 1:
                         aplazados(m);
                         break;
                case 2:
                         prom(m);
                         break;
                case 3:
                         aprobados(m);
                         break;
                case 4:
                         prom_t(m);
                         break;
                default:
                         printf("\n\n fin");
                }
}
