//Escreva uma função que receba um vetor inteiro v[n] e os endereços de duas
//variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor do
//menor elemento e o valor do maior elemento do vetor. A função main deve
//perguntar quantos números o usuário irá digitar e após a digitação de todos os
//números deve mostrar o min e max do vetor.

#include <stdio.h>
#include <stdlib.h>

void MaxMin (int* vet, int* min, int* max, int n){
	int i;
	*min = 10000000;
	*max = 1;
		for(i = 0;i < n; i++){
		if (vet[i] < *min){
			*min = vet[i];
		}
    if (vet[i] > *max){
			*max = vet[i];
		}
	}
}
int main() {
	int n;
	int max, min, i;
	i = 1;
	printf ("Digite quantos numeros ira digitar: ");
	scanf ("%d", &n);
	int vet[n];
	printf ("\n");
	for (i = 0 ; i < n;i++){
		printf ("Digite um numero: ");
		scanf ("%d", &vet[i]);
	}
	printf ("\n");
	MaxMin(&vet, &min, &max, n);
	printf ("Maior: %d", max);
	printf ("\n");
	printf ("Menor: %d", min);
	return 0;
}
