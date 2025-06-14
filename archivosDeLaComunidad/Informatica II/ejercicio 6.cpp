#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo{
            int dato;
            struct nodo *sig;
            };
class cola{
           struct nodo *estructura,*primero,*ultimo;
           public:
                  cola(){estructura=primero=ultimo=NULL;}  //constructor: todos los punteros a NULL.
                  void inserta_nodo();
                  void eliminar();
                  void print();
           };

void cola::inserta_nodo(){
                      estructura=new(struct nodo);
                      cout<<"Dato a ingresar: ";
                      cin>>estructura->dato;
                      estructura->sig=NULL;
                      if(primero==NULL)
                                       primero=estructura;
                      else
                          ultimo->sig=estructura;
                      ultimo=estructura;
                      }

void cola::eliminar(){
                    if(primero==NULL)
                                     cout<<"Elemento 0: nada que borrar.";                                     
                    else{
                         estructura=primero;
                         primero=primero->sig;
                         delete estructura;
                         cout<<"Correctamente eliminado!";
                         }
                    }

void cola::print(){
                      estructura=primero;
                      cout<<"Datos:\n";
                      while(estructura!=NULL){
                                     cout<<"\n"<<estructura->dato;
                                     estructura=estructura->sig;
                                     }
                      }

int menu(){
           system("clear");
           cout<<"Menu:\n"
                 "1 ->Insertar dato.\n"
                 "2 ->Borrar dato.\n"
                 "3 ->Mostrar todo.\n"
                 "4 ->exit.\n"
                 "opcion:";
           int opcion;
           cin>>opcion;
           return opcion;
           }
           

int main(){
           class cola objeto_cola;
           int opcion=menu();
           while(opcion!=4){
                            switch(opcion){
                                           case 1:
                                                  objeto_cola.inserta_nodo();
                                                  break;
                                           case 2:
                                                  objeto_cola.eliminar();
                                               
                                                  break;
                                           case 3:
                                                  objeto_cola.print();                                                                                        
                                                  break;
                                           default:
                                                   cout<<"\n\n La opcion ingresada no pertenece al menu.";
                                                   
                                           }
                            opcion=menu();
                            }
           return 0;
           }
