//Crie um algoritmo para calcular o fatorial de um número digitado pelo usuário
//utilizando uma função.
#include <stdio.h>
#include <stdlib.h>
float CalculaFatorial(float num){
	float fatorial = 1;
	int i;
	for( i = 1 ; i <= num; i ++)
	{
		 fatorial *= i;
    }
    return fatorial;
}
int main(){
 	float numero = 0 ,fat = 0;
 	printf("Digite o numero:\n");
 	scanf("%f", &numero);
 	fat = CalculaFatorial(numero);
 	printf("O fatorial e: %f", fat);
 	return 0;
	}
