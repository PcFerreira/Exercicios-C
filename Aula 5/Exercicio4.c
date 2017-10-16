//Escreva um programa que leia 4 notas de 5 alunos e calcule a média de cada um
//deles, ao final imprima o boletim dos alunos (no formato de tabela).
#include <stdio.h>

int main() {
	int l,c;
	int notas[5][5];
		for (l = 0; l < 5; l++){
			for(c = 0; c < 4; c++){
				printf("Digite a  nota do aluno %i x %i:\n",l+1,c+1);
				scanf("%i",&notas[l][c]);
				

			}
		}
		for (l = 0; l < 5; l++){
			for(c = 0; c < 3; c++){
				notas[0][5] = notas[0][5] + notas[0][c];
			}
		}
		printf("\n\n");

printf("--------N1");
				for(l = 1; l < 4; l++){
			printf("-N%i",l+1 );

				}
				printf("-Media");

		printf("\n\n");
		for (l = 0; l < 5; l++){
			printf("Aluno %i:", l+1 );
			for (c = 0; c < 5; c++){

			printf(" %i", notas[l][c]);
				}
				printf("\n");
			}

		printf("---------\n");
	return 0;
}
