#include <stdlib.h>
#include <stdio.h>

struct lista {
   int dato;
   struct lista *sig;
   struct lista *anterior;
};

int main (void)
{
	struct lista *primero,*nuevo,*ultimo,*actual,*ant;
	int i,valor, eleccion=0;
//	int vector[5]={1,2,0,4,3};
	primero=nuevo=ultimo=actual=ant=NULL; // ORIGINALMENTE NO HAY NINGUN NODO
	printf("\n 1-Carga datos \n 2-Imprime lista para una lado \n 3-Imprime lista para el otro\n 4-Salir\n");
	scanf("%d",&eleccion);
while(eleccion!=4)
{	
	switch(eleccion)
	{
       case 1: 

	       for(i=0;i<6;i++)
	        {
		     nuevo=new(lista);	 
	 		 scanf("%d",&valor);
	 		 (*nuevo).dato=valor;
	           if(primero==NULL) //NO HAY NODOS, POR LO TANTO VA AL PRINCIPIO
	              {
					  
					  (*nuevo).anterior=NULL; 
					  (*nuevo).sig=NULL;
					  (*nuevo).dato=valor;
					  ultimo=primero=nuevo;
					 
				  }
				else
				  {  
					  
					  if(valor<(*primero).dato) // EL NUEVO NODO VA AL PRINCIPIO
					   {
						   
						   (*primero).anterior=nuevo;
						   (*nuevo).sig=primero;
						   (*nuevo).anterior=NULL;
						   primero=nuevo;
					   }
					else {	   
					   if(valor>(*ultimo).dato) //EL NODO VA AL FINAL DE LA LISTA
					       {
							   
							   (*ultimo).sig=nuevo;
						       (*nuevo).anterior=ultimo;
						       (*nuevo).sig=NULL;
						       ultimo=nuevo;
						      
					       } 
					       else //EL NODO VA AL MEDIO
					       { 
							   
							   actual=primero;
							   while(valor>(*actual).dato)
							   {
								ant=actual;
							    actual=(*actual).sig;
							    }
							    
							    (*ant).sig=nuevo;
							    (*nuevo).anterior=ant;
							    (*nuevo).sig=actual;
							    (*actual).anterior=nuevo;
							    
					       }
					      } 
	          }//FIN DE IF DE PRIMERO=NULL
	}    
	    
	
				    
		  break;					    
		  
		  case 2:              printf("Recorrido para un lado\n\n");
		                       actual=primero;
							   while(actual!=NULL)
							    {
									printf("%d ",(*actual).dato);
							        actual=(*actual).sig;
							     }
							     
							     break;
		 case 3:              printf("Recorrido para el otro lado\n\n");
		                       actual=ultimo;
							   while(actual!=NULL)
							    {
									printf("%d ",(*actual).dato);
							        actual=(*actual).anterior;
							     }
							     
							     break;
		 case 4:
		  eleccion=4;
		  break;
 }//FIN DE SWHITCH
    printf("\n 1-Carga datos \n 2-Imprime lista para una lado \n 3-Imprime lista para el otro\n 4-Salir\n");
	scanf("%d",&eleccion);
	
}//FIN DE WHILE

return(0);
}
