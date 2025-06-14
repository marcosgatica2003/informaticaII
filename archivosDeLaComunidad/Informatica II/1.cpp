
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void menor(int *);
void menor(int *,int *);

int main(void)
{

	int vect1[5]={0,2,-90,1,99};
	int vect2[5]={-1,2,90,1,99};
	menor(vect1);
    menor(vect2);
	menor(vect1,vect2);
}

void menor(int *p)
{
	int menor,i;
	menor=*p;
	for(i=0;i<5;i++)
	{
	  if(*(p+i)<menor)
	  menor=(*p+i);
	}
 cout<<"El menor elemento del arreglo es: "<<menor<<"\n\n";
}

void menor(int *p,int *q)
{
	int menor,i;
	menor=*p;
	for(i=0;i<5;i++)
	{
	  if(*(p+i)<menor)
	  menor=*(p+i);
	}
	
	for(i=0;i<5;i++)
	{
	  if(menor<(*q+i))
	  menor=(*q+i);
	}
 cout<<"El menor total es: "<<menor;
}
	
