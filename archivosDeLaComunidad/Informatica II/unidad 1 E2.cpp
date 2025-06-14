#include<stdio.h>
#include<conio.h>

main()
{
      int a=0,b=0,c=0,d=0;
      printf("este programa calcula la suma del numero menor y mayor de tres numeros ingresados por teclado\n");
      printf("ingrese los numeros\n");
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&a);
     if((a>=b)&&(a>=c))
     {
                     if(c<b)
                     {
                            d=a+c;
                            }
                     if(b<c)
                     {
                            d=a+b;
                            }
     }
     if((b>a)&&(b>c))
     {
                     if(c<a)
                     {
                            d=c+b;
                            }
                     if(a<c)
                     {
                            d=b+a;
                            }
     }
     if((c>a)&&(c>b))
     {
                     if(b<a)
                     {
                            d=b+c;
                            }
                     if(a<b)
                     {
                            d=c+a;
                            }
     }   
      printf("el resultado es:%d\n",d);
      getch();
      return 0;
      }
