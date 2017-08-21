/*Crie um algoritmo para mostrar todos os números pares entre 0 e o número
digitado pelo usuário.*/
#include <stdio.h>
int main (){
  int numero , i = 0;
    printf("Digite um numero: \n");
      scanf("%i", &numero);
        for (i = 0; i <= numero; i+=2) {
          printf("%i\n",i );
          }
return 0;
}
