#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int *p,i,*q,n=0,j=0;
    p=(int*)malloc(10*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    printf("ingrese los valores\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",(p+i));
        if(*(p+i)%10==0)
        {
            *(q+j)=*(p+i);
            n++;
            j++;
        }
    }
    printf("los valores del multiples del tamaño diez son:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\t",*(q+j));
    }
    getchar();
    return 0;
}
