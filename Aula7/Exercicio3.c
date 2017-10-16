//Escreva uma função que receba um vetor de caracteres com n posições (que deve
//ser informado pelo usuário), uma letra e um outro vetor de caracteres do mesmo
//tamanho do primeiro. Esta função então devera copiar o texto do primeiro para o
//segundo vetor removendo quaisquer ocorrências da letra informada, e ao final
//imprimir o segundo vetor
#include <stdio.h>
#include<stdlib.h>
void apagar (char l, char* vet, char* vet2, int tm){
	int i;
	for(i = 0; i < tm; i++){
		if (l != vet[i]){
			vet2[i] = vet[i];
		}
		else
			vet2[i] = ' ';
	}
}

int main(){
	int tm, i;
	char l;
	printf ("Digite o tamanho do vetor: ");
	scanf ("%d", &tm);
	char vet [tm], vet2 [tm];
	printf ("\n");
	printf ("Digite o texto: ");
	scanf ("%s", vet);
	printf ("\n");
fflush(stdin);

	printf ("Qual letra deseja apagar?\n");
	scanf ("%c", &l);

	apagar (l, vet, vet2, tm);

	for (i = 0; i <tm; i++)
	{
		printf ("%c", vet2[i]);
	}
	return 0;
}
