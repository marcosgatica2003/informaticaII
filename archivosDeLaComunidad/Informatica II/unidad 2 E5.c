#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int *p,i,j,aux=0,n;
    p=(int *)malloc(n*sizeof(int));
    printf("ingrese el tamaño del vector a ordenar\n");
    scanf("%d",&n);
    printf("ingrese vector\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",(p+j));
    }
    for(i=0;i<n-1;i++)
   {
        for(j=0;j<n-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
            aux=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=aux;
            }
        }
    }
    printf("el vector ordenado es:\n");
    for(j=0;j<n;j++)
    printf("%d\t",*(p+j));
    getchar();
    return 0;
}
