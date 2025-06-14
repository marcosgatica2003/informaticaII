#include <stdio.h>

struct byte{
		unsigned lp:2;
		unsigned bs:1;
		unsigned paridad:3;
		unsigned brea:1;
		unsigned dlab:1;
	};
	union cont{
		struct byte byte1;
		char c;
		};

int main(int argc, char **argv)
{
	union cont b;
	printf("Configuración del puerto 7E1\n");
	b.byte1.dlab=0;
	b.byte1.brea=0;
	b.byte1.paridad=3;
	b.byte1.bs=1;
	b.byte1.lp=2;
	printf("La configuración en hexa es: %x \n",b.c);
	printf("La configuración en decimal es: %d \n",b.c);
	
	return 0;
}

