#include<stdio.h>
#include<conio.h>
#define tam 4

main()
{
int m[4][4],i,j,aux=-99,aux1=99;
printf("ingrese los valores del censor\n");
for(i=0;i<tam;i++)
{
    for(j=0;j<tam;j++)
    {
        printf("m[%d][%d]:",i,j);
        scanf("%d",&m[i][j]);
    }
}
printf("los valores ingresados son:\n");
for(i=0;i<tam;i++)
{
    for(j=0;j<tam;j++)
    {
        printf("%d\t",m[i][j]);
    }
    printf("\n");
}
for(i=0;i<tam;i++)
{
    for(j=0;j<tam;j++)
    {
        if(m[i][j]>aux)
        {
            aux=m[i][j];
        }
        if(m[i][j]<aux1)
        {
            aux1=m[i][j];
        }
    }
}
printf("el valor mayor es:%d\n",aux);
printf("el valor menor es:%d\n",aux1);
printf("muchas gracias por utilizar el programa que tengas buenos dias\n");
getchar ();
return 0;
}
