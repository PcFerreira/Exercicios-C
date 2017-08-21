/*Crie um algoritmo para mostrar todos os números de 0 até o número digitado pelo
usuário pulando N números que também deve ser digitado pelo usuário.*/
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
