#include <stdio.h>
int recu(int n);
int main()
{
    int dato,rdo;
    printf("ingrese el numero:\n");
    scanf("%d",&dato);
    rdo=recu(dato);
    printf("el resultado es:%d\n",rdo);
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
