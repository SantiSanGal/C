#include <stdio.h>
int capturar();

int main()
{
	printf(":c");
	if(primo(capturar()))
	{
		printf("el numero es primo");
	}else
	{
		printf("el numero no es primo");
	}
	getchar();
	return 0;
}

int capturar()
{
int n = 0;
	while(n<=1)
	{
	printf("Cargue un numero mayor o igual a 2:");
	scanf("%d",&n);
	getchar();
	}
return n;
}
int primo(int n)
{
	int contador=1, divisores=0;
	while(c<=n)
	{
		if(n%c==0)
		{
			printf("xd");
			divisores++;
		}
		contador++;
	}
if(divisores==2)
return 1;
else
return 0;
}
