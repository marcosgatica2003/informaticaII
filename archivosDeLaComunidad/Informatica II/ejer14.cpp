#include <iostream>
#include <conio.h>

#define TAM 5

using namespace std;

class persona{
              protected:
              char nombre[20];
              char apellido[20];
              char sexo;
              int edad;
              char estado;
              public:
                     persona();
                     char* mostrar_nom(){return nombre;}
                     char* mostrar_ap(){return apellido;}
                     char mostrar_sexo(){return sexo;}
                     int mostrar_edad(){return edad;}
                     char mostrar_estado(){return estado;}
              };

persona::persona(){
                   cout<<" Ingrese el nombre: ";
                   cin>>nombre;
                   cout<<" Ingrese el apellido: ";
                   cin>>apellido;
                   do{
                      cout<<" Ingrese el sexo (h/m): ";
                      cin>>sexo;
                      }while((sexo!='h')&&(sexo!='m'));
                   cout<<" Ingrese la edad: ";
                   cin>>edad;
                   do{
                      cout<<" Ingrese el estado (c/s): ";
                      cin>>estado;
                      }while((estado!='c')&&(estado!='s'));
                   }

class empleado:public persona{
                             int categoria;
                             int antiguedad;
                             int remuneracion;
                             public:
                                    empleado();
                                    friend void listar_antiguedad(class emplado *A);
                                    friend void listar_remuneracion(class empleado *A);
                                    friend void personal_femenino(class empleado *A);
                                    friend void imprimir(class empleado *A,int cant);
                             };

empleado::empleado():persona(){
                             cout<<" Ingrese la categoria: ";
                             cin>>categoria;
                             cout<<" Ingrese la antiguedad: ";
                             cin>>antiguedad;
                             cout<<" Ingrese la remuneracion: ";
                             cin>>remuneracion;
                             }

void imprimir(class empleado *A,int cant){
                                          cout<<"\n\n NOMBRE    APELLIDO   EDAD  SEXO  E.CIVIL  CATEGORIA  ANTIGUEDAD REMUNERACION\n";
                                          for(int i=0;i<cant;i++)
                                                                 cout<<(A+i)->nombre<<" "<<(A+i)->apellido<<" "<<(A+i)->edad<<" "<<(A+i)->sexo<<" "<<(A+i)->estado<<" "<<(A+i)->categoria<<" "
                                                                 <<(A+i)->antiguedad<<" "<<(A+i)->remuneracion<<"\n";
                                          }

void listar_antiguedad(class empleado *A){
                                       int i,j;
                                       class empleado *aux;
                                       system("cls");
                                       cout<<" Empleados ordenados por antiguedad";
                                      for(i=0;i<TAM;i++)
                                                        for(j=0;j<TAM-1-i;j++)
                                                                              if(A[j].antiguedad<A[j+1].antiguedad){
                                                                                                                        aux=&A[j];
                                                                                                                        &A[j]=&A[j+1];
                                                                                                                        &A[j+1]=aux;
                                                                                                                        }
                                      imprimir(A,TAM);
                                      }

void listar_remuneracion(class empleado *A){      int i,j;
                                                  class empleado *aux;
                                                  system("cls");
                                                  cout<<" Empleados ordenados por remuneracion";
                                                  for(i=0;i<TAM;i++)
                                                                    for(j=0;j<TAM-1-i;j++)
                                                                                        if((A+j)->remuneracion<(A+j+1)->remuneracion){
                                                                                                                                     aux=(A+j);
                                                                                                                                     (A+j)=(A+j+1);
                                                                                                                                     (A+j+1)=aux;
                                                                                                                                     }
                                                  imprimir(A,TAM);
                                                  } 

void personal_femenino(class empleado *A){
                                              system("cls");
                                              cout<<" Personal femenino de categoria superior o igual a la media:";
                                              int media,i,cant=0;
                                              class empleado *B;
                                              for(i=0;i<TAM;i++)
                                                               media+=(A+i)->categoria;
                                              media=media/TAM;
                                              for(i=0;i<TAM;i++)
                                                               if(((A+i)->categoria>=media)&&((A+i)->sexo=='f')){
                                                                                                                 B[cant]=A[i];
                                                                                                                 cant=cant+1;
                                                                                                                  }
                                              imprimir(B,cant);
                                              }

int menu(){
           int opcion;
           cout<<" Que desea hacer: \n"
                 " 1_ Listar empleados por antiguedad.\n"
                 " 2_ Listar empleados por remuneracion.\n"
                 " 3_ Listar personal femenino de categoria superior o igual a la media.\n"
                 " 4_ SALIR\n"
                 " Opcion:";
           cin>>opcion;
           return opcion;
           }

int main(){
           class empleado A[TAM];
           int opcion=menu();
           while(opcion!=4){
                            switch(opcion){
                                           case 1:
                                                  listar_antiguedad(A);
                                                  break;
                                           case 2:
                                                  listar_remuneracion(A);
                                                  break;
                                           case 3:
                                                  personal_femenino(A);
                                                  break;
                                           default:
                                                   cout<<"\n La opcion no pertenece al menu.";
                                           }
                            opcion=menu();
                            }
           cout<<"\n\n SALIENDO...";
           getch();
           return 0;
           }
                                                
