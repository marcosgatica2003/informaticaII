#include<stdio.h>
#include<conio.h>

main()
{
    int m[3][3],i,j,n,n1;
    printf("ingrese los valores de la tabla\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("m[%d][%d]= ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\ningrese la ubicacion del numero de la fila que se desea que imprima\n");
    scanf("%d%d",&n,&n1);
    for(j=1;j<=3;j++)
    {
        if(n==1)
        {
            printf("%d\t",m[1][j]);
        }
          if(n==2)
        {
            printf("%d\t",m[2][j]);
        }
          if(n==3)
        {
            printf("%d\t",m[3][j]);
        }
    }
    getchar();
    return 0;

}
