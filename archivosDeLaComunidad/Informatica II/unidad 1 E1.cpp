#include<stdio.h>
#include<conio.h>

main()
{
      
      float a,b,c;
      printf("este programa calcula el cociente entre un numero mayor sobre otro menor ingresados por teclado\n");
      printf("ingrese el primer numero\n");
      scanf("%f",&a);
      printf("ingrese el segundo numero\n");
      scanf("%f",&b);
      if((a>=b))
      {
                  c=a/b;
      }
      if(a<=b)
      {
             c=b/a;
             }
      printf("el resultado es:%f",c);
      getch();
      
      return 0;
}      
