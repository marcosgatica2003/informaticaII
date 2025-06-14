#include <iostream>
#include <conio.h>

using namespace std;

class elemento_grafico{
                       protected:
                                 int x;
                                 int y;
                       public:
                              elemento_grafico(int X,int Y){x=X;y=Y;}
                       };

class cuadrado:public elemento_grafico{           
                                        public:
                                               cuadrado(int LADO):elemento_grafico(LADO,LADO){};
                                               virtual void pintar();
                                        };

class linea:public elemento_grafico{
                                      public:
                                             linea(int X,int Y):elemento_grafico(X,Y){};
                                             virtual void pintar();
                                      };

class linea_horizontal:public linea{
                                      public:
                                             linea_horizontal(int X):linea(X,0){};
                                             virtual void pintar();
                                      };
class linea_vertical:public linea{
                                      public:
                                             linea_vertical(int Y):linea(0,Y){};
                                             virtual void pintar();
                                      };

void cuadrado::pintar(){
                        system("cls");
                        cout<<"\n CUADRADO:\n";
                        int i,j,lado=(int)x*1.2;
                        for(i=0;i<x*1.2;i++)
                                        cout<<"_";
                        cout<<"\n";
                        for(j=1;j<y-2;j++){
                                          for(i=0;i<=lado;i++){
                                                           if((i==0)||(i==lado))
                                                                             cout<<"|";
                                                           else
                                                               cout<<"/";
                                                           }
                                          cout<<"\n";
                                          }
                        for(i=0;i<x*1.2;i++)
                                        cout<<"-";
                        getch();
                        }

void linea::pintar(){
                     system("cls");
                     cout<<"\n LINEA:\n";
                     int i,j,incremento=(int)x/y;
                     for(j=0;j<y;j++){
                                      for(i=0;i<incremento*j;i++)
                                                                 cout<<" ";
                                      for(i=0;i<incremento;i++)
                                                               cout<<"*";
                                      cout<<"\n";
                                      }  
                     getch();
                     }

void linea_horizontal::pintar(){
                                system("cls");
                                cout<<"\n LINEA HORIZONTAL:\n   ";
                                int i;
                                for(i=0;i<x;i++)
                                                cout<<"_";
                                getch();
                                }

void linea_vertical::pintar(){
                              system("cls");
                               cout<<"\n LINEA VERTICAL:\n";
                                int i;
                                for(i=0;i<y;i++)
                                                cout<<"      |\n";
                                getch();
                                }

int main(){
           cuadrado A(22);
           linea B(35,7);
           linea_horizontal C(25);
           linea_vertical D(15);
           A.pintar();
           B.pintar();
           C.pintar();
           D.pintar();
           return 0;
           }
                     

                                                          
