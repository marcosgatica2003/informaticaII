#include <stdio.h>

#define N 10

struct nodo{
            float dato;
            struct nodo *ant;
            struct nodo *sig;
            };

int menu();
void may_men(struct nodo *);
void men_may(struct nodo *);
void imp(struct nodo *);


int main()
{struct nodo *primero,*ultimo,*p;
primero=ultimo=p=NULL;
	for(int i=0;i<N;i++){
		if((p=new(struct nodo))==NULL){
		printf("No hay memoria");}
		else{
		printf("Ingrese el dato %d:",i+1);
		scanf("%f",&p->dato);
		p->sig=NULL;
		p->ant=ultimo;
		if(primero==NULL)
		primero=p;
		else
		ultimo->sig=p;
		ultimo=p;}                  
}

p=primero;
int opcion=menu();
while(opcion!=3){
	switch(opcion){
	case 1:
		may_men(primero);
		imp(primero);
		break;
	case 2:
		men_may(primero);
		imp(primero);
		break;
}
opcion=menu();
}
printf("\n Fin del programa");
return 0;
}

int menu()
{ int opcion;
  printf(" Menu de opciones:\n"
         " 1-Ordenar de mayor a menor.\n"
         " 2-Ordenar de menor a mayor.\n"
         " 3-Salir\n");
          scanf("%d",&opcion);
          return opcion;
}

void may_men(struct nodo *primero)
{float aux;
 struct nodo *p,*q;
 int i,j;
 for(i=0;i<N;i++){
 p=primero;
	for(j=0;j<N-i-1;j++){
		q=p->sig;
		if(q->dato>p->dato){
		aux=q->dato;
		q->dato=p->dato;
		p->dato=aux;}
		p=q;}
  }                                                                      
}
                                 
void men_may(struct nodo *primero)
{float aux;
struct nodo *p,*q;
int i,j;
	for(i=0;i<N;i++){
		p=primero;
		for(j=0;j<N-i-1;j++){
			q=p->sig;
			if(q->dato<p->dato){
			aux=q->dato;
			q->dato=p->dato;
			p->dato=aux;
			p=q;}
		}                                                                      
 }
}

void imp(struct nodo *p){

printf("La lista es:\n");
	while(p!=NULL){
	printf("%.2f\n",p->dato);
	p=p->sig;}
}
   
