//3) codificar  una clase q contenga un campo, o  una varieble miembro int , una funcion constructro, una funcion de impresion de la variable
//  codificar una funcion main, q utilize las funciones de la clase, a traves de un puntero a la clase

#include<iostream>
using namespace std;

class n
{ int x;
  public:
         n(int a){x=a;};
         void print();
};

void n::print()
{  cout<<x;};


int main()
{   int i;
    class n *p;         //  tambien se puede hacer class n *p=new n(2);
    cout<<"Ingresa un numero :"; cin>>i;
    p=new n(i);
    
   p->print();       //  (*p).print(); asi se escribe en  c, en c++ p->print(); 
    delete p;               

	  return 0;
     
}




