#include <stdio.h>
/*pizza de steiner com recursão*/
int main(void)
{
	int pedacos (int x);
	int numero, resultado;
	 printf("Digite um numero de cortes na pizza:  ");
	 scanf("%d", &numero);
 resultado=pedacos(numero);
     printf("O numero maximo de pedacos em que a pizza pode ser dividida ao ser cortada por %d cortes eh %d\n",numero, resultado);
}
int pedacos (int x) 
{            
	int resultado;
	if (x==1)
{ resultado=2;}
 if (x==0)
 {resultado=1;}
 else {
	resultado= x+pedacos(x-1);}
	return resultado;
	}
	
	
    
 
	
