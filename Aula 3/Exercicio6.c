/*Utilizando o comando while, modifique a calculadora feita na �ltima aula
para que enquanto o usu�rio n�o digitar um comando inv�lido ele possa fazer
quantas opera��es desejar.*/
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
  printf("Qual Opera��o voc� deseja realizar?\n");
  printf("____________________________\n");
  printf("a: Soma +\n");
  printf("b: Subtra��o -\n");
  printf("c: Multiplica��o *\n");
  printf("d: Divis�o /\n");
  printf("____________________________\n");
    scanf("  %c", &menu);
    printf("Primeiro Numero:\n");
      scanf("%f",&n1);
        printf("Segundo Numero:\n");
          scanf("%f",&n2);

    //----------------------//
    switch (menu) {
      case 'a':printf("Soma - Resultado: ");printf("%g\n",n1+n2 ); break;
      case 'b':printf("Subtra��o - Resultado: ");printf("%g\n",n1-n2); break;
      case 'c':printf("Multiplica��o - Resultado: "); printf("%g\n", n1*n2 ); break;
      case 'd':printf("Divis�o - Resultado: ");printf("%g\n",n1/n2 );  break;
      default: printf("Erro!"); break;
  }
    printf("Reiniciar?  Sim = 1/ N�o = 0\n");
      scanf("%i", &reset);
      if (reset == 1) {
        system("cls");
    }
  }
    return 0;
}
