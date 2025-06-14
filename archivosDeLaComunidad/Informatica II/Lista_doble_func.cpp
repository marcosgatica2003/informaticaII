#include <stdlib.h>
#include <stdio.h>

struct lista {
   int dato;
   struct lista *sig;
   struct lista *anterior;
};

typedef struct lista * ptro;

void cargar(ptro *,ptro *);
void recorrer(ptro);
void recorrer2(ptro);
void borrar(ptro *,ptro *);
int main (void)
{
	ptro primero,ultimo;
	int eleccion=0;
	primero=ultimo=NULL; // ORIGINALMENTE NO HAY NINGUN NODO
	printf("\n 1-Carga datos \n 2-Imprime lista para una lado \n 3-Imprime lista para el otro\n 4-Borra nodo\n, 5-Quit\n");
	scanf("%d",&eleccion);
while(eleccion!=5)
{	
	switch(eleccion)
	{
       case 1: 
              cargar(&primero,&ultimo);
		       break;					    
		  
	   case 2: printf("Recorrido para un lado\n\n");
	           recorrer(primero);
		       break;
	  case 3:  printf("Recorrido para el otro lado\n\n");
		       recorrer2(ultimo);		     
			   break;
	 case 4:   borrar(&primero,&ultimo);
		        break;
	 case 5:
		  eleccion=5;
		  break;
 }//FIN DE SWHITCH
    printf("\n 1-Carga datos \n 2-Imprime lista para una lado \n 3-Imprime lista para el otro\n 4-Borra nodo\n, 5-Quit\n");
	scanf("%d",&eleccion);
	
}//FIN DE WHILE

return(0);
}

void cargar (ptro *primero, ptro *ultimo)
{
	int valor;
	ptro actual,nuevo,ant;
	actual=ant=nuevo=NULL;
	nuevo=new(lista);	
	printf("Ingrese el valor\n"); 
	scanf("%d",&valor);
	(*nuevo).dato=valor;
	(*nuevo).sig=NULL;
	(*nuevo).anterior=NULL;
	if(*primero==NULL) //NO HAY NODOS, POR LO TANTO VA AL PRINCIPIO
	 {
		(*nuevo).anterior=NULL; 
		(*nuevo).sig=NULL;
		(*nuevo).dato=valor;
		*ultimo=*primero=nuevo;
	 }
	else
	 { 	if(valor<(*primero)->dato) // EL NUEVO NODO VA AL PRINCIPIO
		{
			(*primero)->anterior=nuevo;
			(*nuevo).sig=*primero;
			(*nuevo).anterior=NULL;
			*primero=nuevo;
		}
		else 
		{
			if(valor>(*ultimo)->dato) //EL NODO VA AL FINAL DE LA LISTA
			{
			  (*ultimo)->sig=nuevo;
			  (*nuevo).anterior=*ultimo;
			  (*nuevo).sig=NULL;
			  *ultimo=nuevo;
		    } 
		    else //EL NODO VA AL MEDIO
			{ 
			 actual=*primero;
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
	    

void recorrer(ptro primero)
{
	ptro actual,anterior;
	actual=anterior=NULL;
	actual=primero;
	if(primero==NULL)
	printf("Lista vacia\n\n");
	else
	{
		while(actual!=NULL)
		{
		 printf("%d ",(*actual).dato);
		 actual=(*actual).sig;
		}
	}
}
					
void recorrer2(ptro ultimo)
{
	ptro actual,anterior;
	actual=anterior=NULL;
	actual=ultimo;
	if(ultimo==NULL)
	printf("Lista vacia\n\n");
	else
	{
		while(actual!=NULL)
		{
		 printf("%d ",(*actual).dato);
		 actual=(*actual).anterior;
		}
	}
}
							     
void borrar(ptro *primero,ptro *ultimo)
{
	ptro temp,actual,anterior;
	int flag=0,dato;
	temp=actual=anterior=NULL;
if(*primero!=NULL)
{
	printf("Ingrese el dato a borrar\n\n");
	scanf("%d",&dato);
	if(dato==(*primero)->dato)
	{
		temp=*primero;
		*primero=(*primero)->sig;
		(*primero)->anterior=NULL;
		free(temp);
	}
	else
	{
		if(dato==(*ultimo)->dato)
		{
		  temp=*ultimo;
		  *ultimo=(*ultimo)->anterior;
		  (*ultimo)->sig=NULL;
	    }
	    else
	    { 
		  actual=*primero;
		  while((dato!=(*actual).dato)&&(actual!=NULL))
		  {
			anterior=actual;
			actual=(actual)->sig;
			
		  }
		    if(actual!=NULL)
		    {
			  temp=actual;
			  actual=(actual)->sig;
			  (anterior)->sig=actual;
			  (actual)->anterior=anterior;
			  free(temp);
		    }
		     else
		     printf("El valor no esta en la lista!!");
	     }
	}
}
else
printf("Lista vacia!!\n\n");			     
}

