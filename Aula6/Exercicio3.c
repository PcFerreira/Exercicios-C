//Escreva um programa que dado o valor dos dois catetos de um triangulo
//retângulo calcule sua hipotenusa utilizando uma função
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pit(float x, float y){
	float result;
	result = sqrt((x * x) + (y * y));
	return result;
}

int main(){
	float a,b,resultado;
	printf("Digite um cateto:");
	scanf("%f", &a);
	printf("Digite um cateto:");
	scanf("%f", &b);
	resultado = pit(a, b);
	printf("A hipotenusa vale e: %.2f", resultado);
	return 0;
	}
