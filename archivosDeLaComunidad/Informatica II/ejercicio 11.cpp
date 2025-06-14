#include <iostream>
using namespace std;

class vector{
             int Dim;
             int *V;
             public:
                    vector();
                    void cargar_vector();
                    void imprimir_elementos();
                    void buscar_mayor(int *,int *);
                    void repetidos();
             };

vector::vector(){
                 do{
                    cout<<"Dimension del vector: ";
                    cin>>Dim;
                    }while(Dim<1);
                 V=new int(Dim);
                 cout<<"Constructor: Iniciando en 0...\n\n";
                 for(int i=0;i<Dim;i++){*(V+i)=0;}
                                  }
void vector::cargar_vector(){
                      for(int i=0;i<Dim;i++){
                                           cout<<"V["<<i+1<<"]=";
                                           cin>>*(V+i);
                                           if(*(V+i)==0)
                                                        break;
                                           }
                      }
void vector::repetidos(){
               int j,i;
               int vectb[Dim];
         for(i=0;i<Dim;i++)
             vectb[i]=0;
         for(i=0;i<Dim;i++)
              if(*(V+i)!=0)
                  for(j=i+1;j<Dim;j++)
                           if(*(V+i)==*(V+j)){
                                  vectb[i]++;
                                  *(V+j)=0;
                                                       }
         for(i=0;i<Dim;i++)
             if(vectb[i]!=0) {cout<<"El elemento "<<*(V+i)<<" está "<<vectb[i]+1<<" veces.";}
                         }                     

void vector::imprimir_elementos(){
                       cout<<"\nElementos: ";
                       for(int i=0;i<Dim;i++)
                       cout<<*(V+i)<<"\t\n";
                       }

void vector::buscar_mayor(int *M,int *P)
{
            *M=*V;
            *P=1;
				for(int i=1;i<Dim;i++)
                    if(*(V+i)>*M)
						{
                              *M=*(V+i);
                              *P=i+1;
                        }
}


                                                                                                       
int main(){
           class vector vector_objeto;
           int extremo,lugar;
           vector_objeto.cargar_vector();
           vector_objeto.imprimir_elementos();
           vector_objeto.buscar_mayor(&extremo,&lugar);
           cout<<"\nMAYOR:"<<extremo<<" HUBICACION:"<<lugar<<".\n";
           vector_objeto.repetidos();
           return 0;
           }
