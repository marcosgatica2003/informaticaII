#include <iostream>
#include <stdlib.h>

using namespace std;

class alazar{
                unsigned int numero_aleatorio;
                public:
                       alazar();
                       int imprimir();
                };

alazar::alazar(){
                       int cota_sup,cota_inf, media;
                       srand(time(NULL));
                       do{
                          cout<<"Ingrese la cota superior: ";
                          cin>>cota_sup;
                          cout<<"Ingrese la cota inferior: ";
                          cin>>cota_inf;
                          }while(cota_inf>cota_sup);
                          media = cota_sup-cota_inf;
                       numero_aleatorio=rand()%(media);
                       }

int alazar::imprimir(){return numero_aleatorio;}
  
int main(){
           class alazar numero;
           cout<<" El numero generado aleatoriamente es: "<<numero.imprimir();
           return 0;
           } 
