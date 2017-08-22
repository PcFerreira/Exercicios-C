//Escreva um programa que pergunte ao usuário 10 números e armazene estes em um vetor. Em seguida, o
//usuário pode digitar um número e seu programa deve acusar se o número digitado está no vetor ou não. Se
//estiver, diga a posição que está. O programa somente deve finalizar quando o usuário digitar -1.
#include <stdio.h>
  int main (){
    int i = 0, vetor[10], comp = 0, chk = 0;
    for (i = 0; i < 10; i++) {
    printf("Digite o numero para a posicao: %i\n",i );
      scanf("%i",&vetor[i]);
    }
    for (i = 0; i < 10; i++) {
      printf("%i\040",vetor[i] );
    }
    while (comp !=(-1)) {
      chk = 0;
      printf("Verificar numero---(digite -1 para sair)\n");
      printf("Digite o numero:\n");
        scanf("%i",&comp);
      for (i = 0; i < 10; i++) {
        if (comp == vetor[i]) {
          printf("O numero esta presente na posicao %i\n", i );
        }
        if (comp != vetor[i]) {chk++;
        }
      }
      if (chk == 10) {
        printf("O numero nao esta presete no vetor\n");
      }
    }
      return 0;
    }
