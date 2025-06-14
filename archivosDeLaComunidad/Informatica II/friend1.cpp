
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class vector;
class matriz
{
	private:
	 int mat[2][2];
	public:
	  matriz();
	  //void imprime();
	  void carga();
	  friend void multiplica(matriz,vector);
};

class vector
{
	private:
		int vecto[2];
	public:
		vector();
		//void imprime();
//		void carga();
	   friend void multiplica(matriz,vector);
};

int main(void)
{
	class matriz m;
	class vector v;
	m.carga();
    multiplica(m,v);
}

matriz::matriz()
{
	int i,j;
	cout<<"Constructor matriz inicializado\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		mat[i][j]=0;
	}
}

void matriz::carga()
{
	int i,j;
	cout<<"Carga la matriz\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Ingrese el elemento"<<i<<j<<"\n\n";
		    cin>>mat[i][j];
		}
     }
}


void multiplica(class matriz m, class vector v)
{
	int i,j;
	int vec[2]={0,0};
	cout<<"Multiplicaremos la matriz con el vector\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			vec[i]=vec[i]+m.mat[i][j]*v.vecto[i];
		}
     }
 cout<<"Resultado\n\n";
 for(i=0;i<2;i++)
  cout<<vec[i]<<"\n";
}
	

vector::vector()
{
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Carga del vector\n\n";
		cin>>vecto[i];
	}
}
