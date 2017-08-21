/*Crie um algoritmo para calcular o fatorial de um número digitado pelo usuário.*/
#include <stdio.h>
int main() {
  int numero, resultado = 1, i = 1;
    printf("Digite um numero: \n");
      scanf("%i", &numero );
      for (i = 1; i <= numero; i++) {
        resultado = resultado * i;
      }
      printf("%i",resultado );

  return 0;
}
