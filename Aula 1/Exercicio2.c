/*Escreva um programa que lê quatro notas bimestrais e imprime a média
delas.*/
#include <stdio.h>
  int main() {
    int n1, n2, n3, n4;
    printf("Digite a primeira nota:" );
      scanf("%i",&n1 );

    printf("Digite a segunda nota:" );
      scanf("%i",&n2 );

    printf("Digite a terceira nota:" );
      scanf("%i",&n3 );

    printf("Digite a quarta nota:" );
      scanf("%i",&n4 );

    printf("A media e: %i",(n1+n2+n3+n4)/4);
return 0;
}
