#include <stdlib.h>
#include <stdio.h>

struct lista {
   int dato;
   struct lista *sig;
};


int main (void)
{
	struct lista *primero,*nuevo,*actual,*anterior,*temp;
	int valor, eleccion=0;
	primero=NULL; // ORIGINALMENTE NO HAY NINGUN NODO
	printf("\n 1-Carga datos \n 2-Imprime lista \n 3-Borrar datos\n 4-Salir\n");
	scanf("%d",&eleccion);
while(eleccion!=4)
{	
	switch(eleccion)
	{
       case 1:
	  nuevo = new(lista);
	  if(nuevo!=NULL) //VERIFICAMOS QUE HAY MEMORIA DISPONIBLE
	   {
		   printf("Ingrese un valor a la lista\n\n");
		   scanf("%d",&valor);
		   (*nuevo).dato=valor;
		   (*nuevo).sig=NULL;
		   anterior=NULL;
		   actual=primero;
		   while((actual!=NULL)&&((*nuevo).dato>(*actual).dato)) //BUSCAMOS LA POSICION DEL NUEVO NODO
		   {
				anterior=actual;
				actual=(*actual).sig;
		   }
		   if(anterior==NULL) //ESTE ES EL CASO EN QUE NUNCA ENTRO AL WHILE (INSERTA AL PRINCIPIO DE LA LISTA)
		   {
			   (*nuevo).sig=primero;
			   primero=nuevo;	
		   }
		   else //EN ESTE CASO EL NODO IRA ENTRE LOS PUNTEROS ANTERIOR Y ACTUAL
		   {	(*anterior).sig=nuevo;
				(*nuevo).sig=actual;
		   }
		 }
		 else
		 {
			 printf("No hay memoria libre");
	     }
	     	break;
	    
	  case 2:
	   actual=primero;
	   while(actual!=NULL)
	    {
			printf(" %d ",(*actual).dato);
			actual=(*actual).sig;
		}
		  break;
		  
	    case 3:
	        
		    if(primero==NULL)
		     printf("La lista esta vacia\n\n");
		       else 
		        {
					printf("Ingrese el valor a borrar\n\n");
					scanf("%d",&valor);
					if(valor==(*primero).dato)
					 {
						 temp=primero;
						 primero=(*primero).sig;
						 free(temp);
					 }
					 else
					  {
						  anterior=primero;
						  actual=(*primero).sig;
						  while((actual!=NULL)&&((*actual).dato!=valor))
						   {
							   anterior=actual;
							   actual=(*actual).sig;
							}
							
						   if(actual!=NULL)
						    {
								temp=actual;
								(*anterior).sig=(*actual).sig;
								free(temp);
							}
							else
							printf("\nEl valor no esta en la lista\n\n");
					}
						
					}
		   break;
		   
		case 4:
		  eleccion = 4;
		   break;     
	}
    printf("\n 1-Carga datos \n 2-Imprime lista \n 3-Borrar datos\n  4-Salir\n");
	scanf("%d",&eleccion);
}
return(0);    
}
