/*
 * Cola Ej 3.c
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
#include <malloc.h>
#include <stdlib.h>

struct nodo{
	char ap[50];
	int edad;
	struct nodo *sig;
};

int main(int argc, char **argv)
{	int bandera=0;
	struct nodo *pri, *ult, *p;
	pri=ult=NULL;
	do
	{
		p=malloc(sizeof(struct nodo));
		if(!p)
		{printf("No hay memoria\n");
		exit(1);
		}
		else
		{	printf("Ingrese apellido:\n");
			scanf("%s",&p->ap[0]);
			printf("Ingrese edad:\n");
			scanf("%d",&p->edad);
			p->sig=NULL;
			if (pri==NULL)
			{
				pri=p;
			}
			else
			{
				ult->sig=p;
			}
			ult=p;
			if (p->edad==999)
			{
				bandera=1;
			}
		}
		
	} while (bandera!=1);
	p=pri;
	while (p!=NULL)
	{
		if ((p->edad>=21)&&(p->edad!=999))
		{
			printf("-%s\t",p->ap);
			printf("%d\n",p->edad);
		}
		p=p->sig;
	}
	
	
	return 0;
}

