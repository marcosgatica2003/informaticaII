#include <iostream>
#define N 3
using namespace std;

class matriz{
             int mat[N][N];
             public:
                    matriz(); //constructor
                    void cargar();
                    void print();
                    float media();
             };

matriz::matriz(){
                 int i,j;
                 for(i=0;i<N;i++)
                                 for(j=0;j<N;j++)
                                                 mat[i][j]=0;
                 cout<<"Constructor de Matriz. Todo bien por aca. -.-\n\n";//inicio toooda la matriz a 0.
                 }

void matriz::cargar(){
                      int i,j;
                      for(i=0;i<N;i++)
                                      for(j=0;j<N;j++){
                                                       cout<<"M["<<i<<"]["<<j<<"]=";
                                                       cin>>mat[i][j];                //ingreso el valor.
                                                       }
                      }

void matriz::print(){
                       int i,j;
                       for(i=0;i<N;i++){
                                       // cout<<"\n";
                                        for(j=0;j<N;j++)
                                                        cout<<mat[i][j]<<" 2";  //muestro el valor.
                                        }
                       }

float matriz::media(){
                         float prom=0;
                         int i,j;
                         for(i=0;i<N;i++)
                                         for(j=0;j<N;j++)
                                                         prom+=mat[i][j];
                         return prom/(N*N);
                         }

int main(){
           class matriz arreglo;
           arreglo.cargar();
           arreglo.print();
           cout<<"\nEl promedio es: "<<arreglo.media();
           return 0;
           }
