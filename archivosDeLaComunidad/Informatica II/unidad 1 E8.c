#include<stdio.h>
#define tam 3

main()
{
int m[tam][tam],i,j,v[tam];
printf("ingrese los valores de la matriz 3x3\n");
for(i=0;i<tam;i++)
{
for(j=0;j<tam;j++)
{
scanf("%d",&m[i][j]);
}
}
for(i=0;i<tam;i++)
{
for(j=0;j<tam;j++)
{
if((i=0)&&(j=2))
{
v[i]==m[i][j];
}
if((i=1)&&(j=1))
{
v[i]==m[i][j];
}
if((i=2)&&(j=0))
{
v[i]==m[i][j];
}
}
}
for(i=0;i<tam;i++)
{
printf("%d\t",v[i]);
}
getch();
return 0;
}
