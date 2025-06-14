#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct cola
{
    int dato;
    struct cola *sig;
};
void cargar(struct cola**,struct cola **);
void borrar(struct cola**,struct cola **);
void mostrar(struct cola*,struct cola *);

int main ()
{
    struct cola *primero,*ultimo;
    primero=NULL;
    ultimo=NULL;
    int a;
    printf("ingrese la opcion\n 1)cargar\t 2)mostrar\t 3)borrar\n");
    scanf("%d",&a);
    while(a<4)
    {
        switch(a)
        {
            case 1: cargar(&primero,&ultimo);
            break;
            case 2: mostrar(primero,ultimo);
            break;
            case 3: borrar(&primero,&ultimo);
            break;
        }
        printf("ingrese la opcion\n 1)cargar\t 2)mostrar\t 3)borrar\n");
    scanf("%d",&a);
    }
    getch();
    return 0;
}

void cargar(struct cola **primero,struct cola **ultimo)
{
    struct cola *p;
    p=malloc(sizeof(*p));
    int dato;
    if(p!=NULL)
    {
        printf("ingrese los datos\n");
        scanf("%d",&dato);
        p->dato=dato;
        p->sig=NULL;
        if(*primero==NULL)
        {
            *primero=p;
        }
        else
        {
            (*ultimo)->sig = p;
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
        printf("la pila esta vacia\n");
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
void borrar(struct cola **primero,struct cola **ultimo)
{
    struct cola *p;
    p=malloc(sizeof(*p));
    p=NULL;
    if(*primero==NULL)
    {
        printf("la pila esta vacia\n");
    }
    else
    {
        p=*primero;
        *primero=(*primero)->sig;
        free(p);
    }

}
