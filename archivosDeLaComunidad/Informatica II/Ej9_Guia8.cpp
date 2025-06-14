#include <iostream>
using namespace std;

struct arbol
{
	int dato;
	struct arbol *der;
	struct arbol *izq;
};

void carga (struct arbol**,int );
void nodo(struct arbol**,struct arbol *);
void mostrar (struct arbol *);


int main ()
{
	struct arbol *nodo1,*nodo2,*resultado;
	int valor,i;
	
	nodo1 = nodo2 = resultado = NULL;
	
	
	cout<<"Ingrese el arobl 1: \n";
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese el dato: ";
		cin>>valor;
		carga( &nodo1, valor);
	}
	
	cout<<"\n\nIngrese el arobl 2: \n";
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese el dato: ";
		cin>>valor;
		carga(&nodo2,valor);
	}
	
	cout<<"\n\nTEMINO LA CARGA de los dos primeros arboles\n\n";
	
	nodo(&resultado, nodo1);
	nodo(&resultado, nodo2);
	
	cout<<"\n\nTEMINO LA CARGA del arbol final \n\n";
	
	mostrar( resultado);

	return 0;
}


void carga( struct arbol** p,int dat ) 
{
	if(*p==NULL)
	{
		*p = new (struct arbol);
		(*p)->dato=dat;
		(*p)->izq=NULL;
		(*p)->der=NULL;
	}
	else
	{
		if( (*p)->dato > dat )
		{carga( &(*p)->izq, dat);}
		else
		{carga( &(*p)->der, dat );}
	}	
}



void nodo (struct arbol ** resul ,struct arbol* p)
{
	if( p!= NULL )
	{
		 nodo(  &(*resul), p->izq );
		 nodo(  &(*resul), p->der );
		carga( resul, p->dato );
	}
}


void mostrar (struct arbol * a)
{
	if(a!=NULL)
	{
		mostrar( a->izq );
		mostrar( a->der );
		cout<< a->dato;
	}
}








