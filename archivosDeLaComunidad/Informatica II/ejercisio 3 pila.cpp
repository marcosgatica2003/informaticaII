#include<conio.h>
#include<stdio.h>   

struct nodo
{
       int edad;
       char apellido[20];
       struct nodo *sig;
       };
nodo *cargar(struct nodo *base,int edad)
{
     struct nodo *p;
     p=new(struct nodo);
     p->edad=edad;
     printf("ingrese apellido\n");
     scanf("%s",&(p->apellido));
     p->sig=base;
     base=p;
     return base;
     }
void mostrar(struct nodo *base)
{
     struct nodo *p;
     p=base;
     while(p!=NULL)
     {             if(p->edad<21)
                   {printf("%s\t",p->apellido);
                   printf("%d\t",p->edad);
                   }
                   p=p->sig;
     }
}

int main()
{
    int a,i,edad,c=0;
    struct nodo *base;
    base=NULL;
    printf("ingrese la edad\n");
     scanf("%d",&edad);
    while(edad!=999)
    {                if(c!=0)
                     {
                             printf("ingrese la edad\n");
                             scanf("%d",&edad);
                     }
                    if(edad!=999)
                    {
                                 base=cargar(base,edad);
                                 c++;
                    }
    } 
     getch(); 
    mostrar(base); 
getch();
return 0;
}
