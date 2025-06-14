#include <stdio.h>

struct nodo{
            float dato;
            struct nodo *sig;
            struct nodo *ant;
            };

int main()
{	int tam,i;
	float *vect;
	struct nodo *p,*primero,*ultimo;
    p=primero=ultimo=NULL;
	printf("Ingrese tamaño del arreglo: ");
	scanf("%d",&tam);
	vect=new(float);
	for(i=0;i<tam;i++)
		{printf(" Ingrese elemento %d: ",i+1);
		scanf("%f",vect+i);}
	for(i=0;i<tam;i++){
		if((p=new(struct nodo))==NULL){
		printf("\nNo hay memoria.");}
		else{
		p->dato=*(vect+i);
		p->sig=NULL;
		p->ant=ultimo;
		if(primero==NULL)
		primero=p;
		else
		ultimo->sig=p;
		ultimo=p;}
        }
	p=primero;
	while(p!=NULL){
	printf("Elemento: %.1f\n",p->dato);
	p=p->sig;}
	p=ultimo;
	printf("\n");
	while(p!=NULL){
	printf("Elemento: %.1f\n",p->dato);
	p=p->ant;}
return 0;
}
