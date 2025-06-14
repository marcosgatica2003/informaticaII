#include <iostream>
#include <conio.h>

using namespace std;

struct punto{
             float x;
             float y;
             };

class cuadrilatero{
                   protected:
                             punto p1,p2,p3,p4;
                             float L1,L2,L3,L4;
                   public:
                          cuadrilatero();
                          void mostrar();
                          float perimetro();
                   };

cuadrilatero::cuadrilatero(){
                             cout<<"p1(x,y)=";
                             cin>>p1.x>>p1.y;
                             cout<<"p2(x,y)=";
                             cin>>p2.x>>p2.y;
                             cout<<"p3(x,y)=";
                             cin>>p3.x>>p3.y;
                             cout<<"p4(x,y)=";
                             cin>>p4.x>>p4.y;
                             L1=pow(p1.x*p1.x+p1.y*p1.y,0.5);
                             L2=pow(p2.x*p2.x+p2.y*p2.y,0.5);
                             L3=pow(p3.x*p3.x+p3.y*p3.y,0.5);
                             L4=pow(p4.x*p4.x+p4.y*p4.y,0.5);
                             }

void cuadrilatero::mostrar(){
                             cout<<"\np1("<<p1.x<<","<<p1.y<<")";
                             cout<<"\tp2("<<p2.x<<","<<p2.y<<")";
                             cout<<"\tp3("<<p3.x<<","<<p3.y<<")";
                             cout<<"\tp4("<<p4.x<<","<<p4.y<<")";
                             }

float cuadrilatero::perimetro(){
                                return L1+L2+L3+L4;
                                }
                                
class trapezoide:public cuadrilatero{
                                     public:
                                            trapezoide():cuadrilatero();
                                            float area();
                                     };

class paralelogramo:public cuadrilatero{
                                        public:
                                               paralelogramo():cuadrilatero();
                                               float area();
                                        };

float paralelogramo::area(){
                            float angulo=atan(p2.x-p1.x
                            }

class rectangulo:public paralelogramo{
                                      public:
                                             rectangulo():cuadrilatero();
                                             float area();
                                      };

float rectangulo::area(){
                         return L1*L2;
                         }

class cuadrado:public rectangulo{
                                 public:
                                        cuadrado():cuadrilatero();
                                        float area();
                                 };

float cuadrado::area(){
                       return L1*L1;
                       }

int main{
         getch();
         return 0;
         }
