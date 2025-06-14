#include<stdio.h>
#include<conio.h>

main()
{
int m[3][3],i,j,suma1=0,suma2=0;
int suma3=0;
m[0][0]=2;
m[0][1]=3;
m[0][2]=1;
m[1][0]=4;
m[1][1]=5;
m[1][2]=1;
m[2][0]=50;
m[2][1]=2;
m[2][2]=4;
printf("este programa suma lo elementos de las filas y tira sus resultados\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if((i=0)&&(j<3))
        {
            suma3=suma3+m[i][j];
        }
        if((i=1)&&(j<3))
        {
            suma1=suma1+m[i][j];
        }
        if((i=2)&&(j<3))
        {
            suma2=suma2+m[i][j];
        }
    }
}
printf("los valores en la tabla son:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",m[i][j]);
    }
    printf("\n");
}
printf("los resultados de las sumas son:\n");
printf("suma fila 1= %d\t",suma3);
printf("suma fila 2= %d\t",suma1);
printf("suma fila 3= %d\t",suma2);
getchar();
return 0;
}
