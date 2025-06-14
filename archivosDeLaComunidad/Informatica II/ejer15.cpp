#include <iostream>
#include <conio.h>

using namespace std;

class coordenada{
                 protected:
                           float x;
                           float y;
                 public:
                        coordenada();
                        void setter(float a){x=a;}
                        float getter(){return x;}
                 };

                         
class complejo:public coordenada{
                                 public:
                                        complejo():coordenada(){};
                                        void setter(float a,float b){
                                                                     x=a;
                                                                     y=b;
                                                                     }
                                        float* getter();
                                 };
coordenada::coordenada(){
                         srand(time(NULL));
                         x=rand();
                         y=rand();
                         }

float* complejo::getter(){
                          float *V=new float(2);
                          V[0]=x;
                          V[1]=y;
                          return V;
                          }

int main(){
           class coordenada A;
           class complejo B;
           float *info;
           //A.setter(2.0);
           //B.setter(3.5,5.6);
           cout<<" La coordenada de A es: "<<A.getter();
           info=B.getter();
           cout<<"\n El complejo B es: "<<info[0]<<"+j"<<info[1];
           getch();
           return 0;
           }
                          
