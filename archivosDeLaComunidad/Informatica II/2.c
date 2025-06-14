//Implementar un arreglo estatico de n elementos de tipo entero, contar la cantidad de numeros positivos, mostrar por
//pantalla el arreglo y la cantidad de numeros positivos


#include<stdio.h>
#include<stdlib.h>
#define tam 100

void cargar (int *,int *);
void cuenta(int *,int *, int *);
void imprime(int *,int *);
void menu(void);


int main (void)
{
int vector[tam]={0}, positivos=0, tamanio=0, select=0;
	while(select!=4)
	{
		menu();
		scanf("%d",&select);
		switch(select)
		{
			case 1: system("clear");
			        cargar(vector,&tamanio);
			        system("clear");
					break;
			case 2: system("clear");
			        imprime(vector,&tamanio);
					break;
			case 3: system("clear");
			        cuenta(vector,&tamanio,&positivos);
					printf("La cantidad de numeros positivos en el arreglo es: %d\n",positivos);
					break;
		   case 4: select = 4;
		           break;
		}
   }
return(0);		
}

void menu(void)
{   
	printf("\n1-Cargar el arreglo\n");
	printf("\n2-Imprimir el arreglo\n");
	printf("\n3-Contar los positivos el arreglo\n");
	printf("\n4-Salir");
}

void cargar(int *p, int *tama)
{
	int i;
	printf("Ingrese el tamanio del arreglo\n\n");
	scanf("%d",&(*tama));
	for(i=0;i<(*tama);i++)
	{
		printf("Ingrese el elemento %d\n",i+1);
		scanf("%d",&*(p+i));
     }
}

void imprime(int *p, int *tama)
{
	printf("Impresion del array\n\n");
	int i;
	for(i=0;i<(*tama);i++)
	{
		printf(" %d ",*(p+i));
	}
}

void cuenta (int *p, int *tama, int *positi)
{
	int i;
    for(i=0;i<(*tama);i++)
    {
		if(*(p+i)>0)
		(*positi)++;
		;
	}	
}

