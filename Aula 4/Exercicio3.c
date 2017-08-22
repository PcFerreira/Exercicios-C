//Crie um programa que leia 4 notas, mostre as notas e a média na tela.
#include <stdio.h>
  int main(){
      int i = 0, vetor[4], media = 0;
      for (i = 0; i < 4; i++) {
        printf("Digite a %i nota\n",i +1 );
          scanf("%i",&vetor[i]);
      }
        printf("\n\n");
        for (i = 0; i < 4; i++){
          printf("Nota %i: %i\n",i+1,vetor[i]);
          media = media + vetor[i];
        }
        printf("A media e: %i",media/4);

  }
