#include<stdio.h>
#include<conio.h>


main()

{
      int v[10],v1[10],i,aux,n=10,n1=50,j=0;

      printf("este programa muestra los valores ingresados en el intervalo cerrado de 10 a 50 y a la vez numeros pares\n ingrese 10 numeros\n");
      printf("ingrese los valores del vector\n");
      for(i=0;i<10;i++)
      {
                        scanf("%d",&v[i]);
                        }
      for(i=0;i<10;i++)
      {
                        if((v[i]>n)&&(v[i]<n1))
                        {
                                                if(v[i]%2==0)
                                                {

                                                    v1[j]=v[i];
                                                    j++;
                                                            }
                        }

      }
      printf("los valores ingresados son:\n");
      for(i=0;i<10;i++)
      {
                      printf("%d\t",v[i]);
                      }
      printf("los valores rescatados son\n");
      for(i=0;i<j;i++)
      {
          {
              printf("%d\t",v1[i]);
          }
      }
      getch();
      return 0;
      }

