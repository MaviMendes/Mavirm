#include <stdio.h>
/*linhas no plano
L(0)=1
L(n)=L(n-1)+n*/
int regioes (int x);
int main()
{
	 int n;
	 printf("Numero de linhas:  ");
	 scanf("%d", &n);
     printf("\nLinhas: %d",n);
     printf("\nMaximo de regioes: %d",regioes(n));
     return 0;
}
int regioes (int x) 
{            
	int r=0;
	/*Caso base*/
    if (x==0)
    {
	r=1;
	}
    else 
	{
	r= x+ regioes(x-1);
	}
	/*O n�mero m�ximo de regi�es no plano s�o as regi�es que j� haviam anteriormente
	somado ao valor da linha/corte. Ex: Linha 3. Com duas linhas, haviam 4 regi�es. 4+3=7*/
	return r;
	}
	
	
    
 
	
