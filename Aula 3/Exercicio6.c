/*Utilizando o comando while, modifique a calculadora feita na última aula
para que enquanto o usuário não digitar um comando inválido ele possa fazer
quantas operações desejar.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"Portuguese");
  char menu;
  int reset = 1;
  float n1,n2;
  //----------------------//
  while (reset == 1){
  printf("--------Calculadora---------\n");
  printf("Qual Operação você deseja realizar?\n");
  printf("____________________________\n");
  printf("a: Soma +\n");
  printf("b: Subtração -\n");
  printf("c: Multiplicação *\n");
  printf("d: Divisão /\n");
  printf("____________________________\n");
    scanf("  %c", &menu);
    printf("Primeiro Numero:\n");
      scanf("%f",&n1);
        printf("Segundo Numero:\n");
          scanf("%f",&n2);

    //----------------------//
    switch (menu) {
      case 'a':printf("Soma - Resultado: ");printf("%g\n",n1+n2 ); break;
      case 'b':printf("Subtração - Resultado: ");printf("%g\n",n1-n2); break;
      case 'c':printf("Multiplicação - Resultado: "); printf("%g\n", n1*n2 ); break;
      case 'd':printf("Divisão - Resultado: ");printf("%g\n",n1/n2 );  break;
      default: printf("Erro!"); break;
  }
    printf("Reiniciar?  Sim = 1/ Não = 0\n");
      scanf("%i", &reset);
      if (reset == 1) {
        system("cls");
    }
  }
    return 0;
}
