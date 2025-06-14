/*
 * COLA Ej 6.c
 * 
 * Copyright 2012 Sal <saul@ubuntu>
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
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct alumnos{
	char ap[20];
	float prom;
	int ina;
	struct alumnos *sig;
};

int menu(void);
void promay(struct alumnos*p);
void inamenor(struct alumnos*p);
void promocion(struct alumnos*p);

int main(int argc, char **argv)
{	char op;
	struct alumnos *primero, *ultimo, *p;
	ultimo=NULL;
	primero=NULL;
	
	do
	{p=malloc(sizeof(struct alumnos));
	if(!p)
	{printf("No hay memoria.\n");
	exit(0);}
	else
	{	printf("Ingrese apellido:\n");
		scanf("%s",&p->ap[0]);
		printf("Ingrese promedio gral del alumno:\n");
		scanf("%f",&p->prom);
		printf("Ingrese cantidad de inasistencias:\n");
		scanf("%d",&p->ina);
		p->sig=NULL;
		if(primero==NULL)
		{primero=p;}
		else
		{ultimo->sig=p;}
		ultimo=p;
	}
	printf("Desea agregar otro alumno?: presione S o s.\n");
	scanf("%s",&op);
	}while(op=='S'||op=='s');
	p=primero;
	
	switch (menu())
	{case 1:{promay(p);
			break;}
	case 2:{inamenor(p);
			break;}
	case 3:{promocion(p);
			break;}
	default:{break;}			
	}
	return 0;
}

int menu(void)
{	int op=0;
	printf("Indique la opcion que desea:\n"
			"1- Informacion del promedio mayor.\n"
			"2- Información del alumno con menor cant de inasistencias.\n"
			"3- Alumnos con promedio mayor a 7.\n"
			"4- Salir.\n?:");
	scanf("%d",&op);
	return op;
}

void promay(struct alumnos*p)
{	float mayor=0;
	struct alumnos *res;
	res=malloc(sizeof(struct alumnos));
	while (p!=NULL)
	{	if (p->prom>=mayor)
	{	mayor=p->prom;
		strcpy(res->ap,p->ap);
		res->prom=p->prom;
		res->ina=p->ina;
	}
	p=p->sig;
	}
	printf("Apellido:%s\n",res->ap);
	printf("Promedio:%.2f\n",res->prom);
	printf("Inasistencias:%d\n",res->ina);
}

void inamenor(struct alumnos*p)
{	int menor;
	struct alumnos *res;
	res=malloc(sizeof(struct alumnos));
	menor=p->ina;
	while (p!=NULL)
	{	if ((p->ina)<=menor)
	{menor=p->ina;
		strcpy(res->ap,p->ap);
		res->prom=p->prom;
		res->ina=p->ina;
	}
	p=p->sig;
	}
	printf("Apellido:%s\n",res->ap);
	printf("Promedio:%.2f\n",res->prom);
	printf("Inasistencias:%d\n",res->ina);
}

void promocion(struct alumnos*p)
{	while(p!=NULL)
		{ if((p->prom)>=7)
			{		printf("Apellido:%s\n",p->ap);
					printf("Promedio:%.2f\n",p->prom);
					printf("Inasistencias:%d\n",p->ina);
			} p=p->sig;
		}
}
