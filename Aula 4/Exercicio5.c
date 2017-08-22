//Escreva um algoritmo que leia 10 valores reais e mostre o maior e o menor valor digitado.
#include <stdio.h>
  int main (){
    int i = 0, vetor[10], maior = 0, menor = 0;
    for (i = 0; i <10; i++){vetor[i] = 0;}
      for (i = 0; i < 10; i++){
        printf("Digite o numero para a posicao %i \n",i );
        scanf("%i",&vetor[i]);
        menor = vetor[i];
        if (menor > maior) {
            maior = menor;
        }
      }
      for (i = 0; i < 10; i++) {
        if (menor > vetor[i]) {
          menor = vetor[i];
        }
      }
      printf("Numeros: \n\n");
        for  (i = 0; i <10; i++){printf("%i\040",vetor[i] );}
        printf("\n\n");
        printf("Maior: %i\n",maior);
        printf("Menor: %i\n",menor);
    return 0;
  }
