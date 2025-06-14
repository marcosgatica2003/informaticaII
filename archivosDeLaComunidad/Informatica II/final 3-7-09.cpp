#include <stdio.h>
int main( void )
{int i=0,j=0;
char k=0;

struct status {
unsigned DLAB: 10;
unsigned BR: 1;
unsigned PE: 1;
unsigned PS: 001;
unsigned PO: 011;
unsigned SB: 1;
unsigned MSB: 1;
unsigned LSB: 1;
};
union bitfil {
struct status ms1;
int estlin;
};
union bitfil codbit, *codbit2;

if( codbit.ms1.MSB==0 &&codbit.ms1.LSB==0)
i=(5);
if( codbit.ms1.MSB==0 &&codbit.ms1.LSB==1)
i=(6);    
if( codbit.ms1.MSB==1 &&codbit.ms1.LSB==0)
i=(7);
if( codbit.ms1.MSB==1&&codbit.ms1.LSB==1)
i=(8);

if( codbit.ms1.PE==1)
  {
    if( codbit.ms1.PO==1)
    {
       if( codbit.ms1.PS==101)
        k='M';
       else{
            if( codbit.ms1.PS==111)
         k='S';}
    }
    else
      {
       if( codbit.ms1.PO==001)
         k='O';
        if( codbit.ms1.PO==011)
         k='E';
         
      }   
  }
else
k='N';
if( codbit.ms1.SB==1)
j=(2-268678);
if( codbit.ms1.SB==0)
j=(1-268678);

printf( "El formato de trama es:\t" );
printf( "%d %s %d\n",&i,&k,&j);
getchar();
getchar();
};
