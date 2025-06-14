#include <iostream>
#include <conio.h>

using namespace std;

class Proceso{
              protected:
              int tiempo_proceso;
              int numero_fallas;
              public:
                     Proceso(int time,int fallas){tiempo_proceso=time;
                                                  numero_fallas=fallas;
                                                  }
              };

class Corte{
            protected:
            int forma_corte;
            int potencia_corte;
            public:
                     Corte(int f,int p){forma_corte=f;
                                        potencia_corte;
                                        }
              };

class Enfriado{
               protected:
               int tipo_aireado;
               int presion_aireado;
               public:
                     Enfriado(int tipo,int presion){tipo_aireado=tipo;
                                                    presion_aireado=presion;
                                                    }
               };
class ProcesoAireado;

class ProcesoCorte:public Proceso,public Corte{
                                               public:
                                                      ProcesoCorte(int time,int fallas,int f,int p):Proceso(time,fallas),Corte(f,p){}
                                                      friend int comparar(class ProcesoCorte A,class ProcesoAireado B);
                                               };

class ProcesoAireado:public Proceso,public Enfriado{
                                                   public:
                                                          ProcesoAireado(int time,int fallas,int tipo,int presion):Proceso(time,fallas),Enfriado(tipo,presion){}
                                                          friend int comparar(class ProcesoCorte A,class ProcesoAireado B);
                                                   };

int comparar(class ProcesoCorte A,class ProcesoAireado B){
                                                          if(A.numero_fallas>B.numero_fallas)
                                                                                             return 1;
                                                          else{
                                                               if(A.numero_fallas<B.numero_fallas)
                                                                                                   return -1;
                                                               else
                                                                   return 0;
                                                               }
                                                          }

int main(){
           class ProcesoCorte A(30,11,1,200);          
           class ProcesoAireado B(25,11,1,150);
           int result=comparar(A,B);
           if(result==1)
                               cout<<" El proceso de Corte tiene mayor numero de fallas.";
           else{
                if(result==-1)
                              cout<<" El proceso de Enfriado tiene mayor numero de fallas.";
                else
                    cout<<" Ambos procesos tienen la misma cantidad de fallas.";
                }
           getch();
           return 0;
           }
                                                              
