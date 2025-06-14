#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int vector(int *p);
main()
{
     int m[3][3],i,j=0,*p;
     printf("este programa carga una matriz de 3 x 3 y muestra en un vector los valores de la diagonal principal\n");
     printf("ingrese los valores de la tabla\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&m[i][j]);
         }
     }
     p=(int*)malloc(3*sizeof(int));
     printf("los valores ingresados son:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d\t",m[i][j]);
         }
         printf("\n");
     }
     for(i=0;i<3;i++)
    *(p+i)=vector(&m[i][i]);
     printf("los valores de la diagonal principal son:\n");
     for(i=0;i<3;i++)
     printf("%d\t",*(p+i));
     getch();
     return 0;
}

int vector(int *p)
{ int q;
    q=*p;
    return q;
}
