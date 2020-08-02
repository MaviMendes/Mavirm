/*linhas no plano
L(0)=1
L(n)=L(n-1)+n
L(n) = 1 + ((1 +n)*n)/2
*/
int LP (int n);
#include <stdio.h>

int main()
{
	int n;
	printf("Linhas:  "); scanf("%d%*c",&n);
	printf("Maximo de regioes: %d",LP(n));
	return 0;
}

int LP (int n)
{
	return 1 + ((1+n)*n)/2;
}
