//Leia uma matriz 5 x 5 e escreva a localização (linha e a coluna) do maior e do
//menor valor.
#include <stdio.h>
#include <stdlib.h>
int main()
 {
 	int linha, coluna , menorl = 0, menorc = 0, maiorl = 0, maiorc = 0, maior = 0, menor;
	int matriz [5][5];
	menor = 999;
	for (linha = 0; linha < 5; linha++){
    for (coluna = 0; coluna < 5; coluna++){
			printf ("Digite os valores (linha %d e coluna %d):", linha, coluna);
			scanf ("%d", &matriz[linha][coluna]);
		}
	}

	for (linha = 0; linha < 5; linha++){
		for (coluna = 0; coluna < 5; coluna++){
			if (matriz[linha][coluna] > maior){
				maior = matriz[linha][coluna];
				maiorl = linha;
				maiorc = coluna;
			}
			if (matriz [linha][coluna] < menor){
				menor = matriz [linha][coluna];
				menorl = linha;
				menorc = coluna;
			}
		}
	}
  	printf ("\n");
		printf ("Maior numero - linha e coluna: %i %i", maiorl, maiorc);
		printf ("\n");
		printf ("Menor numero - linha e coluna: %i %i", menorl, menorc);
return 0;
}
