#include <stdio.h>                          // Incluimos las librerias
#include <conio.h>
#include <windows.h>

#define N 10                                // Definimos la cantidad de elementos del arbol

struct nodo{                                // Declaramos el nodo del arbol
            int dato;                       // _entero que almacenara el dato
            struct nodo *iz;                // _puntero que apuntara a un nodo izquierdo con un dato menor que el de este.
            struct nodo *der;               // _puntero que apuntara a un nodo derecho con un dato mayor que el de este.
            };
// -----------     DECLARACION DE FUNCIONES        ------------------
// Las funciones puestas a continuacion permitiran recorrer e imprimir el arbol de 3 formas distintas. Observe que en los 3 casos,
// se trata de funciones recursivas, que avanzan por cada rama hasta llegar a una hoja (p=NULL).
void pre_orden(struct nodo *p){                                      // Esta recorre el arbol de manera PRE_ORDEN:
                                if(p!=NULL){                         // Si el nodo pasado como parametro es distinto de NULL, es decir que no se llego al final de la rama,
                                             printf(" %d ",p->dato); // se imprime el dato actual,
                                             pre_orden(p->iz);       // se avanza por la rama izquierda,
                                             pre_orden(p->der);      // y por ultimo por la derecha.
                                             }
                                }
void in_orden(struct nodo *p){                                       // Esta recorre el arbol de manera IN_ORDEN:
                                if(p!=NULL){                         // Si el nodo pasado como parametro es distinto de NULL, es decir que no se llego al final de la rama,
                                             in_orden(p->iz);        // se avanza por la rama izquierda,
                                             printf(" %d ",p->dato); // se imprime el dato actual,
                                             in_orden(p->der);       // y por ultimo por la derecha.
                                             }
                                }
void pos_orden(struct nodo *p){                                      // Esta recorre el arbol de manera IN_ORDEN:
                                if(p!=NULL){                         // Si el nodo pasado como parametro es distinto de NULL, es decir que no se llego al final de la rama,
                                             pos_orden(p->iz);       // se avanza por la rama izquierda,
                                             pos_orden(p->der);      // se avanza por la rama derecha,
                                             printf(" %d ",p->dato); // y por ultimo se imprime el dato actual.
                                             }
                                }
//-------------------------------------------------------------------
//                    FUNCION MAIN                                   
int main(){
           struct nodo *raiz,*p,*aux,*actual;                   // Se declaran los nodos utilizados:
                                                                // _*raiz: apuntara al primer nodo creado.
                                                                // _*p: apuntara al ultimo nodo creado.
                                                                // _*actual: permitira recorrer el arbol para posicionar el nuevo nodo, de acuerdo a su dato.
                                                                // _*aux: permitira verificar si se llego a una hoja durante el recorrido.      
           int ban;                                  // banera auxiliar que indicara en que direccion se avanzo a partir del ultimo nodo comparado:
                                                     // Si ban=0, el nuevo nodo "p" debe posicionarse a la izquierda del nodo "actual".
                                                     // Si ban=1, el nuevo nodo "p" debe posicionarse a la derecha del nodo "actual".           
           raiz=p=aux=actual=NULL;                   // Se inicializan todos los punteros en NULL.
           for(int i=0;i<N;i++){                     // A continuacion se ingresaran los N datos al arbol.
                                if((p=new(struct nodo))==NULL){                                  //Se verifica si el nodo "p" se creo correctamente:
                                                               printf(" No hay memoria...");     // si no es así, se indica que no hay memoria,
                                                               exit(1);                          // y se cierra el programa.
                                                               }
                                else{                                                            // Si el nodo "p" se creo correctamente
                                     printf(" Ingrese el dato %d: ",i+1);                        // Se pide que se ingrese el dato.
                                     scanf("%d",&p->dato);                                       // Se almacena el dato en el nuevo nodo.
                                     p->der=p->iz=NULL;                                          // Se indica que no hay nodos por debajo de este, haciendo NULL el puntero iz y der.
                                     if(raiz==NULL)                                              // Si este es el primer nodo creado en el bucle for
                                                   raiz=p;                                       // Se asigna directamente p a la raiz.
                                     else{                                                       // En caso contrario, se debe recorrer el arbol hasta encontrar una hoja disponible.
                                          aux=raiz;                                              // Asignamos a aux la direccion de la raiz.
                                          while(aux!=NULL){                                      // Mientras aux sea distinto de NULL, quiere decir que no se llego a una hoja.
                                                           actual=aux;                           // Actualizamos el puntero actual con el nodo apuntado por el auxiliar.
                                                           if((p->dato)<(actual->dato)){         // Si el dato ingresado en p es menor que el actual, 
                                                                                    ban=0;          // Se indica la direccion de avance hacia la izquierda,
                                                                                    aux=actual->iz; // Y se actualiza el puntero auxliar para luego verificar si la posicion izquierda esta vacia o no. 
                                                                                    }
                                                           else{                                 // En caso contrario se avanza por la rama derecha del nodo actual.       
                                                                ban=1;                              // Se indica la direccion de avance hacia la derecha,
                                                                aux=actual->der;                    // Y se actualiza el puntero auxliar para luego verificar si la posicion derecha esta vacia o no. 
                                                                }
                                                           }                    // Este bucle continuara hasta encontrar una posicion disponible.                    
                                                                                                    
                                          if(ban==0)                            // Finalmente, de acuerdo a la ultima direccion con que se avanzo
                                                    actual->iz=p;               // se posiciona el nodo p creado recientemente a la izquierda del actual
                                          else
                                              actual->der=p;                    // o a la derecha del actual.
                                          }
                                     }
                                }               
                                                // A continuacion se invoca a los 3 metodos para imprimir el arbol. Observe que todos reciben como parametro el nodo
                                                // raiz, para luego avanzar por las ramas de manera recursiva.                                
           printf("\n\n PRE_ORDEN:\n");
           pre_orden(raiz);
           printf("\n\n IN_ORDEN:\n");
           in_orden(raiz);
           printf("\n\n POS_ORDEN:\n");
           pos_orden(raiz);
           getch();                             // Pausa                                
           return 0;                            // Retorno del MAIN
           }
