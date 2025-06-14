#include <stdio.h>                              // Se incluyen las librerias utilizadas
#include <conio.h>
#include <windows.h>

#define N 10                                    // Se define la cantidad de elementos a ingresar

struct nodo{                                    // Se declara el nodo de la lista doble
            int dato;                           // Entero que contendra el dato ingresado
            struct nodo *ant;                   // puntero que apunta al nodo anterior de la lista
            struct nodo *sig;                   // puntero que apunta al nodo siguiente de la lista
            };

int main(){                                     
           struct nodo *primero,*ultimo,*p;     // Se declaran algunos nodos auxiliares:
                                                // _*primero: apuntará al primero nodo de la lista doble.
                                                // _*ultimo: apuntará al ultimo nodo de la lista doble.
                                                // _*p: apuntará al nuevo nodo creado.
           primero=ultimo=p=NULL;               // Se inicializan todos los punteros en NULL.
           for(int i=0;i<N;i++){                                  // A continuacion se ingresan los N datos.
                                p=new(struct nodo);                          // Se apunta p a un nuevo nodo.       
                                printf(" Ingrese el dato %d: ",i+1);         // Se pide que se ingrese el dato.
                                scanf("%d",&p->dato);                        // Se almacena el dato ingresado en el nodo creado.
                                                                             // Se direccionan los punteros del nodo creado:
                                p->sig=NULL;                                 // _ se indica que el siguiente es NULL (ya que este es el ultimo que se creó)      
                                p->ant=ultimo;                               // _ se indica el anterior, apuntando al ultimo nodo que habia sido credo anteriormente 
                                                                             //   (observe que si no hay nodos creados antes ultimo=NULL).
                                if(primero==NULL)                            // Si primero=NULL, quiere decir que este es el primer nodo que creó el bucle for, 
                                                                             // es decir que no hay nodos anteriores 
                                                primero=p;                   // Solo en este caso se altera la direccion de "primero"
                                else                                         // Si hay nodos de antes,
                                    ultimo->sig=p;                           // Se vincula el puntero "sig" del ultimo nodo que se habia creado, con el actual.
                                ultimo=p;                                    // Por ultimo, se actualiza la direccion del ultimo nodo.
                                                                             // y se repite todo nuevamente.
                                }
           p=primero;                                            // Para recorrer de izquierda a derecha, asignamos al puntero p la direccion del primero.   
           printf("\n\n De izquierda a derecha:\n");
           while(p!=NULL){                                       // mientras p apunte a un nodo que no este vacio,            
                          printf(" %d ",p->dato);                // se imprimira el dato de dicho nodo,
                          p=p->sig;                              // y se apuntara al siguiente.
                          }
           p=ultimo;                                             // Para recorrer de derecha a izquierda, asignamos al puntero p la direccion del ultimo.
           printf("\n\n De derecha a izquierda:\n");             
           while(p!=NULL){                                       // mientras p apunte a un nodo que no este vacio.
                          printf(" %d ",p->dato);                // se imprimira el dato de dicho nodo,
                          p=p->ant;                              // y se apuntara al anterior.
                          }
           getch();                                              // pausa
           return 0;                                             // retorno del MAIN
           }
