//Faça um programa que leia um vetor de 10 caracteres e
//mostre-as na ordem inversa ao que foram digitadas.
#include <stdio.h>
  int main (){
    int i = 0, vetor[10];
      for (i = 0; i < 10; i++) {
        printf("Digite o numero para a posicao %i: \n", i);
          scanf("%i", &vetor[i]);
        }
      printf("\n\n");

      for (i = 0; i < 10; i++){
        printf("%i\040 ",vetor[i]);
      }
      printf("\n");
      for (i = 9; i >= 0; i--){
          printf("%i\040 ",vetor[i]);
      }
      return 0;
            }
