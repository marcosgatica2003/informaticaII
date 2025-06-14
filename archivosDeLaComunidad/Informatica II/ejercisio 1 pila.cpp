#include<conio.h>
#include<stdio.h>   

struct nodo
{
       int dato;
       struct nodo *sig;
       };
nodo *cargar(struct nodo *base)
{
     struct nodo *p;
     p=new(struct nodo);
     printf("ingrese el dato\n");
     scanf("%d",&p->dato);
     p->sig=base;
     base=p;
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

int main()
{
    int a,i;
    struct nodo *base;
    base=NULL;
    printf("este programa cargara 10 datos de tipo entero y los mostrara\n");
    for(i=0;i<10;i++)
    base=cargar(base);
    mostrar(base); 
getch();
return 0;
}
     
