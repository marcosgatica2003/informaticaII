//Error de ambiguedad cuando uso float

#include <iostream>
using namespace std;

class cabeza_democha
{
	private:
		int x;
		float y;
		char t;
	public:
		cabeza_democha(int ); 
		//cabeza_democha(float);
		cabeza_democha(char);
};

cabeza_democha :: cabeza_democha( int ent )
{
	int x=ent;
	cout<<"\nValor entero: "<<x;
}

//cabeza_democha :: cabeza_democha( float dec )
//{
//	float y=dec;
//	cout<<"Valor decimal: "<<y;
//}

cabeza_democha :: cabeza_democha( char car )
{
	char t=car;
	cout<<"\nValor caracter: "<<t;
}



int main ()
{
	class cabeza_democha hola( 'a'),chau( 7 );
	//hola.sumae();
	//chau.sumaf();
	return 0;
}

