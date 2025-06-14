//Se tiene una estructura dinamica tipo pila ya almacenada en memoria de sistema, con los datos
//almacenados en esta estructura generar un arbol de busqueda binaria

#include <iostream>

using namespace std;

struct arbol
{
    struct arbol*der;
    struct arbol*izq;
    int dato;
};

struct pila
{
    int dato;
    struct pila *psig;
};

void carga(struct arbol**, int);
void mostrar( struct arbol* );

int main ()
{
	struct pila *duracel,*ultimo;
    struct arbol *planta;
    int valor[4],i,vec_pila[4]={1,2,3,4};
    
    duracel = new (struct pila);
    duracel->dato = vec_pila[0];
    duracel->psig = NULL;
    ultimo=duracel;
   
    for(i=0;i<3;i++)
    {
		ultimo = new(struct pila);
		ultimo->dato = vec_pila[i+1];
		ultimo->psig = duracel;
		duracel=ultimo;
	}
    
    for(i=0;i<4;i++)
    {
		valor[i] = ultimo->dato;
		carga(&planta,valor[i]);
		ultimo = ultimo->psig;
	}
	
    cout<<endl;
    mostrar(planta);


    return 0;
}



void carga(struct arbol** arb_recibido, int numero)
{
    if ( *arb_recibido==NULL)  //Solo la primera vez
    {
        *arb_recibido=new(struct arbol);
        (*arb_recibido)->der = NULL;
        (*arb_recibido)->izq = NULL;
        (*arb_recibido)->dato= numero;
    }
    else
    {
        if( (*arb_recibido)->dato <  numero )
        {
            carga(  &(*arb_recibido)->izq, numero );
        }
        else
        {
            carga( &(*arb_recibido)->der, numero);
        }
    }
}


void mostrar ( struct arbol* arbol_rec )
{
    if (arbol_rec != NULL)
    {
        mostrar( arbol_rec->izq );
        mostrar( arbol_rec->der );
        cout<<(arbol_rec->dato)<<endl;
    }
}

