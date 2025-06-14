//2) codificar un programa q utilize el operador new para generar un vector de dos elementos,
//   q sean punteros a integers, en los culaes se almacene, la direcion de 2 variablesa auxiliares, q contengan
//   el cuadrado del indice, imprimiendo ademas  estas direciones


#include<iostream>
using namespace std;

int main()
{  int **p=new int *[2];          
   int k,m;
   
   k=1*1;
   m=2*2;
   
   p[0]=&k;
   p[1]=&m;
   
  
   cout<<"Los nros son\n"<<*p[0]<<"-"<<*p[1]; 
   cout<<"\nSus direciones son\n"<<p[0]<<"-"<<p[1]; 
   
   delete []p;  
   
     
   
   
   
   
   return 0;
     
}


