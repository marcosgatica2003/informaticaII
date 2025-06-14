#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class mesa{
           protected:
                     int color;
                     int material;
                     int cant_patas;
           public:
                  mesa();
                  int mostrar_color(void);
                  int mostrar_material(void);
                  int mostrar_cant_patas(void);
           };



mesa::mesa(){
             cout<<" Ingrese el color: ";
             cin>>color;
             cout<<" Ingrese el tipo de material: ";
             cin>>material;
             cout<<" Ingrese el numero de patas: ";
             cin>>cant_patas;
             }

class cuadrado{
               protected:
                            float perimetro;
                            float area;
                            float lado;
               public:
                      cuadrado();
                      float mostrar_lado(void);
                      float mostrar_perimetro(void);
                      float mostrar_area(void);
               };

cuadrado::cuadrado(){
                     cout<<" Ingrese el lado: ";
                     cin>>lado;
                     perimetro=lado*4;
                     area=pow(lado,2);
                     }
                     
class circulo{
              protected:
                        float radio;
                        float perimetro;
                        float area;
              public:
                     circulo();
                     float mostrar_radio(void);
                     float mostrar_perimetro(void);
                     float mostrar_area(void);
              };
              

int mesa :: mostrar_color(void) {return color;};
int mesa :: mostrar_material (void) {return material;}
int mesa :: mostrar_cant_patas(void) {return cant_patas;}
float cuadrado :: mostrar_lado (void) {return lado;};
float cuadrado :: mostrar_perimetro(void){return perimetro;}
float cuadrado :: mostrar_area(void){return area;}              
float circulo :: mostrar_radio (void) {return radio;};
float circulo :: mostrar_perimetro(void){return perimetro;}
float circulo :: mostrar_area(void){return area;}

circulo::circulo(){
                   cout<<" Ingrese el radio: ";
                   cin>>radio;
                   perimetro=3.14*radio*2;
                   area=3.1416*pow(radio,2);
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
           cout<<"mesa redonda:\n";
           class MesaRedonda objeto_mesa_redonda;
           cout<<"\nmesa cuadrada:\n";
           class MesaCuadrada objeto_mesa_cuadrada;
           cout<<" datos de mesa redonda son:\n";
           cout<<"·Color: "<<objeto_mesa_redonda.mesa::mostrar_color()<<"\n";
           cout<<"·Material: "<<objeto_mesa_redonda.mesa::mostrar_material()<<"\n";
           cout<<"·Patas: "<<objeto_mesa_redonda.mesa::mostrar_cant_patas()<<"\n";
           cout<<"·Radio: "<<objeto_mesa_redonda.circulo::mostrar_radio()<<"\n";
           cout<<"·Perimetro: "<<objeto_mesa_redonda.circulo::mostrar_perimetro()<<"\n";
           cout<<"·Area: "<<objeto_mesa_redonda.circulo::mostrar_area()<<"\n";
           
           cout<<"\ndatos mesa cuadrada son:\n";
           cout<<"·Color: "<< objeto_mesa_cuadrada.mesa::mostrar_color()<<"\n";
           cout<<"·Material: "<< objeto_mesa_cuadrada.mesa::mostrar_material()<<"\n";
           cout<<"·Patas: "<< objeto_mesa_cuadrada.mesa::mostrar_cant_patas()<<"\n";
           cout<<"·Lado: "<< objeto_mesa_cuadrada.cuadrado::mostrar_lado()<<"\n";
           cout<<"·Perimetro: "<< objeto_mesa_cuadrada.cuadrado::mostrar_perimetro()<<"\n";
           cout<<"·Area: "<< objeto_mesa_cuadrada.cuadrado::mostrar_area()<<"\n";
           return 0;
           }
                  
                  
