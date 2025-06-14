#include <iostream>
#include <conio.h>

using namespace std;

struct nodo{
            int dato;
            struct nodo *sig;
            };

class pila{
           struct nodo *p,*base;
           public:
                  pila(){base=NULL;}
                  void insertar();
                  void borrar();
                  void prt();
           };

void pila::insertar(){
                      p=new(struct nodo);
                      cout<<"\n Ingrese el dato:";
                      cin>>p->dato;
                      p->sig=base;
                      base=p;
                      }

void pila::borrar(){
                    if(base==NULL)
                                  cout<<"\n No hay datos que borrar.";
                    else{
                         p=base;
                         base=p->sig;
                         cout<<"\n Eliminando...";
                         delete(p);
                         }
                    }

void pila::prt(){
                 p=base;
                 cout<<" PILA: ";
                 while(p!=NULL){
                                cout<<p->dato<<"\t";
                                p=p->sig;
                                }
                 }

int menu(){
           int op;
           cout<<"\n\n OPCIONES:\n"
                 "1_ Insertar un nodo.\n"
                 "2_ Eliminar un nodo.\n"
                 "3_ Imprimir la pila.\n"
                 "4_ SALIR.\n"
                 "opcion:";
           cin>>op;
           return op;                 
           }

int main(){
           class pila P;
           int op=1;
           while(op!=4){
                        op=menu();
                        switch(op){
                                  case 1:
                                         P.insertar();
                                         break;
                                  case 2:
                                         P.borrar();
                                         break;
                                  case 3:
                                         P.prt();
                                         break;
                                  case 4:
                                       cout<<"\n\n SALIENDO...";
                                       break;
                                  default:
                                          cout<<"\n La opcion no pertenece al menu.";
                                  }
                        }
           getch();
           return 0;
           }
