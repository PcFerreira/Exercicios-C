//Escreva um algoritmo que leia 10 valores reais e mostre o maior e o menor
//valor digitado utilizando dois procedimentos, uma para encontrar o maior e
//um para encontrar o menor
#include <stdio.h>
#include <stdlib.h>
void  MaiorMenor(int *m){
	int j,r,maior,menor;
	maior = 9999 ;
	menor = 0;
	for (j = 0; j <10 ; j++)	{
		if( m[j] > maior){
			maior = m[j];
		}
    if(m[j] < menor){
			menor = m[j];
		}
	}
	printf("O maior é : %i", maior);
	printf("O menor é : %i", menor);
}

int main(){
	int vetor[10],i,resultado;
	printf("Digite 10 valores:");
	for (i = 0; i < 10; i ++){
		scanf("%i", &vetor[i]);
	}
	MaiorMenor(vetor);
	return 0;
}
