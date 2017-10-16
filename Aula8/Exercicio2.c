//Escreva um programa que lê um texto cujo tamanho é variável e o usuário
//pode digitar quantos caracteres quiser, digitando ‘.’ (ponto final) para
//finalizar a escrita. Ao final escreva na tela novamente o texto digitado.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (){
	int i = 0, tam = 0;
	char text;
	char* pont = (char*)malloc (sizeof(int));

printf ("Digite o texto (para finalizar digite .): ");
	while (text != '.'){
		tam ++;
		pont = (char*)realloc (pont, tam*sizeof(char));
		text = getch();
		if (text != '.'){
			pont [i] = text;
			i ++;
		}
		printf ("%c", text);
	}

	printf ("\n");
	for (i = 0; i < tam; i++){
		printf ("%c", pont[i]);
	}
	return 0;
}
