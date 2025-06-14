#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int menor(int *p,int n,int n1);
void menor1(int *p,int n,int n1);

main()
{
    int *m,i,j,men,n,n1;
    m=(int*)malloc(n*n1*sizeof(*m));
    printf("este programa declara una tabla de n filas y n columnas ingresadas por teclado y muestra por pantalla el menor numero de la tabla y la columna en que se encuentra\n");
    printf("ingrese numero de filas\n");
    scanf("%d",&n);
    printf("ingrese numero de columnas\n");
    scanf("%d",&n1);
    printf("ingrese los valores de la tabla nxn seleccionada\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",(m+(i*n1+j)));
        }
    }
    printf("los elementos cargados en la tabala son:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",*(m+(i*n1+j)));
        }
        printf("\n");
    }
    men=menor(m,n,n1);
    printf("el elemento menor de la tabla es:\n\t%d\n",men);
    menor1(m,n,n1);
    return 0;
}

int menor(int *p,int n,int n1)
{
    int i,j,k;
    k=*p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(*(p+(i*n1+j))<k)
            {
                k=*(p+(i*n1 +j));
            }
        }
    }
    return k;
}

void menor1(int *p,int n,int n1)
{
    int i=0,j=0,k,l,v[n];
    k=*p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(*(p+(i*n1+j))<k)
            {
                k=*(p+(i*n1 +j));

                for(l=0;l<n;l++)
                {
                v[l]=*(p+(l*n1+j));
                }
            }
        }
    }
    printf("la columna del menor valor es:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",v[i]);
    }
    getchar();

}

