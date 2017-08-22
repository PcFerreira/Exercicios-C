//Desenvolva um sistema que leia 20 números inteiros e armazene-os em um vetor, depois separe e armazene os
//números pares em um outro vetor chamado PARES e os números impares em um outro vetor chamado IMPARES.
//Imprima os vetores PARES e IMPARES.
#include <stdio.h>
int main (){
  int i = 0,checagem = 0,vetor1[20],pares[20],impares[20];
    for (i = 0; i <20; i++){
      vetor1[i] = 0;
      pares[i] = 0;
      impares[i] = 0;
    }
    for (i = 0; i <20; i++){
        printf("Digite o numero para a posicao %i: \n",i );
          scanf("%i", &vetor1[i]);
          checagem = (vetor1[i]%2);
          if (checagem == 0) {
            pares[i] = vetor1[i];
          } else {
            impares[i] = vetor1[i];
          }
    }
  printf("\n\n");
  printf("Vetor: \n\n");
    for  (i = 0; i <20; i++){printf("%i\040",vetor1[i] );}
  printf("\n\n");
  printf("Pares:  \n\n");
    for  (i = 0; i <20; i++){if (pares[i] > 0) {
      printf("%i\040",pares[i]);}
    }
  printf("\n\n");
  printf("Impares:  \n\n");
    for  (i = 0; i <20; i++){if (impares[i] > 0) {
      printf("%i\040",impares[i]);}
    }
  return 0;
}
