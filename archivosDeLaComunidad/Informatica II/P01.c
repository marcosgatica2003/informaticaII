#include <stdio.h>
#include <stdlib.h>
#include <sys/io.h>

#define Data    0x378
#define Status  Data+1
#define Control Data+2
	
void printstatus( unsigned char estado );

int main( void ) {
	int error;
	unsigned char estado;

	if( ioperm( Data, 3, 1 ) ) {  /* Obtiene permisos sobre el hard */
		perror( "ioperm" );   /* por 3 direc. a partir de Datos */
		exit( 1 );
	}

	estado = inb( Status ); 	      /* Lectura de estado */

	printstatus( estado );

	if( ioperm( Data, 3, 0 ) ) {  /* Quita permisos sobre el hard */
		perror( "ioperm" );
		exit( 1 );
	}
}

void printstatus( unsigned char estado ) {
	if( estado & 1 )
  		printf( " - Error de timeout\n" );
	if( estado & 8 )
  		printf( " - Error de transferencia\n" );
	if( estado & 16 )
  		printf( " - Impresora en linea\n" );
	if( estado & 32 )
  		printf( " - Impresora sin papel\n" );
	if( estado & 64 )
  		printf( " - Ultimo caracter recibido OK\n" );
	if( estado & 128 )
  		printf( " - Impresora ocupada\n" );
}
