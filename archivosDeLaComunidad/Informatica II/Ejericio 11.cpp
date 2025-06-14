//Implementar un programa que permita representar un punto del plano real bidimensional por medio
//de una estructura. Se crearan metodos para:
//a) Tomar las coordenadas x e y
//b)Determinar el cuadrante
//c)Determinar si se encuentra sobre los ejes
//d)Determinar la distancia de dicho punto al origen del sistema
//Se pide el proceso para 5 puntos

#include <iostream>
using namespace std;
#define tam 5
#include <math.h>

struct punto
{
	int x,y;
};

int main()
{
	struct punto point[tam];
	float distancia;
	int i;
	
	for(i=0;i<tam;i++)
	{
		cout<<"Punto "<<i+1;
		cout<<"Ingrese la coordenada X: ";
		cin>>point[i].x;
		cout<<"Ingrese la coordenada Y: ";
		cin>>point[i].y;
		cout<<"\n";
	}
	
	for(i=0;i<tam;i++)
	{	
		cout<<"punto "<<i+1<<": ("<<point[i].x<<","<<point[i].y<<")\n";
		
		if( point[i].x > 0 )
		{
			if(point[i].y > 0)
			{cout<<"El punto se encuentra en el primer cuadrante\n";}
			else
			{cout<<"El punto se encuentra en el cuarto cuadrante\n"; }
		}
		else
		{
			if(point[i].y > 0)
			{ cout<<"El punto se encuentra en el segundo cuadrante\n"; }
			if(point[i].y < 0)
			{ cout<<"El punto se encuentra en el tercer cuadrante\n"; }	
		}
		if( point[i].x == 0 && point[i].y == 0 )
		cout<<"El punto se encuentra en el origen\n";
		else
		{
			if ( point[i].x == 0 )
			cout<<"Se encuentra en el eje de las X";
			if ( point[i].y == 0 )
			cout<<"Se encuentra en el eje de las Y";
		}
		
		distancia = sqrt(  ( (point[i].x*point[i].x)) +   (point[i].y*point[i].y)  );
		cout<<"La distancia al origen es: "<<distancia<<"\n\n";
			
	}
	
	return 0;
}  
