#include <iostream>
using namespace std;

class elemento_grafico
{
	public:
	virtual void llamado(){};
	void llamar(){ llamado();};
};

class linea : public elemento_grafico
{
	public:
	virtual void llamado(){ };
	virtual void llam_lineahoriz(){};
	virtual void llam_lineavert(){};
	void llamalh(){llam_lineahoriz();}; //LLamo a linea horizontal
	void llamalv(){llam_lineavert();}; //LLamo a linea vertical
};


class cuadrado : public elemento_grafico
{
	public:
	virtual void llamado(){cout<<"CUADRADO:\n"<<"[]\n\n\n\n\n";};
};

class linea_horizontal : public linea
{
	public:
	virtual void llam_lineahoriz(){ cout<<"LINEA HORIZONTAL: ________________\n\n\n\n\n";};
};

class linea_vertical : public linea
{
	public:
	virtual void llam_lineavert(){cout<<"LINEA VERITCAL:\n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n\n";};
};

int main()
{
	class linea_horizontal lh;
	class linea_vertical lv;
	class cuadrado cua;
	class elemento_grafico eg;
	
	cout<<"Los graficos son:\n\n";
	lh.llamalh();
	lv.llamalv();
	cua.llamar();
	return 0;
} 





  
