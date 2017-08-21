/*Escreva um programa que lê dois inteiros e imprime a soma deles.*/
#include <stdio.h>
int main() {
  int x, y, z;
  printf("Digite o primeiro numero: " );
    scanf("%i", &x);

  printf("Digite o segundo numero: " );
    scanf("%i", &y);
  z = x + y;
  printf("A soma é: %i", z);
  return 0;
}
