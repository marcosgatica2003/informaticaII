/*
 * Ej 3.c
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


struct nodos{
	char ap[50];
	int edad;
	struct nodos *sig;
};

int main(int argc, char **argv)
{
	struct nodos *p,*base;
	base=NULL;
	while(p!=NULL){
		p=malloc(sizeof(struct nodos));
		printf("Ingrese Apellido:\n");
		scanf("%s",&p->ap[0]);
		printf("Ingrese edad:\n");
		scanf("%d",&p->edad);
		p->sig=base;
		base=p;
		if(p->edad==999)
		break;
	}
	p=base;
	printf("Apellidos de mayores de 21 años:\n");
	while(p!=NULL)
	{	if(((p->edad)>21)&&((p->edad)!=999))
		{printf("- %s\n",p->ap);
		printf("Edad: %d\n",p->edad);}
		p=p->sig;
	}
	return 0;
}

