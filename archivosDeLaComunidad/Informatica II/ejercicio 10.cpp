#include <iostream>
#include <stdlib.h>


using namespace std;

class vector{
             int Vector[20];
             int lim;
             public:
                    vector(); //constructor de la clase
                    void ver_dato 	();
                    ~vector(); //destructor de la clase.
             };
             
int comprobar(int *Vector,int i){
                            int aux;
                            for(aux=0;aux<i;aux++)
                            if(*(Vector+i)==*(Vector+aux))
                            return 1;
                            return 0;
                            }
vector::vector(){
                 
                 int rep,i;
                 srand(time(NULL));
                 lim=rand()%(20-1);
                 for(i=0;i<lim;i++){
                                    do{
                                       Vector[i]=rand();
                                       rep=comprobar(Vector,i);
                                       }while(rep==1);
                                    }
                 }
                 
vector::~vector(){delete[] Vector;}

void vector::ver_dato(){
                       cout<<"\n\nVector:  ";
                       for(int k=0;k<lim;k++)
                         cout<<Vector[k]<<" ";
                       }

int main(){
           class vector numero_aleatorio;
           numero_aleatorio.ver_dato();
           return 0;
           }
                                    
                                        
                                       
