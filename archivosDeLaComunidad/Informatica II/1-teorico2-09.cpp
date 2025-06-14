/*class
dericavion 
manejo dinamico

int *p
p=new int;               // remplaza a malloc

int *p=new int(2);             //(como queremos usar una clase ponemos () q significa un paso de parametros ;
int *p=new int[2]              //tambien podemos usar corchetes, vector de dos elementos/

malloc-free

new- delete   // asi se libera la memoria en new */

// 1) Codificar un programa q utilize el operador new para generar un  vector  10 valores enteros en el q luego de 
//almacenar dichos valores,de q manera q estos correspondan al cuadrado del indice, imprimirlos posteriormente.

#include<iostream>
using namespace std;

int main()
{  int *p=new int[10];
   int i;
  
   cout<<"Los nros son\n"; 
   for( i=0;i<10;i++)
     { p[i]=i*i;
       
       cout<<p[i]<<"-";
     }
   delete[]p;  
   
   return 0;
     
}


//2) codificar un programa q utilize el operador new para generar un vector de dos elementos,
//   q sean punteros a integers, en los culaes se almacene, la direcion de 2 variablesa auxiliares, q contengan
//   el cuadrado del indice, imprimiendo ademas  estas direciones



