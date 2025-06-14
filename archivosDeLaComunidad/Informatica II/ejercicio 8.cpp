#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class alasar{
             int n;
             public:
                    alasar(){n=rand();}
                    int ver(){return n;}
                    ~alasar(){cout<<"\n\n Se inicio el destructor.-. Ennemy Down!";}
             };

int main(){
           class alasar aleatorio;
           cout<<" El n es: "<<aleatorio.ver();
           return 0;
           }
