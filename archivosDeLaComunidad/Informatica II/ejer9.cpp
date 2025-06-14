#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct nodo{
            int dato;
            struct nodo *iz;
            struct nodo *der;
            };


void agregar_nodo(int dato,struct nodo **raiz){
                                               struct nodo *p,*aux,*actual;
                                               int direccion;
                                               p=new(struct nodo);
                                               p->dato=dato;
                                               p->iz=p->der=NULL;
                                               if(*raiz==NULL)
                                                              *raiz=p;
                                               else{
                                                    aux=*raiz;
                                                    while(aux!=NULL){
                                                                     actual=aux;
                                                                     if((actual->dato)>(p->dato)){
                                                                                                  direccion=0;
                                                                                                  aux=actual->iz;
                                                                                                  }
                                                                     else{
                                                                          direccion=1;
                                                                          aux=actual->der;
                                                                          }
                                                                     }
                                                    if(direccion==0)
                                                                    actual->iz=p;
                                                    else
                                                        actual->der=p;
                                                    }
                                               }
                                               
void arbol_aleatorio(struct nodo **raiz){
                                         int dato;
                                         int tam=5+rand()%15;
                                         for(int i=0;i<tam;i++){
                                                               dato=rand()%100;
                                                               agregar_nodo(dato,raiz);
                                                               }
                                         }

void imprimir(struct nodo *p){
                              if(p->iz!=NULL)
                                             imprimir(p->iz);
                              cout<<" "<<p->dato;
                              if(p->der!=NULL)
                                              imprimir(p->der);
                              }

void combinar(struct nodo *origen,struct nodo **destino,int minimo)
                     {if(origen->iz!=NULL)
                                     combinar(origen->iz,destino,minimo);
                     if(origen->dato>minimo)
                                            agregar_nodo(origen->dato,destino);
                      if(origen->der!=NULL)
                                          combinar(origen->der,destino,minimo);
                      }

int main(){
           struct nodo *raiz1,*raiz2,*raiz3;
           raiz1=raiz2=raiz3=NULL;
           int minimo;
           srand(time(NULL));
           arbol_aleatorio(&raiz1);
           arbol_aleatorio(&raiz2);
           cout<<"Arbol 1:\n";
           imprimir(raiz1);
           cout<<"\nArbol 2:\n";
           imprimir(raiz2);
           cout<<"\n\n Ingrese el valor minimo del arbol combinado: ";
           cin>>minimo;
           combinar(raiz1,&raiz3,minimo);
           combinar(raiz2,&raiz3,minimo);
           cout<<"\nArbol 3:\n";
           imprimir(raiz3);
           getch();
           return 0;
           }
