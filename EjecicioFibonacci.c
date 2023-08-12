/*
Cree un programa que permita al usuario la carga de un número, el cual determinara la posición del numero n de la sucesión de Fibonacci

Ej

Entrada: 8

Salida: 13  

Donde se tiene que la sucesion de fibonacci sigue de la siguiente manera:

0,1,1,2,3,5,8,13,21,34......
*/
#include <stdio.h>
int captura();

int main(){
	printf("%d",fibonacci(capturar()));
	return 0;
}

int capturar(){
	int n = 0;
		while(n<=1){
			printf("Ingrese un numero:");
			scanf("%d",&n);
			getchar();
		}
	return n;
}

int fibonacci(int n){
	int valorAnterior = 0;
	int valorActual = 1;
	int suma = 0;
	
	while(suma <= n){
		suma = valorActual + valorAnterior;
		valorAnterior = valorActual;
		valorActual = suma;
//		printf("secuencia: ", "%d",&suma);
	}
	
	return suma;
}
