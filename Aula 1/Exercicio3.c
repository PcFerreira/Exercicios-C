/*Escreva um programa que eleve um número ao quadrado e mostre o resultado
ao usuário.*/
#include <stdio.h>
#include <math.h>
int main() {
  int n1, res;
  printf("Digite o numero para elevar ao quadrado:" );
    scanf("%i",&n1 );
  printf(" = %lf", pow(n1,2));
  return(0);
}
