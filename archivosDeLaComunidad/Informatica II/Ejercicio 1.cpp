//Implementar un arbol de busqueda binaria con 10 nodos, estos contienen numeros esnteros sin repeticion.
//Se ingresan por teclado de forma desordenada

#include <iostream>
#include<stdlib.h>
using namespace std;

struct arbol
{
    int dato;
    struct arbol *izq;
    struct arbol *der;
};

void carga(struct arbol**, int);
void preorden(struct arbol*);

int main()
{
    int i, vec[10];
    struct arbol* bonsai;
    bonsai= NULL;

    cout<< "Ingrese 10 numeros:\n";
    for(i=0;i<10;i++)
    {
        cout<< "dato "<<i+1<<": ";
        cin>> vec[i];
        carga(&bonsai, vec[i]);
    }

    cout<<"\n\nDatos ingresados: ";
    for(i=0;i<10;i++) cout<<vec[i]<<"-";

    cout<<"\n\nDatos en preorden segun arbol: ";
    preorden(bonsai);
    cout<< "\n\n\n";

    return 0;
}


void carga(struct arbol **bonsai_rec, int num)
{
    if (*bonsai_rec == NULL)
    {
        *bonsai_rec= new(struct arbol);

        (*bonsai_rec)->dato = num;
        (*bonsai_rec)->izq = NULL;
        (*bonsai_rec)->der = NULL;
    }

    else
    {
        if(num < (*bonsai_rec)->dato)
            carga ( &( (*bonsai_rec)->izq), num);

        else
            carga (&( (*bonsai_rec)->der), num);
    }
}


void preorden(struct arbol* bonsai_rec)
{
    if( bonsai_rec != NULL )
    {
        cout<< bonsai_rec->dato <<"-";
        preorden(bonsai_rec->izq);
        preorden(bonsai_rec->der);
    }
}
