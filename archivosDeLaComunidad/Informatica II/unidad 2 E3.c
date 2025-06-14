#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 10

main()
{
    int *p,*q,i,j,n=1,c=0;
    p=(int*)malloc(tam*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    printf("ingrese los valores del arreglo\n");
    *p=*q;
    for(i=0;i<tam;i++)
    {
        scanf("%d",(p+i));
        *q=*p;
        for(j=0;j<n;j++)
       {
           if(*(p+i)!=*(q+c))
        {
            *(q+c+1)=*(p+i);
            c++;
            n++;
        }
       }
    }
    printf("el vector ingresado es:\n");
    for(i=0;i<tam;i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\n el vector sin repeticion es:\n");
    for(c=0;c<n;c++)
    {
        printf("%d\t",*(q+c));
    }
    getchar();
    return 0;
}
