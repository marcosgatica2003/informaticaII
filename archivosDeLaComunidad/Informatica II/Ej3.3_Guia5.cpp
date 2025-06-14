//Un sistema controla el funcionamiento de una camara. Terminado el preceso, se guarda informacion en un arreglo estatico de 
//10 elementos correspondiente a los 10 ciclos de presion de vapor de la camara. Cada elemento del arreglo se representa
//conun tipo struct cuyos miembros son: tiempo en minutos de duracion de proceso de presion, presion de corte y numeros
//de apertura de valvula de seguridad. Se desea implementar un metodo que permita determinar el tiempo promedio de todos
//los ciclos y otro metodo que use este tiempo promedio para mostrar por pantalla aquellos ciclos que estuvieron por encima 
//de esa media.


#include <iostream>
using namespace std;
#define tam 10
# include <malloc.h>

struct ejerc
{
	float tiempo,presion;
	int num_ap;
};

int main()
{
	struct ejerc elem[tam];
	int i;
	float contador=0;
	
	for(i=0;i<tam;i++)
	{
		cout<<"Ingrese el tiempo "<<i+1<<": ";
		cin>>elem[i].tiempo;
		cout<<"Ingrese la presion de corte "<<i+1<<": ";
		cin>>elem[i].presion;
		cout<<"Ingrese numero de veces de encendido "<<i+1<<": ";
		cin>>elem[i].num_ap;
		cout<<"\n";
		contador=contador + elem[i].tiempo;
	}
	contador = contador/tam; 
	
	
	cout<<"EL promedio del tiempo es:"<<contador;	
	
	cout<<"\n\nLos ciclos que estuvieron por encima del promedio de tiempo son : "<<"\n";
	for(i=0;i<tam;i++)
	{
		if( elem[i].tiempo > contador )
		{
			cout<<"Tiempo"<<i+1<<": "<<elem[i].tiempo<<endl;
			cout<<"Presion de corte"<<i+1<<": "<<elem[i].presion<<endl;
			cout<<"Numero de aperturas"<<i+1<<": "<<elem[i].num_ap<<"\n\n";
		}
	}
	
	return 0;
}
