//Leia uma matriz 10 x 10 leia tamb�m um valor que o programa dever� buscar na
//matriz e, ao final escrever a localiza��o (linha e coluna) ou uma mensagem de
//'n�o encontrado'.
#include <stdio.h>
#include <stdlib.h>
int main(){
 	int linha, coluna, n, v, i, j;
	int matriz [10][10];
	v = 0;
	for (linha = 0; linha < 10; linha++){
		for (coluna = 0; coluna < 10; coluna++){
			printf ("Digite os valores (linha %d e coluna %d): ", linha, coluna);
			scanf ("%d", &matriz[linha][coluna]);
		}
	}
	printf ("\n");
	printf ("Digite um numero para procurar: ");
	scanf ("%d", &n);
	for (linha = 0; linha < 10; linha++){
		for (coluna = 0; coluna < 10; coluna++){
			if (n == matriz [linha][coluna]){
				v = 1;
				i = linha;
				j = coluna;
			}
		}
	}
	if (v){
		printf ("Linha e coluna: %d %d", i, j);}
	else{
		printf ("\nNao encontrado!");}
	return 0;
}
