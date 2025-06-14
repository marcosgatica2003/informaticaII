#include<stdio.h>
#include<stdlib.h>

void carga (int *);
void muestra (int **);

int main(void)
{
int *p,**g;
carga(p);
**g=&p;
printf("Imprime desde main %d\n\n",*p);
muestra(g);
return(0);
}

void carga(int *p)
{
int dato;
printf("Dato: ??\n\n");
scanf("%d",&dato);
*p=dato;	
}

void muestra(int **g)
{
	printf("entra a muestra");
	int dato=**g;
printf("Dato: %d",dato);
}
