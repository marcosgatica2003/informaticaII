#include<stdio.h>
#include<stdlib.h>

int recu (int,int);

int main(void)
{
	int base,res,exp;
	printf("Ingrese la base\n\n");
	scanf("%d",&base);
	printf("Ingrese el exponente\n\n");
	scanf("%d",&exp);
	res = recu(base,exp);
    printf("El resultado es %d",res);
return(0);
}

int recu(int base, int exp)
{
	if(exp==0)
	return(1);
	else
	return(base*(recu(base,exp-1)));
}
