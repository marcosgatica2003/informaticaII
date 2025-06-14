#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct nodo
{
  int dato;
  struct nodo *sig;
};
void cargar(struct nodo *p, struct nodo *base)
{
    int i;
    for(i=0;i<10;i++)
    {
    p=new(struct nodo);
    printf("ingrese el numero\n");
    scanf("%d",p->dato);
    p->sig=base;
    base=p;
    }
}
void borrar(struct nodo *p, struct nodo *base)
{
     
    p=base;
    if(base==NULL)
    {
        printf("no hay elementos para borrar\n");
    }
    else
    {
        base=p->sig;
        printf("elemento borrado\n");
        delete(p);
    }
}
void mostrar(struct nodo *p, struct nodo *base)
{
    p=base;
    while(p!=NULL)
    {
        printf("%d",p->dato);
        p=p->sig;
    }
}
int main()
{
    
    int i;
    struct nodo *p,*base;
    base=NULL;
    printf("este programa realiza una pila de diez elementos y luego los imprime\n cargue la pila\n");
   cargar(p,base);
    printf("la pila cargada\t");
    mostrar(p,base);
    getch();
    return 0;
}
