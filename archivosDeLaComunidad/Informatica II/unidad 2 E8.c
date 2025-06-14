#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menor(int *p);
int mayor(int *p);

main()
{
int *m,i,j,may,men;
m=(int*)malloc(4*4*sizeof(*m));
printf("este programa extrae de una tabla de 4x4 el mayor y menor numero ingresado\n");
printf("ingrese valorews en la tabla\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        scanf("%d",(m+(i*4+j)));
    }
}
printf("la matriz cargada es:\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t",*(m+(i*4+j)));
    }
    printf("\n");
}
may=mayor(m);
men=menor(m);
printf("el elemento seleccionado menor de la tabla es:\n\t %d\n",men);
printf("el elemento seleccionado mayor de la tabla es:\n\t %d\n",may);
getchar();
return 0;
}
int mayor(int *p)
{
    int i,j,k;
    k=*p;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(k<*(p+(i*4+j)))
            {
                k=*(p+(i*4+j));
            }
        }
    }
    return k;
}

int menor(int *p)
{
    int i,j,k;
    k=*p;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(*(p+(i*4+j))<k)
            {
                k=*(p+(i*4+j));
            }
        }
    }
    return k;
}
