#include<stdio.h>
#define tam 5

main()
{
int v[tam],v1[tam],i,j,v2[tam],c=1;
printf("ingrese valores del arreglo\n");
for(i=0;i<tam;i++)
   {
    scanf("%d",&v[i]);
   }
    v1[0]==v[0];
for(i=0;i<tam;i++)
{
    for(j=0;j<(c);j++)
    {
        if(v1[j]!=v[i])
        {
            v1[j+1]==v[i];
            c++;
        }
    }
}
printf("el arreglo cargado es:\n");
for(i=0;i<tam;i++)
{
printf("%d\t",v[i]);
}
printf("el arreglo sin repeticiones es:\n");
for(i=0;i<c;i++)
{
printf("%d\t",v1[i]);
}
getch();
return 0;

}
