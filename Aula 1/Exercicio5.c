//Escreva um programa em C que pergunte as horas, minutos e segundos
//separadamente e o imprima no formato em 'horas:minutos:segundos'
#include <stdio.h>
int main(){
  int  Horas, Minutos, Segundos;
  printf("Horas: (HH) ");
    scanf("%i",&Horas);
  printf("Minutos: (MM) ");
    scanf("%i",&Minutos);
  printf("Segundos: (SS) ");
    scanf("%i",&Segundos);
  printf("%i",Horas);printf(":%i",Minutos );printf(":%i",Segundos );
}
