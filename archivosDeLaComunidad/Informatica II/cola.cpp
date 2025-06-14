#include <stdlib.h>
#include <stdio.h>

struct cola {
   int dato;
   struct cola *sig;
};


int main (void)
{
	struct cola *cabeza,*nuevo,*actual,*temp,*talon;
	int valor, eleccion=0;
	cabeza=actual=temp=talon=NULL; // ORIGINALMENTE NO HAY NINGUN NODO
	printf("\n 1-Carga datos \n 2-Imprime cola \n 3-Borrar nodo\n 4-Salir\n");
	scanf("%d",&eleccion);
while(eleccion!=4)
{	
	switch(eleccion)
	{
       case 1:
	   nuevo = new(cola);
	  if(nuevo!=NULL)
	   {
		   printf("\nIngresar Dato\n\n");
		   scanf("%d",&valor);
		   (*nuevo).sig=NULL;
		   (*nuevo).dato=valor;
		   
		   if(cabeza==NULL){
				 cabeza=nuevo;
				 talon=nuevo;}
		   else
		      {
				  (*talon).sig=nuevo;
				  talon=nuevo;
			  }
		   }	 
	 	else
		 printf("MEMORIA INSUFICIENTE");
		break;
		 
		 case 2:
		    actual=cabeza;
          while(actual!=NULL)
          {
			  printf(" %d ",(*actual).dato);
			  actual=(*actual).sig;
			}
		   
		 break;
		   
		   			case 4:
			 eleccion =4;
		     break;	 
		case 3:
			 
			 if(cabeza==NULL)
			  printf("la lista esta vacia/n/n");
			   else
			   {
				   temp=cabeza;
				   cabeza=(*cabeza).sig;
				   free(temp);
				   }
			 break;
			 
    
}
printf("\n 1-Carga datos \n 2-Imprime cola \n 3-Borrar nodo\n 4-Salir\n");
	scanf("%d",&eleccion);
}
return(0);
}	   			  
