#include <iostream>
#include <conio.h>

using namespace std;

class vector{
             int N;
             int *V;
             public:
                    vector();
                    void cargar();
                    void mostrar();
                    void buscar_mayor(int *mayor,int *pos);
                    void repetidos();
             };

vector::vector(){
                 do{
                    cout<<" Ingrese el tamano del vector: ";
                    cin>>N;
                    }while(N<1);
                 V=new int(N);
                 cout<<" \n Se inicializa en 0.\n\n";
                 for(int i=0;i<N;i++)
                                     *(V+i)=0;
                 }
void vector::cargar(){
                      for(int i=0;i<N;i++){
                                           cout<<"V["<<i+1<<"]=";
                                           cin>>*(V+i);
                                           if(*(V+i)==0)
                                                        break;
                                           }
                      }

void vector::mostrar(){
                       cout<<"\n\n Vector:  ";
                       for(int i=0;i<N;i++)
                                           cout<<*(V+i)<<"\t";
                       }

void vector::buscar_mayor(int *mayor,int *pos){
                                             *mayor=*V;
                                             *pos=1;
                                             for(int i=1;i<N;i++)
                                                                 if(*(V+i)>*mayor){
                                                                                  *mayor=*(V+i);
                                                                                  *pos=i+1;
                                                                                  }
                                             }

void vector::repetidos(){
                         int j,i;
                         int r[N];
                         for(i=0;i<N;i++)
                                         r[i]=0;
                         for(i=0;i<N;i++)
                                         if(*(V+i)!=0)
                                                       for(j=i+1;j<N;j++)
                                                                         if(*(V+i)==*(V+j)){
                                                                                            r[i]++;
                                                                                            *(V+j)=0;
                                                                                            }
                         for(i=0;i<N;i++)
                                         if(r[i]!=0)
                                                    cout<<"\n El nro "<<*(V+i)<<" se encuentra "<<r[i]+1<<" veces.";
                         }
                                                                                                       
int main(){
           class vector A;
           int mayor,pos,*Vec,*r;
           A.cargar();
           A.mostrar();
           A.buscar_mayor(&mayor,&pos);
           cout<<"\n El mayor elemento es "<<mayor<<" y esta en la posicion "<<pos<<".\n";
           A.repetidos();
           getch();
           return 0;
           }
