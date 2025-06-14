#include<stdio.h>
#include<conio.h>

struct cola
{
    int dato;
    struct cola *sig;
};
void cargar(struct cola**,struct cola **);
void mostrar(struct cola*,struct cola *);
void borrar(struct cola**,struct cola **);

int main()
{
    int dato;
    struct cola *primero,*ultimo;
    primero=NULL;
    ultimo=NULL;
    printf("ingrese las opciones\n: 1)cargar cola\t 2)mostrar cola\t 3)borrar\n");
    scanf("%d",&dato);
    while(dato!=4)
    {
        switch(dato)
        {
            case 1: cargar(&primero,&ultimo);
            break;
            case 2:mostrar(primero,ultimo);
            break;
            case 3: borrar(&primero,&ultimo);
            break;
        }
        printf("ingrese las opciones\n: 1)cargar cola\t 2)mostrar cola\t 3)borrar\n");
    scanf("%d",&dato);
    }
    getch();
    return 0;
}
 void cargar(struct cola **primero,struct cola **ultimo)
 {
     struct cola *p;
     int dato;
     p=malloc(sizeof(*p));
     if(p!=NULL)
     {
         printf("introduzca el entero\n");
         scanf("%d",&dato);
         p->dato=dato;
         p->sig=NULL;
         if(*primero==NULL)
         {
             *primero=p;
         }
         else
         {
             (*ultimo)->sig=p;
         }
         *ultimo=p;
     }
     else
     {
         printf("no hay memoria\n");
     }
 }
 void mostrar(struct cola *primero, struct cola *ultimo)
 {
     struct cola *p;
     p=malloc(sizeof(*p));
     if(primero==NULL)
     {
         printf("la cola esta vacia\n");
     }
     else
     {
         p=primero;
         while(p!=NULL)
         {
             printf("%d\t",p->dato);
             p=p->sig;
         }
     }

 }
void borrar(struct cola **primero, struct cola **ultimo)
{
    struct cola *p;
    p=malloc(sizeof(*p));
    p=NULL;
    if(primero==NULL)
    {
        printf("la cola esta vacia\n");
    }
    else
    {
        p=*primero;
        *primero=(*primero)->sig;
        free(p);
    }
}
