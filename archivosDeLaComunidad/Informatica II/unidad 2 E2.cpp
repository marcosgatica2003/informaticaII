#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 20

main()
{
    int *p,*q,i,j=0,n=0;
    p=(int*)malloc(tam*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    printf("ingrese los valores del arreglo\n");
    for(i=0;i<tam;i++)
    {
        scanf("%d",(p+i));
        if(*(p+i)>0&&(*(p+i))%2!=0)
        {
            *(q+j)=*(p+i);
            j++;
            n++;
        }
    }

    printf("los valores ingresados son:\n");
    for(i=0;i<tam;i++)
    {
    printf("%d\t",*(p+i));
    }
    printf("\nlos valores impares registrados son:\n");
    for(j=0;j<n;j++)
    {
    printf("%d\t",*(q+j));
    }
    printf("\n");
    printf("gracias por utilizar este programa\n");
    getch();
    return 0;
}

