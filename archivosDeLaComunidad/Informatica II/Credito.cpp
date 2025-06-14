#include <iostream>
#include <conio.h>

#define TAM 3

using namespace std;

class persona{
              char nombre[20];
              char apellido[20];
              public:
                     persona();
                     char *mostrar_nom(){return nombre;}
                     char *mostrar_ap(){return apellido;}
              };

persona::persona(){
                   cout<<" Ingrese el nombre: ";
                   cin>>nombre;
                   cout<<" Ingrese el apellido: ";
                   cin>>apellido;
                   }

class aleatorio{
                int n;
                int inferior,superior;
                public:
                       aleatorio();
                       int mostrar_n(){return n;}
                };

aleatorio::aleatorio(){
                       cout<<" Ingrese los limites del intervalo: ";
                       cin>>inferior>>superior;
                       srand(time(NULL));
                       n=inferior+rand()%(superior-inferior);
                       }

class CarpetaCredito:public persona,public aleatorio{
                                                     int monto;
                                                     public:
                                                            CarpetaCredito();
                                                            int mostrar_monto(){return monto;}
                                                     };

CarpetaCredito::CarpetaCredito():persona(),aleatorio(){
                                                        cout<<" Ingrese el monto: ";
                                                        cin>>monto;
                                                        }

int main(){
           class CarpetaCredito A[TAM];
           system("cls");
           for(int i=0;i<TAM;i++){
                                  cout<<"Nombre:"<<A[i].persona::mostrar_nom();
                                  cout<<"\nApellido:"<<A[i].persona::mostrar_ap();
                                  cout<<"\nNro. de sorteo:"<<A[i].aleatorio::mostrar_n();
                                  cout<<"\nMonto:"<<A[i].mostrar_monto();
                                  cout<<"\n\n";
                                  }
           getch();
           return 0;
           }

                     
