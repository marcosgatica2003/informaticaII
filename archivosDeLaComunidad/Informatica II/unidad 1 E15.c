#include<stdio.h>
#include<conio.h>

main()
{
    int m[5][3],i,j,promedio=0,suma=0,aplazados=0,aprobados=0,promediom1=0,promediom2=0,promediom3=0,materia1=0,materia2=0,materia3=0,n;
    printf("este ptrograma carga las notas de los alumnos y segun lo desee tira la informacion solictada\n");
    printf("cargue las notas de los alumnos:\n");
    for(i=0;i<5;i++)
    {
        printf("alumno numero %d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("materia n %d\t",j+1);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j]<4)
            {
                aplazados++;
            }
            if(j=0)
            {
                materia1=materia1+m[i][j];
                promediom1=materia1/5;
            }
            if(j=1)
            {
                materia2=materia2+m[i][j];
                promediom2=materia2/5;
            }
            if(j=2)
            {
                materia3=materia3+m[i][j];
                promediom3=materia3/5;
            }
            if(m[i][j]>7)
            {
                aprobados++;
            }
            suma=suma+m[i][j];
            promedio=suma/15;
        }
    }
    printf("ingrese lo deseado:\n 1-alumnos aplazados\t 2-promedio por materia\t 3-alumnos aprobados\t 4-promedio total\n ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\n",aplazados);
    }
    if(n==2)
    {
        printf("materia 1:%d\n",promediom1);
        printf("materia 2:%d\n",promediom2);
        printf("materia 3:%d\n",promediom3);
    }
    if(n==3)
    {
        printf("%d\n",aprobados);
    }
    if(n==4)
    {
        printf("%d\n",promedio);
    }
    getchar();
    return 0;
}
