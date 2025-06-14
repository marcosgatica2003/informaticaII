//Cargar un arreglo con N elemntos enteros tomados desde el teclado, con repeticion. Posteriormente
//almacenarlos en un arbol binario de busqueda y finalmente recorrerlo para mostrar por pantalla el contenido.

#include <iostream>
# define tam 100
using namespace std;

struct arbol
{
    struct arbol*der;
    struct arbol*izq;
    int dato;
};

void carga(struct arbol**, int);
void mostrar( struct arbol* );

int main ()
{
    struct arbol *planta;
    int valor[tam],i,num_elem;
    
    cout<<"Ingrese la cantidad de elementos que desea ingresar: ";
    cin>>num_elem;

    planta=NULL;  //Primer pasada
    for(i=0;i<num_elem;i++)
    {
        cout<<"Ingrese el dato "<<i+1<<endl;
        cin>>valor[i];
    }
    
    for(i=0;i<num_elem;i++)
    {
		carga(&planta,valor[i]);
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

