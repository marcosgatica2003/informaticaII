//4)modificar el programa anterior, para q la variable entera de la clase sea manipulada meidante un puntero entero;


#include<iostream>
using namespace std;

class n
{ int *x;
  public:
         n(int a){x=new int (a);};
         void print();
         ~n(){delete x;};                                    // como existe un constructor, para poder borrar las variables dinamicas se creo un destructor, (altgr 4)
        
};

void n::print()
{  cout<<*x;};


int main()
{   int i;
    class n *p;         //  tambien se puede hacer class n *p=new n(2);
    cout<<"Ingresa un numero :"; cin>>i;
    p=new n(i);
    
   p->print();       //  (*p).print(); asi se escribe en  c, en c++ p->print(); 
    delete p;               

	  return 0;
     
}




