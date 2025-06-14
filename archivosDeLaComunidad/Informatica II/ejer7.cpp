#include <iostream>
#include <conio.h>

#define N 5

using namespace std;

class persona{
              char nombre[30];
              int edad;
              int sexo;
              unsigned long int dni;
              public:
                     void cargar();
                     int verificar(){return sexo;}
              };

void persona::cargar(){
                       cout<<"\n\n Ingrese el nombre: ";
                       cin>>nombre;
                       cout<<" Ingrese la edad: ";
                       cin>>edad;
                       do{
                          cout<<" Ingrese el sexo (1_Varon/2_Mujer): ";
                          cin>>sexo;
                          }while((sexo<1)||(sexo>2));
                       cout<<" Ingrese el DNI: ";
                       cin>>dni;
                       }

int main(){
           class persona vector[N];
           int i,mujeres=0,varones=0;
           for(i=0;i<N;i++)
                               vector[i].cargar();
           for(i=0;i<N;i++){
                           if(vector[i].verificar()==1)
                                                     varones++;
                           else
                               mujeres++;
                           }
           cout<<"\n\n Varones: "<<varones<<"\tMujeres: "<<mujeres;
           getch();       
           return 0;
           }
