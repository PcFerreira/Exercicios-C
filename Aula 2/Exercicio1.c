/*Escreva uma calculadora em C, primeiramente deve-se perguntar qual a
opera��o que o usu�rio deseja utilizar (soma, subtra��o, multiplica��o e
divis�o) e depois o usu�rio deve inserir os dois n�meros nos quais deseja
aplicar a opera��o, ent�o o sistema deve mostrar a resposta.*/
#include "stdio.h"
#include <locale.h>
int main() {
  setlocale(LC_ALL,"Portuguese");
  char menu;
  float n1,n2;
  //----------------------//
  printf("--------Calculadora---------\n");
  printf("Qual Opera��o voc� deseja realizar?\n");
  printf("____________________________\n");
  printf("A: Soma +\n");
  printf("B: Subtra��o -\n");
  printf("C: Multiplica��o *\n");
  printf("D: Divis�o /\n");
  printf("____________________________\n");
    scanf("%c", &menu);
    printf("Primeiro Numero:\n");
      scanf("%f",&n1);
        printf("Segundo Numero:\n");
          scanf("%f",&n2);
    //----------------------//
    switch (menu) {
      case 'A':printf("Soma - Resultado: ");printf("%g",n1+n2 ); break;
      case 'B':printf("Subtra��o - Resultado: ");printf("%g",n1-n2); break;
      case 'C':printf("Multiplica��o - Resultado "); printf("%g", n1*n2 ); break;
      case 'D':printf("Divis�o - Resultado: ");printf("%g",n1/n2 );  break;
      default: printf("Erro!"); break;
    //----------------------//
    return 0;
  }
}
