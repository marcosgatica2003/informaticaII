#include <iostream>
#include <conio.h>

using namespace std;

class mesa{
           protected:
                     int color;
                     int material;
                     int nro_patas;
           public:
                  mesa();
                  int mostrar_color(){return color;}
                  int mostrar_material(){return material;}
                  int mostrar_nro_patas(){return nro_patas;}
           };

mesa::mesa(){
             cout<<" Ingrese el color: ";
             cin>>color;
             cout<<" Ingrese el tipo de material: ";
             cin>>material;
             cout<<" Ingrese el numero de patas: ";
             cin>>nro_patas;
             }

class cuadrado{
               protected:
                            float perimetro;
                            float area;
                            float lado;
               public:
                      cuadrado();
                      float mostrar_lado(){return lado;}
                      float mostrar_perimetro(){return perimetro;}
                      float mostrar_area(){return area;}
               };

cuadrado::cuadrado(){
                     cout<<" Ingrese la longitud del lado: ";
                     cin>>lado;
                     perimetro=lado*4;
                     area=lado*lado;
                     }
                     
class circulo{
              protected:
                        float radio;
                        float perimetro;
                        float area;
              public:
                     circulo();
                     float mostrar_radio(){return radio;}
                     float mostrar_perimetro(){return perimetro;}
                     float mostrar_area(){return area;}
              };

circulo::circulo(){
                   cout<<" Ingrese el radio: ";
                   cin>>radio;
                   perimetro=3.1416*radio*2;
                   area=3.1416*radio*radio;
                   }

class MesaRedonda:public mesa,public circulo{
                                             public:
                                                    MesaRedonda():mesa(),circulo(){}
                                             };

class MesaCuadrada:public mesa,public cuadrado{
                                             public:
                                                    MesaCuadrada():mesa(),cuadrado(){}
                                             };
                              
int main(){
           cout<<" MESA REDONDA:\n";
           class MesaRedonda A;
           cout<<"\n\n MESA CUADRADA:\n";
           class MesaCuadrada B;
           cout<<" Los datos de la mesa redonda son:\n";
           cout<<"  _Color: "<<A.mesa::mostrar_color()<<"\n";
           cout<<"  _Material: "<<A.mesa::mostrar_material()<<"\n";
           cout<<"  _Nro. de Patas: "<<A.mesa::mostrar_nro_patas()<<"\n";
           cout<<"  _Radio: "<<A.circulo::mostrar_radio()<<"\n";
           cout<<"  _Perimetro: "<<A.circulo::mostrar_perimetro()<<"\n";
           cout<<"  _Area: "<<A.circulo::mostrar_area()<<"\n";
           
           cout<<"\n\n Los datos de la mesa cuadrada son:\n";
           cout<<"  _Color: "<<B.mesa::mostrar_color()<<"\n";
           cout<<"  _Material: "<<B.mesa::mostrar_material()<<"\n";
           cout<<"  _Nro. de Patas: "<<B.mesa::mostrar_nro_patas()<<"\n";
           cout<<"  _Lado: "<<B.cuadrado::mostrar_lado()<<"\n";
           cout<<"  _Perimetro: "<<B.cuadrado::mostrar_perimetro()<<"\n";
           cout<<"  _Area: "<<B.cuadrado::mostrar_area()<<"\n";
           getch();
           return 0;
           }
                  
                  
