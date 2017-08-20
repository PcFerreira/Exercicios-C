/*Escreva um programa que calcule a quantidade de dinheiro gasta por um
fumante. Entradas: o número de anos que ele fuma, o nº de cigarros fumados
por dia e o preço de uma carteira.*/
#include <stdio.h>
int main(){
int ano, numero, preco, res;

printf("Anos: ");
  scanf("%i",&ano);

printf("Quantidade de cigarros fumados por dia? ");
  scanf("%i",&numero);

printf("Preco medio de uma carteira? ");
  scanf("%i",&preco);

res = (ano * 365);
  res = (res * numero);
    res = ((res * preco) / 20);

printf("Valor gasto: %i", res );
}
