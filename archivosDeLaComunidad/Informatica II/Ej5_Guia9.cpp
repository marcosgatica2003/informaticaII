#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
            int dato;
            struct nodo *sig;
            };

class pila{
           struct nodo *estructura,*base;
           public:
                  pila(){base=NULL;}
                  void insertar();
                  void borrar();
                  void prt();
           };

void pila::insertar(){
                      estructura=new(struct nodo);
                      cout<<"Ingrese el dato:";
                      cin>>estructura->dato;
                      estructura->sig=base;
                      base=estructura;
                      }

void pila::borrar(){
                    if(base==NULL)
                                  cout<<"\n No hay datos que borrar.";
                    else{
                         estructura=base;
                         base=estructura->sig;
                         cout<<"\n Eliminando...";
                         delete(estructura);
                         }
                    }

void pila::prt(){
                 estructura=base;
                 cout<<" Los datos son: ";
                 while(estructura!=NULL){
                                cout<<estructura->dato<<"  ";
                                estructura=estructura->sig;
                                }
                 }

int menu(){
           int op;
           cout<<"MENU:\n"
                 "1 -> Ingresar Dato..\n"
                 "2 ->Eliminar dato..\n"
                 "3 ->Mostrar todo..\n"
                 "4 ->SALIR.\n";
           cin>>op;
           return op;                 
           }

int main(){
           class pila objeto_pila;
           int op=1;
           while(op!=4){
                        op=menu();
                        switch(op){
                                  case 1:
                                         objeto_pila.insertar();
                                         system("clear");
                                         break;
                                  case 2:
                                         objeto_pila.borrar();
                                          system("clear");
                                         break;
                                  case 3:
                                         objeto_pila.prt();
                                          system("clear");
                                         break;
                                  case 4:
                                       cout<<"\n\n SALIENDO...";
                                       break;
                                  default:
                                          cout<<"\n La opcion no pertenece al menu.";
                                  }
                        }
           return 0;
           }
