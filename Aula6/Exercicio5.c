//Desenvolva um sistema que recebe um n�mero que represente um m�s (de 1
//� 12) e imprima o nome deste m�s por extenso. Utilize uma fun��o.
#include <stdio.h>
#include <stdlib.h>

void mostrarmes(int m){
	switch(m){
		case 1:
			printf("Janeiro");break;
		case 2:
			printf("Fevereiro");break;
		case 3:
			printf("Marco");break;
		case 4:
			printf("Abril");break;
		case 5:
			printf("Maio");break;
		case 6:
			printf("Junho");break;
		case 7:
			printf("Julho");break;
		case 8:
			printf("Agosto");break;
		case 9:
			printf("Setembro");break;
		case 10:
			printf("Outubro");break;
		case 11:
			printf("Novembro");break;
		case 12:
			printf("Dezembro");break;
		default:
			printf("Mes invalido");break;
	}
}

int main(){
	int n;
	printf("Digite um numero para ver o mes em extenso:\n");
	scanf("%d", &n);
	mostrarmes(n);
	return 0;
}
