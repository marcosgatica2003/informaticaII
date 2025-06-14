#include <iostream>
#include <stdlib.h>

using namespace std;

class vector;
class matriz{
             int M[4][4];
             float prom;
             public:
                    matriz();
                    void cargar();
                    void mostrar();
                    void promedio();
                    friend int comparar(matriz,vector);
             };

class vector{
             int V[10];
             float prom;
             public:
                    vector();
                    void cargar();
                    void mostrar();
                    void promedio();
                    friend int comparar(matriz,vector);
             };


matriz::matriz(){
               int i,j;
               for(i=0;i<4;i++)
               for(j=0;j<4;j++)   
                   M[i][j]=0;
               }

vector::vector(){ for(int i=0;i<10;i++) V[i]=0;}

void matriz::cargar()
{
                      int i,j;
                      cout<<"\nIngrese la matriz:\n";
                      for(i=0;i<4;i++)
                      for(j=0;j<4;j++)
                      {
                          cout<<"M["<<i+1<<"]["<<j+1<<"]=";
                          cin>>M[i][j];
                      }
}

void vector::cargar()
{
                      int i;
                      cout<<"\n Ingrese el vector:\n";
                      for(i=0;i<10;i++)
                      {
                      cout<<"V"<<i+1;
                      cin>>V[i];
                      }
}

void matriz::mostrar()
{
                       int i,j;
                       cout<<"\n matriz:";
                       for(i=0;i<4;i++)
                          {
                           cout<<"\n";
                       for(j=0;j<4;j++)
                           cout<<"\t"<<M[i][j];
                          }
}

void vector::mostrar()
{                       
                       int i;
                       cout<<"\n VECTOR:\n";
                       for(i=0;i<10;i++)
                           cout<<"\t"<<V[i];
}

void matriz::promedio()
{
                         prom=0;
                         int i,j;
                         for(i=0;i<4;i++)
                         for(j=0;j<4;j++)
                         prom+=M[i][j];
                         prom=prom/16;
}

void vector::promedio()
{
                         prom=0;
                         int i;
                         for(i=0;i<10;i++) 
                         prom+=V[i];
                         prom=prom/10;
}

int comparar(matriz M,vector V)
{
                                if(M.prom>V.prom)
                                  return 1;
                                else{
                                if(M.prom==V.prom)
                                  return 0;
                                else
                                  return -1;
                                    }
}

int main(){
           class matriz objeto_matriz;
           class vector objeto_vector;
           objeto_matriz.cargar();
           objeto_vector.cargar();
           objeto_matriz.mostrar();
           objeto_vector.mostrar();
           objeto_matriz.promedio();
           objeto_vector.promedio();
           if(comparar(objeto_matriz, objeto_vector)==1)
                               cout<<"El prom de la matriz es mayor.";
                               
           else{
                if(comparar(objeto_matriz, objeto_vector)==0)
                                    cout<<"ambos promedios son iguales.";
                else
                    cout<<"el promedio mayor es el del vecotor";
                }
                               
           
           return 0;
           }
