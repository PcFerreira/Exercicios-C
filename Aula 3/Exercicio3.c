/*Crie um algoritmo para mostrar todos os n�meros pares entre 0 e o n�mero
digitado pelo usu�rio.*/
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
