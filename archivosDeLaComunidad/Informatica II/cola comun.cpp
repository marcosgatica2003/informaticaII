#include<conio.h>
#include<stdio.h>   

struct nodo
{
       int dato;
       struct nodo *sig;
       };
struct nodo *ultimo;
nodo *cargar(struct nodo *base)
{
     struct nodo *p;
     p=new(struct nodo);
     printf("ingrese el dato\n");
     scanf("%d",&p->dato);
     p->sig=NULL;
     if(base==NULL)
     {base=p;
     ultimo=p;
     }
     else
     {
     ultimo->sig=p;
     ultimo=p;
     }
     return base;
     }
void mostrar(struct nodo *base)
{
     struct nodo *p;
     p=base;
     while(p!=NULL)
     {             printf("%d\t",p->dato);
                   p=p->sig;
     }
     printf("no hay nada para mostrar\n");
}
nodo *borrar(struct nodo *base)
{
     struct nodo *p;
     p=base;
     base=p->sig;
     printf("elemento borrado: %d\n",p->dato);
     delete(p);
     return base;
 }
int main()
{
    int a;
    struct nodo *base;
    base=NULL;
    ultimo=NULL;
    printf("ingrese la opcion\n 1-cargar\t 2-mostrar\t 3-borrar\t 4-salir\n");
    scanf("%d",&a);
    while(a<4)
    {
              switch(a)
              {
                       case 1:
                            base=cargar(base);
                            break;
                       case 2:
                            mostrar(base);
                            break;
                       case 3:
                            base=borrar(base);
                            break;
                       default:
                               break;
              }
    printf("ingrese la opcion\n 1-cargar\t 2-mostrar\t 3-borrar\t 4-salir\n");
    scanf("%d",&a);     
}
getch();
return 0;
}
     
