#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Empleado{
               protected:
                         char nombre[20];
                         int edad;
               public:
                      Empleado();
                      void set_nombre(char *);
                      void set_edad(int);
                      void mostrar_empleado();
               };
               
void Empleado :: set_nombre (char * nom) {strcpy(nombre,nom);}
void Empleado :: set_edad (int i) {edad=i;};

Empleado::Empleado(){
                     cout<<"Nombre: ";
                     cin>>nombre;
                     cout<<"Edad: ";
                     cin>>edad;
                     }
void Empleado::mostrar_empleado(){
                         cout<<"\nEmpleado: "<<nombre;
                         cout<<"\nEdad:"<<edad;
                         }

class profesion{
                protected:
                          int tipo;
                          int categoria;
                          int beneficio;
                public:
                       profesion();
                       void set_categoria(int);
                       void set_tipo(int);
                       void mostrar_profesion();
                       void calcular_beneficio(){if(categoria<4) beneficio=500;
                                                 else beneficio=700;
                                                }
                       virtual int salario_mes_cumple(){return beneficio;}
                };

void profesion :: set_categoria(int c) {categoria=c;};
void profesion :: set_tipo(int t) {tipo=t;};
profesion::profesion(){
                       cout<<"Profesion: ";
                       cin>>tipo;
                       cout<<"Categoria: ";
                       cin>>categoria;
                       calcular_beneficio();
                       }

void profesion::mostrar_profesion(){
                         cout<<"\nTipo: "<<tipo;
                         cout<<"\nCategoria: "<<categoria;
                         }

class IngenieroEmpleadoAsalariado:public Empleado,public profesion
{
   int salario;
 public:
   IngenieroEmpleadoAsalariado():Empleado(),profesion()
           {cout<<" Ingrese el salario mensual: ";
            cin>>salario;
           }
    void set_salario(int s){salario=s;}
    virtual int salario_mes_cumple(){return salario+beneficio;}
    void mostrar(){
    Empleado::mostrar_empleado();
    profesion::mostrar_profesion();
    cout<<"\nSalario: "<<salario;
    cout<<"\nCumpleanos: "<<salario_mes_cumple();
                    }                                                                                         
 };

class TecnicoEmpleadoPorHora:public Empleado,public profesion
{
	int monto;
    int horas;
 public:
    TecnicoEmpleadoPorHora():Empleado(),profesion()
              {
                cout<<" Ingrese el monot por hora:";
                cin>>monto;
                cout<<" Ingrese las horas trabajadas: ";
                cin>>horas;
                                                                }
    virtual int salario_mes_cumple(){return monto*horas+beneficio;}
    void mostrar(){
         Empleado::mostrar_empleado();
         profesion::mostrar_profesion();
         cout<<"\nMonto:"<<monto;
         cout<<"\nHoras: "<<horas;
         cout<<"\nCumpleanos: "<<salario_mes_cumple();
				}  
            };

int main(){
           cout<<"Ingeniero:\n";
           class IngenieroEmpleadoAsalariado objeto_ing_asal;
           cout<<"Tecnico:\n";
           class TecnicoEmpleadoPorHora objeto_tec_phs;
           cout<<"\nINGENIERO:\n ";
           objeto_ing_asal.mostrar();
           cout<<"\nTECNICO:\n ";
           objeto_tec_phs.mostrar();
           return 0;
           }
