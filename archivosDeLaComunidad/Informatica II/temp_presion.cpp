#include <iostream>
#include <conio.h>

using namespace std;

class vector{
             float ar[100];
             int N;
             public:
                    void tam(int a){N=a;};
                    void cargar();
                    void mostrar();
                    friend int comparar(vector Temp,vector Presion);
             };
             
void vector::cargar(){
                      int i;
                      for(i=0;i<N;i++){
                                       cout<<"\nv["<<i<<"]=";
                                       cin>>ar[i];
                                       }
                      }

void vector::mostrar(){
                       for(int i=0;i<N;i++)
                                           cout<<"\t"<<ar[i];
                       cout<<"\n";
                       }

int comparar(vector Temp,vector Presion){
                                         int pos1=0,pos2=0;
                                         float maxT=Temp.ar[0];
                                         float maxP=Presion.ar[0];                                
                                         int i;
                                         for(i=1;i<Temp.N;i++)
                                                           if(Temp.ar[i]>maxT){
                                                                               maxT=Temp.ar[i];
                                                                               pos1=i;
                                                                               }      
                                         for(i=1;i<Presion.N;i++)
                                                           if(Presion.ar[i]>maxP){
                                                                                  maxP=Presion.ar[i];
                                                                                  pos2=i;
                                                                                  }
                                         if(pos1==pos2)
                                                       return pos1;
                                         return -1;                                                                                              
                                         }

int main(){
           class vector Temp,Presion;
           int n,pos;
           do{cout<<"Ingrese el tam de la muestra:";
             cin>>n;
             }while((n<2)||(n>100));
           Temp.tam(n);
           Presion.tam(n);
           cout<<"\n Ingrese las mediciones de Temperatura:\n";
           Temp.cargar();
           cout<<"\n Ingrese las mediciones de Presion:\n";
           Presion.cargar();
           cout<<"Temperatura: ";
           Temp.mostrar(); 
           cout<<"Presion: ";
           Presion.mostrar();
           pos=comparar(Temp,Presion);
           if(pos==-1)
                      cout<<"\n Los maximos de Temperatura y Presion no coinciden.";
           else
               cout<<"\n La temperatura y Presion maximas coinciden en la muestra nro "<<pos+1<<".";
           getch();           
           return 0;
           }
