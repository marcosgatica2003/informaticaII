#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

main()
{
    char *p,*q;
    int i,j=0,n;
    p=(char *)malloc(15*sizeof(char));
    q=(char *)malloc(n*sizeof(char));
    printf("ingrese de 15 caracteres\n");
    for(i=0;i<15;i++)
    {
        scanf("%c",p+i);

        if(*(p+i)>97&&*(p+i)<125)
        {
            *(q+j)=*(p+i);
            j++;
        }
    }
    for(i=0;i<j;i++)
    printf("%c\t",*(q+i));
getchar();
return 0;
}
