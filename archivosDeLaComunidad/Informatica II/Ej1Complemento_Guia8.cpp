#include <stdlib.h>
#include <stdio.h>

struct arbol {
   int dato;
   struct arbol *der;
   struct arbol *izq;
};

void insertar(struct arbol **, int);
void inorden(struct arbol *puntero);
void preorden(struct arbol *puntero);
void postorden(struct arbol *puntero);


int main (void)
{
	struct arbol *raiz;
	int i,valor;
	raiz=NULL;
	for(i=0;i<9;i++)
	{
		printf("Inserte un valor\n\n");
		scanf("%d",&valor);
		insertar(&raiz,valor);
     }

printf("\nRecorrido INORDEN\n\n");
inorden(raiz);
printf("\nRecorrido PREORDEN\n\n");
preorden(raiz);
printf("\nRecorrido POSTORDEN\n\n");
postorden(raiz);
return(0);
}

void insertar(struct arbol **p, int dato)
{
	
	if(*p==NULL)
	 {
		// printf("entra al si\n\n"); 
		 *p=new(struct arbol);
				 (**p).dato=dato;
				 (**p).izq=NULL;
				 (**p).der=NULL;
	 }
	 else
	 {
	  if(dato<(**p).dato)
	   insertar(&(**p).izq,dato);
	   else
	   insertar(&(**p).der,dato);
	 }  
}

void inorden(struct arbol *puntero)
{
	
	if(puntero!=NULL)
	{
      inorden((*puntero).izq);
      printf(" %d ",(*puntero).dato);
      inorden((*puntero).der);
  }
}


void postorden(struct arbol *puntero)
{
	
	if(puntero!=NULL)
	{
      postorden((*puntero).izq);
      postorden((*puntero).der);
      printf(" %d ",(*puntero).dato);
  }
}

void preorden(struct arbol *puntero)
{
	
	if(puntero!=NULL)
	{
		 printf(" %d ",(*puntero).dato);
      preorden((*puntero).izq);
      preorden((*puntero).der);
  }
}
