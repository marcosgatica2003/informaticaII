#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct nodo{
        int edad;
        char ap[10];
        struct nodo *sig;
        struct nodo *ant;
        };

int main()
{	struct nodo *p,*primero,*ultimo;
	primero=ultimo=p=NULL;
	int aux=1;
	while(aux==1){
		if((p=new(struct nodo))==NULL){
			printf("No hay memoria.\n");}
		else{
			printf("Ingrese el apellido:\n ");
			scanf("%s",p->ap);
			printf("Ingrese edad (Para salir 999): ");
			scanf("%d",&p->edad);
		if(p->edad==999)
			aux=0;
		else{
			p->sig=NULL;
			p->ant=ultimo;
		if(primero==NULL)
			primero=p;
		else
			ultimo->sig=p;                 
			ultimo=p;}                                     
            }
}
p=primero;
printf("Los datos de las personas mayores de edad son:");
while(p!=NULL)
{	if((p->edad)>=21)
	printf("Apellido:%s\nEdad:%d\n",p->ap,p->edad);
	p=p->sig;}
return 0;
}
                                                           
