//Desenvolva um sistema que leia uma tabela de um campeonato de futebol com 5
//times, o usuário deve entrar com o número de jogos, o número de vitórias, o
//número de empates e o saldo de gols de cada time, você então deve calcular os
//pontos ganhos por cada time (uma vitória vale 3 pontos, um empate vale 1 ponto e
//uma derrota vale 0 pontos) e no final imprimir a tabela completa (incluindo os
//pontos ganhos) e o nome do vencedor do campeonato.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int vitoria,empate,maiorPontuacao,vencedor,i,j,matriz[5][5];
	maiorPontuacao = 0 ;
	for(i = 0 ; i < 5; i++){
 			printf("Digite o numero de jogos do time %i\n",i + 1 );
 			scanf("%i", &matriz[i][1]);
 			printf("Digite o numero de vitorias do time %i\n",i + 1);
 			scanf("%i", &matriz[i][2]);
 			printf("Digite o numero de empates do time %i\n",i + 1);
 			scanf("%i", &matriz[i][3]);
 			printf("Digite o saldo de gols do time %i\n",i + 1);
 			scanf("%i", &matriz[i][4]);
	 }
	 for (i = 0 ; i < 5 ; i++){
      vitoria = 3 * matriz[i][2];
      empate =   matriz[i][3];
      matriz[i][5] = vitoria + empate;
   }

   for (i = 0 ; i < 5 ; i++){
      if (matriz[i][5] > maiorPontuacao){
         maiorPontuacao = matriz[i][5];
         vencedor = i;
      }
   }
   printf("Time                           : ");
   for (i = 0 ; i < 5 ; i++){
   	printf("%i ",i + 1);
   }
   printf("\nDigite o numero de jogos       : ");
   for (i = 0 ; i < 5 ; i++){
   	printf("%i ",matriz[i][1]);
   }
   printf("\nDigite o numero de vitorias    : ");
   for (i = 0 ; i < 5 ; i++){
   	printf("%i ",matriz[i][2]);
   }
   printf("\nDigite o numero de empates     : ");
   for (i = 0 ; i < 5 ; i++){
   	printf("%i ",matriz[i][3]);
   }
   printf("\nDigite o saldo de gols         : ");
   for (i = 0 ; i < 5 ; i++){
   	printf("%i ",matriz[i][4]);
   }
   printf("\nO time campeao foi o %i e fez %i pontos",vencedor + 1,maiorPontuacao);
   return 0;
}
