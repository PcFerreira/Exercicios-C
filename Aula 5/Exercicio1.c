//Leia uma matriz 6 x 6 e some todos os valores desta matriz,
// imprimindo ao final o total
#include <stdio.h>
int main() {
    int l, c, soma;
    int valor[6][6];

      for (l = 0; l <6; l++){
        for(c = 0; c <6; c++){
          printf("Digite um valor para a posicao (%i x %i):\n",l+1,c+1 );
          scanf("%i", &valor[l][c]);
          soma = soma + valor[l][c];
        }
      }

      for (l = 0; l < 6; l++){
        for(c = 0; c < 6; c++){
          printf("%i ",valor[l][c]);
        }
        printf("\n");
      }
      printf("\n\n");
      printf("O resultado da soma é: %i",soma );
  return 0;
}
