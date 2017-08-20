/*Escreva um programa para converter o critério de avaliação de alunos em
escolas americanas para o critério utilizado em escolas brasileiras utilizando a
instrução switch. Nas escolas brasileiras, a avaliação dos alunos é reportada
por uma nota que varia de 0 a 10. Nas escolas americanas, a avaliação dos
alunos é feita por conceito: A, B, C, D, ou F. */
#include <stdio.h>
//----------------------//
int main() {
  char nota;
//----------------------//
printf("Insira a Nota:\n");
  scanf("%c", &nota);
//----------------------//
switch (nota) {
  case 'A': printf("De 9.0 a 10.0\n");break;
  case 'B': printf("De 8.0 a 8.9\n");break;
  case 'C': printf("De 7.0 a 7.9\n");break;
  case 'D': printf("De 5.0 a 6.9\n");break;
  default: printf("Menor que 5.0\n");break;
}

  return 0;
}
