//Implementar un arbol binario de busqueda con registros de alumnos (nombre, edad, sexo, ID),
//los nodos se organizan por campo ID, este es un numero de orden. Recorrerlo y mostrar por pantalla
//la siguiente informacion. 

#include <iostream>
# define tam 100
using namespace std;

struct arbol
{
    struct arbol*der;
    struct arbol*izq;
    int edad,faltas,id;
    char nombre,sexo;
    float prom;
    
};

void carga(struct arbol**,char,int, int, int, char, float);
void mostrar( struct arbol* );

int main ()
{
    struct arbol *planta;
    int i,num_elem,edad,faltas,id;
    char nombre,sexo;
    float prom;
    
    cout<<"Ingrese la cantidad de alumnos que desea ingresar: ";
    cin>>num_elem;

    planta=NULL;  //Primer pasada
    
    for(i=0;i<num_elem;i++)
    {
		cout<<"Ingrese el nombre del alumno: "<<i+1<<endl;
        cin>>nombre;
		cout<<"Ingrese la edad del alumno: "<<i+1<<endl;
        cin>>edad;
        cout<<"Ingrese la cantidad de inasistencias del alumno: "<<i+1<<endl;
        cin>>faltas;
        cout<<"Ingrese el ID del alumno: "<<i+1<<endl;
        cin>>id;
        cout<<"Ingrese el genero (m o f) del alumno: "<<i+1<<endl;
        cin>>sexo;
        cout<<"Ingrese el promedio del alumno: "<<i+1<<endl;
        cin>>prom;
        
		carga(&planta,nombre,edad,faltas,id,sexo,prom);
	}
	
    cout<<endl;
    mostrar(planta);


    return 0;
}



void carga(struct arbol** arb_recibido,char nombre_rec,int edad_rec,int faltas_rec,int id_rec,char sexo_rec, float prom_rec)
{
    if ( *arb_recibido==NULL)  //Solo la primera vez
    {
        *arb_recibido=new(struct arbol);
        (*arb_recibido)->der = NULL;
        (*arb_recibido)->izq = NULL;
        (*arb_recibido)->nombre = nombre_rec;
        (*arb_recibido)->edad = edad_rec;
        (*arb_recibido)->faltas = faltas_rec;
        (*arb_recibido)->id = id_rec;
        (*arb_recibido)->sexo = sexo_rec;
        (*arb_recibido)->prom= prom_rec;
    }
    else
    {
        if( (*arb_recibido)->edad <  edad_rec )
        {
            carga(  &(*arb_recibido)->izq, nombre_rec, edad_rec, faltas_rec, id_rec, sexo_rec, prom_rec );
        }
        else
        {
            carga( &(*arb_recibido)->der, nombre_rec, edad_rec, faltas_rec, id_rec, sexo_rec, prom_rec);
        }
    }
}


void mostrar ( struct arbol* arbol_rec )
{
    if (arbol_rec != NULL)
    {
        mostrar( arbol_rec->izq );
        mostrar( arbol_rec->der );
        
        if( arbol_rec->prom > 7 )
        {
			cout<<"Nombre"<<(arbol_rec->nombre)<<endl;
			cout<<"Edad"<<(arbol_rec->edad)<<endl;
			cout<<"Sexo"<<(arbol_rec->sexo)<<endl;
			cout<<"inasistencias"<<(arbol_rec->faltas)<<endl;
			cout<<"ID"<<(arbol_rec->id)<<endl;
			cout<<"Promedio"<<(arbol_rec->prom)<<endl;
		}
		else
		{
			if(arbol_rec->faltas < 5)
			{
				cout<<"Nombre: "<<(arbol_rec->nombre)<<endl;
				cout<<"Edad: "<<(arbol_rec->edad)<<endl;
				cout<<"Sexo: "<<(arbol_rec->sexo)<<endl;
				cout<<"inasistencias: "<<(arbol_rec->faltas)<<endl;
				cout<<"ID: "<<(arbol_rec->id)<<endl;
				cout<<"Promedio: "<<(arbol_rec->prom)<<endl;
			}
			
		}
    }
}
