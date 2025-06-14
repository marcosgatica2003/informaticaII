/*
 * COLA Ej 4.c
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
struct cola
{	char ap[50];
	char sex;
	int edad;
	struct cola *sigc;
};
struct pila
{	char ap[50];
	char sex;
	int edad;
	struct pila *sigp;
};
int main(int argc, char **argv)
{	struct cola *pri,*ult,*pc;
	struct pila *base,*pp;
	int bandera=0;
	pri=NULL;
	ult=NULL;
	base=NULL;
	do
	{	pc=malloc(sizeof(struct cola));
		if(!pc)
		{	printf("no hay memoria\n");
			exit(0);
		}
		else
		{	printf("ingrese apellido:\n");
			scanf("%s",&pc->ap[0]);
			printf("ingrese sexo, 'M' o 'F':\n");
			scanf("%s",&pc->sex);
			printf("ingrese edad:\n");
			scanf("%d",&pc->edad);
			pc->sigc=NULL;
		}
		if(pri==NULL)
		{pri=pc;}
		else
		{ult->sigc=pc;}
		ult=pc;
		if((pc->edad)==999)
		bandera=1;
	}while(bandera!=1);
	pc=pri;
	while(pc!=NULL)
	{	pp=malloc(sizeof(struct pila));
		if(!pp)
		{	printf("no hay memoria\n");
			exit (0);
		}
		else
			{
						if((pc->edad)>=18&&(pc->sex)=='F')
							if((pc->edad)!=999)
						{	strcpy(pp->ap,pc->ap);
							pp->edad=pc->edad;
							pp->sigp=NULL;
							base=pp;
						}
					
			}pc=pc->sigc;
	}
	pp=base;
	while(pp!=NULL)
	{	printf("apellido:%s\n",pp->ap);
		printf("edad:%d\n",pp->edad);
		pp=pp->sigp;
	}
		
	return 0;
}

