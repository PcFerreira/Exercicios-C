//Um ponteiro pode ser usado para dizer a uma fun��o onde ela deve depositar o
//resultado de seus c�lculos. Escreva uma fun��o que converta minutos em horas-eminutos.
//A fun��o recebe um inteiro mnts e os endere�os de duas vari�veis
//inteiras, digamos h e m, e atribui valores a essas vari�veis realizando a convers�o.
//Ent�o a fun��o main deve perguntar ao usu�rio os minutos e imprimir os valores
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
