/*Crie um algoritmo que leia dia, m�s e ano, e indique se formam uma data
v�lida.*/
#include <stdio.h>
#include <locale.h>
//----------------------//
int main(){
  setlocale(LC_ALL,"Portuguese");
    float dia, mes, ano;
//----------------------//
printf("Dia (DD):\n");
  scanf("%f", &dia);
printf("M�s (MM):\n");
  scanf("%f", &mes);
printf("Ano (AAAA):\n");
  scanf("%f",&ano);
printf("Data:%g",dia);printf("/%g",mes);printf("/%g\n", ano);
if (dia > 32) {
  printf("Dia invalido!\n");
  } else if (dia < 1) {
    printf("Dia Invalido!\n");
    }
      else if (mes > 12){
        printf(" M�s Invalido!\n");
        }
        else if (mes < 0){
          printf("M�s Invalido!");
        }
        else if (mes == 02 && dia >= 29){
          printf("Data Invalida!");
        }

}
