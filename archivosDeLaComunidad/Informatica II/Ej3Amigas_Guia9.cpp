
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class vector
{
	private: 
	  int vect[2];
	public:
	  vector();
	  void muestra();
	  friend void multiplicar(class vector,class vector, int[]);
};


int main(void)
{
	int res[2]={0,0};
	int i;
	class vector v1,v2;
	multiplicar(v1,v2,res);
	cout<<"Resultado"<<"\n";
	for(i=0;i<2;i++)
	cout<<"\n"<<res[i];
return(0);
}

vector::vector()
{
	int i;
	for(i=0;i<2;i++)
	{
	cout<<"Ingrese el elemento "<<i+1<<"\n";
	cin>>vect[i];
    }
}

void vector::muestra()
{
	int i;
	for(i=0;i<2;i++)
	{
	cout<<vect[i]<<" ";
    }
}

void multiplicar(class vector v1,class vector v2,int resultado[])
{
	int i,j;
	//int resultado[2]={0,0};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		 resultado[i]=resultado[i]+v1.vect[i]*v2.vect[j];
     }
  
}
	
	
