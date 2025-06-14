#include<stdio.h>
#include<stdlib.h>

int facto (int);

int main(void)
{
	int base,res;
	printf("Ingrese la base\n\n");
	scanf("%d",&base);
	res = facto(base);
    printf("El resultado es %d",res);
return(0);
}

int facto(int base)
{
	if(base==0)
	return(1);
	else
	return(base*facto(base-1));
}
