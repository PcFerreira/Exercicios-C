/*Escreva uma calculadora em C, primeiramente deve-se perguntar qual a
operação que o usuário deseja utilizar (soma, subtração, multiplicação e
divisão) e depois o usuário deve inserir os dois números nos quais deseja
aplicar a operação, então o sistema deve mostrar a resposta.*/
#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"Portuguese");
  char menu;
  float n1,n2;
  //----------------------//
  printf("--------Calculadora---------\n");
  printf("Qual Operação você deseja realizar?\n");
  printf("____________________________\n");
  printf("A: Soma +\n");
  printf("B: Subtração -\n");
  printf("C: Multiplicação *\n");
  printf("D: Divisão /\n");
  printf("____________________________\n");
    scanf("%c", &menu);
    printf("Primeiro Numero:\n");
      scanf("%f",&n1);
        printf("Segundo Numero:\n");
          scanf("%f",&n2);
    //----------------------//
    switch (menu) {
      case 'A':printf("Soma - Resultado: ");printf("%g",n1+n2 ); break;
      case 'B':printf("Subtração - Resultado: ");printf("%g",n1-n2); break;
      case 'C':printf("Multiplicação - Resultado "); printf("%g", n1*n2 ); break;
      case 'D':printf("Divisão - Resultado: ");printf("%g",n1/n2 );  break;
      default: printf("Erro!"); break;
    //----------------------//
    return 0;
  }
}
