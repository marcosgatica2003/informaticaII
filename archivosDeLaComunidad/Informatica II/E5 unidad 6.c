#include<stdio.h>
#include<conio.h>

struct pila
{
    int dato;
    struct pila *sig;
};
void cargar(struct pila**);
void borrar(struct pila**);


main()
{
    int opcion,c=0,i;
    struct pila *primero;
    struct pila *p;
    p=malloc(sizeof(*p));
    primero=NULL;
    printf("ingrese la opcion que desea realizar\n 1)cargar datos enteros\t 2)mostrar los contenidos de la mitad inferior\t 3)borrar\n");
    scanf("%d",&opcion);
    while(opcion!=4)
    {
        switch(opcion)
        {
            case 1: cargar(&primero);
            c++;
            break;
            case 3: borrar(&primero);
            break;
            case 2:
            if(primero==NULL)
            {
                printf("la pila esta vacia\n");

                }
            else
            {
                p=primero;
                if(c%2)
                {c=c/2;
                    for(i=0;i<(c);i++)
                {
                printf("%d\t",p->dato);
                p=p->sig;
             }
         }
        else
        { c=c+1;
           c=c/2;
            for(i=0;i<c;i++)
         {
             printf("%d\t",p->dato);
             p=p->sig;
             }
         }
     }

            break;
        }
        printf("ingrese la opcion que desea realizar\n 1)cargar datos enteros\t 2)mostrar los contenidos de la mitad inferior\t 3)borrar\n");
    scanf("%d",&opcion);
    }
    getch();
    return 0;
}
 void cargar(struct pila**primero)
 {
     struct pila *p;
     p=malloc(sizeof(*p));
     int dato;
     if(p!=NULL)
     {
     printf("cargar numero entero\n");
     scanf("%d",&dato);
     p->dato=dato;
     p->sig=*primero;
     *primero=p;
     }
     else
     {
         printf("no hay memoria\n");
     }
 }
void borrar(struct pila **primero)
{
    struct pila *p;
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
