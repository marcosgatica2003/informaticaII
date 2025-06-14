#include <stdio.h>
#include <malloc.h>

struct arbol {
int dato;
struct arbol *der;
struct arbol *izq;
};

void insertar(struct arbol **, int);
void compara(struct arbol **,struct arbol **,struct arbol **);
void inorden(struct arbol *puntero);

int main(int argc, char **argv)
{	struct arbol *arbol1;
	struct arbol *arbol2;
	struct arbol *raiz;
	raiz=arbol1=arbol2=NULL;
	int valor,i;
	printf("Ingrese el primer arbol:\n");
	for (i = 0; i < 4; i++)
		{printf("Inserte un valor\n\n");
		scanf("%d",&valor);
		insertar(&arbol1,valor);
		}
	printf("Ingrese el segundo arbol:\n");
	for (i = 0; i < 4; i++)
		{printf("Inserte un valor\n\n");
		scanf("%d",&valor);
		insertar(&arbol2,valor);
		}
	for (i = 0; i < 8; i++)

	{
	compara(&arbol1, &arbol2, &raiz);	
}
	
	printf("\nArbol generado:\n");
	inorden(raiz);
	
	return 0;
}

void insertar(struct arbol **p, int dato)
{	if(*p==NULL)
	{
	*p=malloc(sizeof(struct arbol));
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

void compara(struct arbol **p1, struct arbol **p2,struct arbol **pr)
{	
	if ((**p1).dato>(**p2).dato)
	{insertar(pr,(**p2).dato);
	//(*p2)=((**p2).izq);
	//compara(p1,p2,pr);
	}
	else
	{insertar(pr,(**p1).dato);
	//(*p1)=((**p1).der);
	//compara(p1,p2,pr);
	}
}
	
void inorden(struct arbol *puntero)
{if(puntero!=NULL)
	{
	inorden((*puntero).izq);
	printf(" %d ",(*puntero).dato);
	inorden((*puntero).der);
	}
}
