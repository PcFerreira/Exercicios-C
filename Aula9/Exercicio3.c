//A s�rie de Fibonacci � formada pela sequ�ncia 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
//..., ou seja, os dois primeiros valores de s�rie s�o iguais a um e os
//subsequentes s�o iguais a soma dos dois anteriores. Crie um programa em C
//que calcule a sequ�ncia de Fibonacci at� uma determinada posi��o.
#include <stdio.h>
#include <stdlib.h>
int fib (int n){
	if (n == 0)

	return 0;
	else if (n == 1)
		return 1;
	else
		return (fib(n -1) + fib (n -2));
	}
int main (){
	int result, p = 0, i;
	fflush (stdin);
	printf ("Digite o numero: ");
	scanf ("%d", &p);
	for (i = 0; i <= p; i++){
		printf ("%i", fib(i));
	}
	return 0;
}
