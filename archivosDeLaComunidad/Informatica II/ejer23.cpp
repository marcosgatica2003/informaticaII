#include <iostream>
#include <conio.h>

using namespace std;

class vehiculo{
               protected:
                         int anio;
                         int costo;
               public:
                      vehiculo();
                      virtual void setter(int a,int c){anio=a;costo=c;}
                      int get_anio(){return anio;}
                      int get_costo(){return costo;}
                      virtual void mostrar();
               };

vehiculo::vehiculo(){
                     cout<<" Ingrese el anio del vehiculo: ";
                     cin>>anio;
                     cout<<" Ingrese el costo del vehiculo: ";
                     cin>>costo;
                     }

void vehiculo::mostrar(){
                         cout<<"\n\n VEHICULO:\n";
                         cout<<" _Anio: "<<anio<<"\n";
                         cout<<" _Costo: "<<costo<<"\n";
                         }

class vehiculo_aereo:public vehiculo{
                                     int horas_de_vuelo;
                                     public:
                                            vehiculo_aereo();
                                            virtual void setter(int a,int c,int h){anio=a;costo=c;horas_de_vuelo=h;}
                                            int get_horas(){return horas_de_vuelo;}
                                            virtual void mostrar();
                                     };

vehiculo_aereo::vehiculo_aereo():vehiculo(){
                                            cout<<" Ingrese las horas de vuelo: ";
                                            cin>>horas_de_vuelo;
                                            }
void vehiculo_aereo::mostrar(){
                               cout<<"\n\n VEHICULO AEREO:\n";
                               cout<<" _Anio: "<<anio<<"\n";
                               cout<<" _Costo: "<<costo<<"\n";
                               cout<<" _Horas de Vuelo: "<<horas_de_vuelo<<"\n";
                               }

class vehiculo_terrestre:public vehiculo{
                                         float kilometraje;
                                         public:
                                                vehiculo_terrestre();
                                                virtual void setter(int a,int c,int k){anio=a;costo=c;kilometraje=k;}
                                                float get_kilometraje(){return kilometraje;}
                                                virtual void mostrar();
                                         };
vehiculo_terrestre::vehiculo_terrestre():vehiculo(){
                                                    cout<<" Ingrese el kilometraje: ";
                                                    cin>>kilometraje;
                                                    }
void vehiculo_terrestre::mostrar(){
                                   cout<<"\n\n VEHICULO TERRESTRE:\n";
                                   cout<<" _Anio: "<<anio<<"\n";
                                   cout<<" _Costo: "<<costo<<"\n";
                                   cout<<" _Kilometraje: "<<kilometraje<<"\n";
                                   }

int main(){
           cout<<" Ingrese los datos del vehiculo:\n";
           class vehiculo A;
           cout<<" Ingrese los datos del vehiculo aereo:\n";
           class vehiculo_aereo B;
           cout<<" Ingrese los datos del vehiculo terrestre:\n";
           class vehiculo_terrestre C;
           A.mostrar();
           B.mostrar();
           C.mostrar();
           getch();
           return 0;
           }
           
           
