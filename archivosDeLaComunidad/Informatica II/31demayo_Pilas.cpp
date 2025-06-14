/*Implementar una pila dinamica de n enteros, ingresados por teclado. 
Recorrerlo y mostrar en pantalla sus contenidos y el promedio de sus contenidos.*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>

struct nodo {int dato;
             struct nodo * sig;};
             
int main ()
{
char op;
struct nodo *primero, *p;
primero = NULL;
float pro = 0;
int cont = 0; //det. cant. nodos
//genero 1er nodo

p = new (struct nodo);

if (!p)
   {printf ("No hay suficiente memoria\n");
    exit (1);}
    
else 
   {printf ("Ingresar entero positivo\n");
    scanf ("%d", &p->dato); //(*p).dato
    p->sig = NULL;
    primero = p;}
    
printf ("\nPara seguir ingresar S\n");
scanf ("%s", &op);

while ((op == 'S' || op == 's'))
      {p = new (struct nodo);


if (!p)
   {printf ("No hay memoria\n");
   exit (1);}

else 
   
   {printf ("Ingrese un entero positivo\n");
    scanf ("%d", &p->dato);
    p->sig = primero;
    primero = p;
    printf ("Para continuar ingrese S o s\n");
    scanf ("%s",&op);
    }
}
//cierro while

p = primero;
while (p != NULL)
      {/*printf ("%d", p->dato);*/
       cont = cont + 1;
       pro = pro + p->dato;
       p = p->sig;}
       
system ("cls");       
printf ("\nEl promedio de elemento es %.2f\n\n", pro/cont);
system ("PAUSE");
return 0;

}
