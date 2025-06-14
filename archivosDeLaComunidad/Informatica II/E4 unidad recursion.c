#include<stdio.h>
int recu(int n);
int main()
{
    int dato;
    int rdo;
    printf("ingrese el numero que recurtir\n");
    scanf("%d",&dato);
    rdo=recu(dato);
    printf("el resultado es:%d\n",rdo);
    getch();
    return 0;

}
int recu(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
       return recu(n-1)+2*n-1;
    }
}
