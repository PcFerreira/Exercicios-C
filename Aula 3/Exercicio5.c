/*Crie um algoritmo para mostrar todos os n�meros de 0 at� o n�mero digitado pelo
usu�rio pulando N n�meros que tamb�m deve ser digitado pelo usu�rio.*/
#include <stdio.h>
int main (){
  int numero ,pulos, i = 0;
    printf("Digite um numero: \n");
      scanf("%i", &numero);
      printf("Digite a quantidade de pulos: \n");
        scanf("%i", &pulos);
        for (i = 0; i <= numero; i+=pulos) {
          printf("%i\n",i );
          
          }
return 0;
}
