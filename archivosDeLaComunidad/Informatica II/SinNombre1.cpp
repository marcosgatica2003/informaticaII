#include <iostream.h>
#include <conio.h> 
#include <math.h>
using namespace std;

class complejo{
      int re;
      int im;
      public:
             complejo(){re=0;im=0;};
             void cargar(int a, int b){re=a;im=b;};   
             void imprimir(){cout<<re<<"+j"<<im;};
             complejo operator +(complejo c){
                                          complejo a;
                                          a.re=re+c.re;
                                          a.im=im+c.im;
                                          return a;
                                          }; 
             };




main(){
       int a,b;
       complejo rdo;
       complejo c1,c2;
       cin>>a>>b;
       c1.cargar(a,b);
       cin>>a>>b;
       c2.cargar(a,b);
       rdo=c1+c2;
       rdo.imprimir();
       getch();
       return 0;
       }


             
