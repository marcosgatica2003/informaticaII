//Generar un programa, que cargue un arreglo, muestre, ordene, busque un valor y devuelva su posicion.
//utilizando metodos para todo esto.

#include<stdio.h>
#include<stdlib.h>

#define t 100;

void menu(void);
void carga(int *,int *);
void muestra (int *, int*);
void eliminarep(int *, int *);
void busca (int *, int *);


int main (void)
{
	int vector[100];
	int tam=0, select=0;
	while(select!=5)
	{
		menu();
		scanf("%d",&select);
		switch(select)
		{
			case 1: carga(vector,&tam);
					system("clear");
			        break;	
			case 2: system("clear");
			        muestra(vector,&tam);
			        break;	
			case 3: system("clear");
			        busca(vector,&tam);
			        break;		
			case 4: select=4; 
			        break;
	    }
	 }
return(0);
}
				
void menu (void)
{
	printf("1-Cargar datos al arreglo\n\n");
	printf("2-Mostrar el arreglo\n\n");
	printf("3-Buscar un valor en el arreglo\n\n");
	printf("5-Salir \n\n");
}
	
void carga (int *p, int *tam)
{
	int i;
	printf("Ingrese el tamanio del arreglo (debe ser menor a 100)\n");
	scanf("%d",&(*tam));
	for(i=0;i<*tam;i++)
	 {
		 printf("Ingrese el elemento %d\n\n",i+1);
		 scanf("%d",&*(p+i));
	 }
}

void muestra (int *p, int *tam)
{   
	printf("Imprimimos el arreglo de tamanio %d\n\n",(*tam));
	int i;
		for(i=0;i<*(tam);i++)
		 printf("%d\n\n",*(p+i));
}

void busca (int *p, int *tam)
{   
	int valor, flag=0, posicion=0,i=0;
	if((*tam)==0)
	{
		printf("El arreglo esta vacio");
	}
	else
	{
		printf("Ingrese un valor a buscar\n");
		scanf("%d",&valor);
		while((flag==0)&&(i<(*tam)))
		{
			if(valor==(*(p+i)))
			 {
				 flag=1;
				 posicion=i;
		     }
		     else
		     i++;
		}
		if(flag==1)
	    printf("El valor esta en la posicion %d\n\n",posicion+1);
	    else
	    printf("El valor NO esta\n\n");
    }
}
