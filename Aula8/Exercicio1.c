//Crie um programa que calcula a média de uma quantidade qualquer de
//números inteiros. O programa deve armazenas esses números em um vetor
//até o usuário digitar ‘-1’ (que deve ser desconsiderado). Depois, use esse
//vetor para mostrar todos os números e mostrar a média deles.
#include <stdio.h>
#include <stdlib.h>
int main (){
	int i = 0, nota = 0, tam = 0, conta = 1;
	int* p = (int*)malloc(tam*sizeof(int));

	printf ("Calculo de media \n \n");
	printf ("Digite as notas (para finalizar digite -1): \n");
	while (nota != -1){
		tam ++;
		p = (int*)realloc (p, tam*sizeof(int));
		scanf ("%d", &nota);
		p[i] = nota;
		i++;
	}
	for (i = 0; i < tam-1; i++){
		printf ("\nNumeros digitados: %d", p[i]);
		conta += p[i];
	}
	conta /= (tam-1);
	printf ("\nMedia: %d", conta);
	free (p);
	p = NULL;
	return 0;
}
