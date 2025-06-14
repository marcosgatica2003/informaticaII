#include<stdio.h>
#include<conio.h>
#define tam 10
main()
{
      int v[tam];
      v[0]=2;
      v[1]=-3;
      v[2]=30;
      v[3]=-1;
      v[4]=-1;
      v[5]=50;
      v[6]=22;
      v[7]=100;
      v[8]=0;
      v[9]=5;
      int i;
      printf("este progra muestra por pantalla los elementos positivos\n");
      for(i=0;i<tam;i++)
      {
                       if(v[i]>0)
                       {
                                 printf("%d\t",v[i]);
                                 }
      }
      getch();
      return 0;
      }
