//Implementar un programa que permita cargar un arreglo de enteros, cuyo tamanio sera ingresado por teclado con repeticiones,
//y mediante un metodo eliminar las repeticiones.

#include<stdio.h>
#include<stdlib.h>
#define tam 100

void cargar(int *, int *);
void eliminarep(int *, int *);
void imprime(int *, int *);

int main(void)
{
	int vector[tam], tamanio;
	cargar(vector,&tamanio);
	printf("Vector con posibles repeticiones\n\n");
	imprime(vector,&tamanio);
	eliminarep(vector,&tamanio);
	printf("\nVector sin repeticiones\n\n");
	imprime(vector,&tamanio);
return(0);
}

void cargar(int *p, int *tamanio)
{ int i;

  printf("Ingrese el tamanio del arreglo (menor a 100)\n");
  scanf("%d",&(*tamanio));
  for(i=0;i<(*tamanio);i++)
   {
	 printf("Ingrese el elemento %d\n",i+1);
	 scanf("%d",&*(p+i));
    }
	
}

void imprime(int *p, int *tamanio)
{ int i;
  printf("TAMANIO %d\n\n",(*tamanio));
  for(i=0;i<(*tamanio);i++)
   {
	 printf(" %d ",*(p+i));
   }
	
}

void eliminarep(int *p, int *tamanio)
{ int i,nt=0,flag=0,j=0;
  int nuevo[tam];
  for(i=0;i<(*tamanio);i++)
   { j=0;
	 while((j<=nt))
	  {
		  if(*(p+i)==nuevo[j])
		   flag=1;
		   j++;  
	  }
	 if(flag!=1)
	  {
		nuevo[nt]=*(p+i);
		nt++;
	    flag=0;
	  }
    }
*tamanio=nt;
p=nuevo;
}

	
