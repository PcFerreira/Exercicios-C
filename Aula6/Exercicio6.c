//Crie uma calculadora em C que utilize um procedimento para imprimir o menu, e
//uma função para cada operação. O usuário também deve ser capaz de realizar quantas
//operações quiser. A saída do programa deve ser compatível com a imagem:
#include <stdio.h>
#include <stdlib.h>
void mostramenu(void){
	printf("1 - Multiplicar\n");
	printf("2 - Adicao\n");
	printf("3 - Subtracao\n");
	printf("4 - Divisao\n");
}
float multiplica(float x, float y){
	return x * y;
}

float adiciona(float x, float y){
	return x + y;
}

float subtrai(float x, float y){
	return x - y;
}

float divide(float x, float y){
	return x / y;
}
int main(){
	float resultado,a,b;
	int x;
	mostramenu();
	scanf("%i", &x);
	switch(x)
	{
	case 1:
		printf("Digite um numero para multiplicar:\n ");
		scanf("%f", &a);
		printf("Digite outro numero:\n ");
		scanf("%f", &b);
		resultado = multiplica(a, b);
		printf("O resultado e: %.2f",resultado);	break;
	case 2:
		printf("Digite um numero para adicionar:\n ");
		scanf("%f", &a);
		printf("Digite um numero:\n ");
		scanf("%f", &b);
		resultado = adiciona(a,  b);
		printf("O resultado e: %.2f",resultado);				break;
	case 3:
		printf("Digite um numero para subtrair:\n ");
		scanf("%f", &a);
		printf("Digite um numero:\n ");
		scanf("%f", &b);
		resultado = subtrai(a,  b);
		printf("O resultado e: %.2f",resultado);	break;
	case 4:
		printf("Digite um numero para dividir:\n ");
		scanf("%f", &a);
		printf("Digite um numero:\n ");
		scanf("%f", &b);
		resultado = divide(a,  b);
		printf("O resultado e: %.2f",resultado);	break;
	default:
		printf("Operacao Inexistente.\n");
	}
}
