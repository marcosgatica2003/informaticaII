#include<stdio.h>
#include<conio.h>

struct pila
{
    char apellido[20];
    int edad;
    struct pila *sig;
};
void cargar(struct pila **);
void recorrer(struct pila*);

int main()
{
    int opcion;
    struct pila *primero;
    primero=NULL;
    printf("ingrese la opcion\n 1)cargar datos\t 2)mostrar\n");
    scanf("%d",&opcion);
    while(opcion!=3)
    {
        switch (opcion)
        {
            case 1:cargar(&primero);
            break;
            case 2: recorrer(primero);
            break;
        }
    printf("ingrese la opcion\n 1)cargar datos\t 2)mostrar\n");
    scanf("%d",&opcion);
   }
   getch();
   return 0;

}

void cargar(struct pila **primero)
{
    struct pila *p;
    int dato;
    char c;
    p=malloc(sizeof(*p));
    printf("ingrese apellido\n");
    scanf("%s",p->apellido);
    printf("cargue la edad\n");
    scanf("%d",&dato);
    p->edad=dato;
    p->sig=*primero;
    *primero=p;
}

void recorrer(struct pila *primero)
{
    struct pila *p;
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
        if(p->edad<21)
        {
        printf("%s\t",p->apellido);
        printf("%d\n",p->edad);
        }
        p=p->sig;
        }
    }
}
