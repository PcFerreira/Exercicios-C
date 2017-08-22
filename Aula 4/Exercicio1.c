//Crie um algoritmo que leia um vetor de 5 números
//inteiros e mostre a soma de todos eles.
#include <stdio.h>
int main (){
  int i = 0, vetor[5], resultado = 0;
    for (i = 0; i < 5; i++) {
      printf("Digite o numero para a posicao %i: \n", i);
        scanf("%i", &vetor[i]);
        }
        printf("\n\n");
        for  (i = 0; i <5; i++){
          printf("%i\n",vetor[i] );
          resultado = resultado + vetor[i];
        }
        printf("\n\n");
        printf("Resultado:%i\n",resultado );
        return 0;
}
