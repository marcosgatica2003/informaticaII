#include <iostream>
using namespace std;

struct nodo{
            int dato;
            struct nodo *iz;
            struct nodo *der;
            };

void cargar(int,struct nodo **);
void repetic(struct nodo *,struct nodo **,int);
void imp(struct nodo *);

int main()
{struct nodo *raiz,*copia;
raiz=copia=NULL;
int dato=1;
cout<<" Ingrese dato(Presione 0 para salir): ";
cin>>dato;
while(dato!=0){
	cargar(dato,&raiz);
	cout<<" Ingrese dato(Presione 0 para salir): ";
	cin>>dato;}
repetic(raiz,&copia,0);
cout<<"Arbol original\n";
imp(raiz);
cout<<"\nCopia del arbol:\n";
imp(copia);
return 0;
}

void cargar(int dato,struct nodo **raiz)
{struct nodo *p,*aux,*actual;
int dir;
p=new(struct nodo);
p->dato=dato;
p->iz=p->der=NULL;
if(*raiz==NULL)
	*raiz=p;
else{
	aux=*raiz;
	while(aux!=NULL){
	actual=aux;
	if((actual->dato)>=(p->dato)){
	dir=0;
	aux=actual->iz;}
	else{
	dir=1;
	aux=actual->der;}
	}
	if(dir==0)
	actual->iz=p;
	else
	actual->der=p;
}
}

void repetic(struct nodo *p,struct nodo **copia,int dato)
{if(p->iz!=NULL)
	repetic(p->iz,copia,p->dato);
if(p->dato!=dato)
	cargar(p->dato,copia);
if(p->der!=NULL)
	repetic(p->der,copia,p->dato);
}

void imp(struct nodo *p)
{if(p->iz!=NULL)
	imp(p->iz);
	cout<<"-"<<p->dato;
if(p->der!=NULL)
	imp(p->der);
}
