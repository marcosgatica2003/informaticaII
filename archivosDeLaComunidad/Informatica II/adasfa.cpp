#include <stdio.h>
int main( void )
{
struct modemstatus {
unsigned DeltaCTS: 1;
unsigned DeltaDSR: 1;
unsigned DeltaRI: 1;
unsigned DeltaDCD: 1;
unsigned CTS: 1;
unsigned DSR: 1;
unsigned RI: 1;
unsigned DCD: 1;
};
union bitfil {
struct modemstatus ms1;
int inbyte;
};
union bitfil codbit, *codbit2;
codbit.inbyte = 233;
if( codbit.ms1.DeltaCTS ) printf( "Cambio en Modem Listo\n");
if( codbit.ms1.DeltaDSR ) printf( "Cambio en Modem Activo\n");
if( codbit.ms1.DeltaRI ) printf( "Cambio en llamada de línea\n" );
if( codbit.ms1.DeltaDCD ) printf( "Cambio de estado en portadora\n" );
if( codbit.ms1.CTS ) printf( "Modem Listo\n" );
if( codbit.ms1.DSR ) printf( "Modem Activo\n" );
if( codbit.ms1.RI ) printf( "Línea llamando\n" );
if( codbit.ms1.DCD ) printf( "Portadora detectada\n" );
getchar();
getchar();
};
