#include<stdio.h>
#include<stdlib.h>

int vector(int *P);

main()
{
    int m[3][3],i,j,*v;
    v=(int*)malloc(3*sizeof(int));
    printf("este programa carga una matriz 3 x 3, lo recore y muestra por pantalla los valores de la fila 1.\n");
    printf("ingrese los valores de la matriz\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
for(i=0;i<3;i++)
*(v+i)=vector(&m[0][i]);
printf("la matriz cargada es:\n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
    {
          printf("%d\t",m[i][j]);
    }
    printf("\n");
 }
printf("los elementos de la primera fila son:\n");
for(i=0;i<3;i++)
{
    printf("%d\t",*(v+i));
}
getch ();
return 0;
}
int vector(int *p)
{
 int q;
 q=*p;
return q;
}
