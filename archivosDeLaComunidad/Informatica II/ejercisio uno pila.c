#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct nodo
{
  int dato;
  struct nodo *sig;
};
void cargar()
{
    int i;
    struct nodo *p,*base;
    p=new(struct nodo);
    base=NULL;
    printf("ingrese el numero\n");
    scanf("%d",p->dato);
    p->sig=base;
    base=p;
}
void borrar()
{
    p=base;
    if(base==NULL)
    {
        printf("no hay elementos para borrar\n");
    }
    else
    {
        base=p->sig;
        printf("elemento borrado\n")
        delete(p);
    }
}
void mostrar()
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
    struct nodo v[10];
    printf("este programa realiza una pila de diez elementos y luego los imprime\n cargue la pila\n");
    for(i=0;i<10;i++)
    {
        v[i]=cargar();
    }
    printf("la pila cargada\t");
    mostrar();
    getch();
    return 0;
}
