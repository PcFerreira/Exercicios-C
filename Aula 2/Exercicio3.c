/*Escreva um programa para converter o crit�rio de avalia��o de alunos em
escolas brasileiras para o crit�rio utilizado em escolas americanas utilizando a
instru��o if. Nas escolas brasileiras, a avalia��o dos alunos � reportada por
uma nota que varia de 0 a 10. Nas escolas americanas, a avalia��o dos alunos
� feita por conceito: A, B, C, D, ou F. */
#include <stdio.h>
//----------------------//
int main (){
  float nota;
//----------------------//
  printf("Insira a Nota: " );
    scanf("%f", &nota);
//----------------------//
  if ( nota >= 9) {
    printf("Nota A\n");
    } else if (nota >= 8 && nota <= 8.9) {
      printf("Nota B\n");
      } else if (nota >= 7 && nota <= 7.9 ) {
        printf("Nota C\n");
        } else if (nota >= 5 && nota <= 6.9) {
          printf("Nota D\n");
        } else{
          printf("Nota F\n");
          }
  return 0;
}
