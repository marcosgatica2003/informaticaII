#include <stdio.h>
#define N 10

struct nodo{
            char letra;
            struct nodo *sig;
            struct nodo *ant;
            };

void repetic(struct nodo *);

int main(){
struct nodo *primero,*ultimo,*p;
primero=ultimo=p=NULL;
	for(int i=0;i<N;i++){
	if((p=new(struct nodo))==NULL){
	printf("\n No hay memoria");}  
	else{
		do{
			printf("Ingrese letra %d:",i+1);
			scanf("%s",&p->letra);}
		while((p->letra<65)&&(p->letra>90)&&(p->letra<97)&&(p->letra>122));
		p->sig=NULL;
		p->ant=ultimo;
		if(primero==NULL)
		primero=p;
		else
		ultimo->sig=p;
		ultimo=p;
		}                  
	}
repetic(primero);
printf("Fin del programa\n");
return 0;
}
           
void repetic(struct nodo *p)
{struct nodo *q;
printf("Las letras repetidas son:\n");
	while(p!=NULL){
	q=p->sig;
	if(p->letra!='0')
	while(q!=NULL){
		if(q->letra==p->letra)
		{printf("\n%c",p->letra);
		q->letra='0';}
		}
		p=p->sig;
        }
}
