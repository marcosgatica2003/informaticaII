#include <stdlib.h>
#include <stdio.h>

struct lista {
   int dato;
   struct lista *sig;
};

int main (void){
	struct lista *p,*actual,*anterior,*primero;
	int dato,i;
	p=actual=anterior=primero=NULL;
	for(i=0;i<5;i++)
	{
	p=new(lista);
	if(p!=NULL)
	{
		scanf("Ingrese un dato para agregar a la lista\n\n");
		scanf("%d",&dato);
		p->dato=dato;
		p->sig=NULL;
		if(primero==NULL)
		{
			primero =p;
		}
        else
        {
			if(dato<primero->dato)
			{
				p->sig=primero;
				primero = p;
		    }
		    else
		    {
				actual=primero;
				while((actual!=NULL)&&(dato>actual->dato))
				{
					anterior=actual;
					actual=actual->sig;
				}
			    anterior->sig=p;
			    p->sig=actual;
			 }
		 }
}
}
actual=primero;
while(actual!=NULL)
{
	printf(" %d ",actual->dato);
    actual=actual->sig;
 }
}
