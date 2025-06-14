#include <iostream>
#include <conio.h>

using namespace std;

class punto{
            protected:
                      float x;
                      float y;
            public:
                   punto();
                   void mostrar();
            };

class circunferencia:public punto{
                                  float radio;
                                  public:
                                         circunferencia();
                                         void mostrar();
                                  };

punto::punto(){
               cout<<"\n X=";
               cin>>x;
               cout<<"\n Y=";
               cin>>y;
               }

void punto::mostrar(){
                      cout<<"\nP("<<x<<";"<<y<<")";
                      }

circunferencia::circunferencia():punto(){
                                         cout<<"\n radio=";
                                         cin>>radio;
                                         }

void circunferencia::mostrar(){
                               punto::mostrar();
                               cout<<"\tradio="<<radio;
                               }                      

int main(){
           class punto P;
           class circunferencia C;
           P.mostrar();
           C.mostrar();
           getch();
           return 0;
           }
