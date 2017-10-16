//Escreva um programa que leia uma matriz de 4 linhas por 4 colunas, depois
//pergunte ao usuário um valor e multiplique todas as posições da matriz por este
//valor, no final imprima a matriz.
#include <stdio.h>
int main (){
  int l, c, mult;
  int matriz[4][4];

  for (l = 0; l < 4; l++){
    for (c = 0; c < 4; c++){
      printf("Digite um valor para a posicao (%i x %i):\n",l+1,c+1);
      scanf("%i", &matriz[l][c]);
    }
  }
  printf("Multiplicar as posicoes da matriz por:\n");
  scanf("%i",&mult);
    for (l = 0; l < 4; l++){
      for(c = 0; c <4; c++){
        matriz[l][c] = matriz[l][c] * mult;
      }
    }


      printf("\n\n");
    for (l = 0; l < 4 ; l++) {
      for(c = 0; c < 4; c++){
        printf("%i ",matriz[l][c]);
      }
      printf("\n\n");
    }
    return 0;
}
