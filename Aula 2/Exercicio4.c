/*Escreva um programa para converter o crit�rio de avalia��o de alunos em
escolas americanas para o crit�rio utilizado em escolas brasileiras utilizando a
instru��o switch. Nas escolas brasileiras, a avalia��o dos alunos � reportada
por uma nota que varia de 0 a 10. Nas escolas americanas, a avalia��o dos
alunos � feita por conceito: A, B, C, D, ou F. */
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
