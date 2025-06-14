
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;



class vector
{
	public:
		int vect[2];
	public:
	    vector();
		friend void multplica(class vector, class matriz);
};

class matriz: public vector
{
	private:
		int mat[2];
	public:
		matriz();
		friend void multiplica(class vector, class matriz);
};

int main (void)
{
	class vector v;
	class matriz m;
	
	multiplica(v,m);
}

vector::vector()
{
	cout<<"Constructor de vector\n";
	
	cout<<"Ingrese el elemento 0\n";
	cin>>vect[0];
	cout<<"Ingrese el elemento 1\n";
	cin>>vect[1];
}

matriz::matriz()
{
	cout<<"Constructor de matr\n";
	int a,b;
	cout<<"Ingrese el elemento 0\n";
	cin>>mat[0];
	cout<<"Ingrese el elemento 1\n";
	cin>>mat[1];
//	vector();
	
}

void multiplica(class vector v,class matriz m)
{
	int res[2];
	res[0]=m.mat[0]*v.vect[0]+m.mat[1]*v.vect[1];
	res[1]=m.vect[0]*v.vect[0]+m.vect[1]*v.vect[1];
	cout<<"Resultado:\n";
	cout<<res[0]<<"\n";
	cout<<res[1]<<"\n";
}
	
