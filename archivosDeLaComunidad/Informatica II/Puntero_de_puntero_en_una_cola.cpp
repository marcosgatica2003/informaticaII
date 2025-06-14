//Programa de puntero de punero//

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <dos.h>

void insertar_cola (struct nodo **, struct nodo **, int);

struct nodo{
    int dato;
    struct nodo *sig;};
    

main()
{struct nodo *primero, *ultimo, *p;
primero = ultimo = NULL;
char op, info;

printf("Para ingresar precione 's'");
scanf("%s", &op);

while(op=='S'){
    scanf("%d", &info);
    insertar_cola(&primero, &ultimo, info);
    printf("");
    scanf("%d", &op);
    }
p = primero;

while(p != NULL){
    printf("%d",p->dato);
    p = p->sig;
    }
system("PAUSE");
return 0;
}
    
void insertar_cola (struct nodo **primero, struct nodo **ultimo, int info)//Metodo//
{struct nodo *p;
p = new(struct nodo);

if(!p){
        //No hay memoria//
        printf("No memoria");
        exit(0);}
    else{
        p->dato = info;
        p->sig = NULL;
        if(*primero == NULL)
            //Cola esta vacia//
            *primero = p;
            else
                (*ultimo)->sig = p;
        
        ultimo = p;
        
        }//Cierro else//
    }//Cierro metodo//
















