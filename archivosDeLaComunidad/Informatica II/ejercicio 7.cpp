#include <iostream>

#define max_line 31

using namespace std;

class persona{
              char nombre[max_line];
              int edad;
              int sexo;
              long int dni;
              public:
                     void cargar();
                     int define_sexo();
              };

void persona::cargar(){
                       cout<<"\n\n Ingrese el nombre: ";
                       cin>>nombre;
                       cout<<" Ingrese la edad: ";
                       cin>>edad;
                       cout<<" Ingrese el sexo: ";
                       cin>>sexo;
                       cout<<" Ingrese el DNI: ";
                       cin>>dni;
                       }
int persona :: define_sexo() {return sexo;};
int main(){
           class persona personas[5];
           int i,M=0,V=0;
           for(i=0;i<5;i++)
                               personas[i].cargar();
           for(i=0;i<5;i++){
                           if(personas[i].define_sexo()==1)
                               V++;else M++;
                           }
           cout<<"cantidad de Hombres: "<<V<<"cantidad de Mujeres: "<<M;     
           return 0;
           }
