#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


struct arbol {
   int dato;
   struct arbol *der;
   struct arbol *izq;
};

typedef struct arbol * ptro;

void cargar(ptro *,int);
void inorden(ptro);
void preorden(ptro);
void postorden(ptro);

int main(void)
{
	ptro raiz;
	raiz=NULL;
	int dato,i;
	for(i=0;i<10;i++)
	{
		cout<<"Ingrese el dato "<<i+1<<"\n";
		cin>>dato;
		cargar(&raiz,dato);
	}
	cout<<"\n CON TYPEDEF";
	cout<<"\n Recorrido INORDEN";
	inorden(raiz);
	cout<<"\n Recorrido PREORDEN";
	preorden(raiz);
	cout<<"\n Recorrido POSTORDEN";
	postorden(raiz);
}

void cargar(ptro *tree,int dato)
{
	if(*tree==NULL)
	{
		*tree=new(arbol);
		(*tree)->dato=dato;
		(*tree)->izq=NULL;
		(*tree)->der=NULL;
	}
	else
	{
		if(dato>(*tree)->dato)
		cargar(&(*tree)->der,dato);
		if(dato<(*tree)->dato)
		cargar(&(*tree)->izq,dato);
	}
}

void inorden(ptro tree)
{
	if(tree!=NULL)
	{
		inorden(tree->izq);
		printf(" %d ",(tree)->dato);
		inorden(tree->der);
	}
}

void preorden(ptro tree)
{
	if(tree!=NULL)
	{
		printf(" %d ",(tree)->dato);
		preorden(tree->izq);
		preorden(tree->der);
	}
}

void postorden(ptro tree)
{
	if(tree!=NULL)
	{
		postorden(tree->izq);
		postorden(tree->der);
		printf(" %d ",(tree)->dato);
	}
}
		
