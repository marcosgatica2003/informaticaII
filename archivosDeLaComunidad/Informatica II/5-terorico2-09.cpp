//5) modificar el programa anterior, para manipular dinamicamente un vector de 10 elemtos dentro de la clase


#include<iostream>
using namespace std;

class n
{ int *x;
  int tam;
  public:
         n(int );
         void ingresar();
         void print();
         ~n(){delete[]x;};                                    // como existe un constructor, para poder borrar las variables dinamicas se creo un destructor, (altgr 4)
        
};

n::n(int a)
{ tam=a;
   x=new int [tam];
};

void n::ingresar()
{ int i;
  cout<<"Ingresa un numero :"; 
  for(i=0;i<5;i++)
  { cin>>x[i];
  }
  
  
};

void n::print()
{  int i;
  for(i=0;i<5;i++)
  { cout<<*(x+i);
  }
};


int main()
{   
    class n *p=new n(10);         //  tambien se puede hacer class n *p=new n(2);
    
    p->ingresar();
    p->print();       //  (*p).print(); asi se escribe en  c, en c++ p->print(); 
    delete p;               

	  return 0;
     
}




