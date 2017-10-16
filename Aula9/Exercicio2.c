//Crie um programa que realize a multiplicação de dois números naturais,
//através de somas sucessivas utilizando recursividade.
#include <stdio.h>
int CalculaFatorial(int numero){
  if (numero == 1)
  return 1;
  else
    return(numero + CalculaFatorial(numero - 1));
}
 int main() {
   int num = 0;
   printf("Digite o numero:\n");
   scanf("%i", &num);

   int resultado = CalculaFatorial(num);
   printf("Resultado: %i",resultado);
 }
