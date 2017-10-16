//Leia uma matriz 6 x 6 e some todos os valores desta matriz utilizando um
//procedimento e imprimindo ao final o total.
#include <stdio.h>
#include <stdlib.h>
int soma(int m[6][6])
{
	int result,l,k;
	result = 0 ;
	for(l = 0 ; l <6 ; l++){
		for(k = 0 ; k < 6; k++){
			result += m[l][k];
		}
	}
	return result;
}

int main(){
	int j,matriz[6][6],i,resultado;

	for (i = 0 ; i < 6 ; i++){
		for(j = 0 ; j < 6 ; j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	resultado = soma(matriz);
	printf("A soma e: %i", resultado);
	return 0 ;
}
