/*Crie um algoritmo para calcular o somat�rio de um n�mero digitado pelo usu�rio.*/
#include <stdio.h>
int main() {
  int numero, resultado = 0, i = 0;
    printf("Digite um numero: \n");
      scanf("%i", &numero );
      for (i = 1; i <= numero; i++) {
        resultado = resultado + i;
      }
      printf("%i",resultado );

  return 0;
}
