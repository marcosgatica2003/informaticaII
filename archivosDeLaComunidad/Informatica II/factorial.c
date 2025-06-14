#include<stdio.h>
#include<conio.h>
int factorial(int n);

main()
{
    int dato;
    int rdo;

    printf("ingrese el nnumero del factorial a obtener\n");
    scanf("%d",&dato);
    rdo=factorial(dato);
    printf("el resultado es: %d\n", rdo);
    getchar();
    return 0;

}

int factorial(int n)
{
    if(n==0)
    {
    return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
