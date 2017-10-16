//Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o
//resultado de seus cálculos. Escreva uma função que converta minutos em horas-eminutos.
//A função recebe um inteiro mnts e os endereços de duas variáveis
//inteiras, digamos h e m, e atribui valores a essas variáveis realizando a conversão.
//Então a função main deve perguntar ao usuário os minutos e imprimir os valores
//convertidos.
#include <stdio.h>
void converte (int totalMinutos, int *pH, int *pM){
  *pH = totalMinutos / 60;
  *pM = totalMinutos - (*pH * 60);
}
int main (){
  int minutos = 0, h = 0, m = 0;

  printf("Digite os minutos: \n");
  scanf("%i", &minutos);

  converte(minutos, &h, &m);

  printf("%i = > %i:%i", minutos, h , m);
}
