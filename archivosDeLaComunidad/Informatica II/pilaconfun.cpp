
#include <stdlib.h>
#include <stdio.h>

struct pila {
   int dato;
   struct pila *sig;
};


typedef struct pila* nodoptro;

void muestrapila(nodoptro);
void cargapila(nodoptro *);

int main (void)
{
	struct pila *primero,*temp;
	int eleccion=0;
	primero=NULL; // ORIGINALMENTE NO HAY NINGUN NODO
	printf("\n 1-Carga datos \n 2-Imprime pila \n 3-Borrar nodo\n 4-Salir\n");
	scanf("%d",&eleccion);
while(eleccion!=4)
{	
	switch(eleccion)
	{
       case 1:
       cargapila(&primero);
	   	break;
	    
	  case 2:
	      muestrapila(primero);
		  break;
		  
	    case 3:
	        
		    if(primero==NULL)
		     printf("La lista esta vacia\n\n");
		       else 
		        {
		    			 temp=primero;
						 primero=(*primero).sig;
						 free(temp);
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

void cargapila(nodoptro *primero)
{
	int valor;
	nodoptro nuevo = NULL;
  	
	nuevo = new(pila);
	  
	  if(nuevo!=NULL) //VERIFICAMOS QUE HAY MEMORIA DISPONIBLE
	   {
		   printf("Ingrese un valor a la pila\n\n");
		   scanf("%d",&valor);
		   nuevo->dato=valor;
		   nuevo->sig=*primero;
		   *primero=nuevo;
		}
}


void muestrapila(nodoptro actual)
{
	if(actual==NULL)
	printf("La lista esta vacia\n\n");
	else
    {
	while(actual!=NULL)
	{
		printf(" %d ",(*actual).dato);
		actual = (*actual).sig;
	}
}
}
	

