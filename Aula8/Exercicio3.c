//Defina uma struct para um cadastro de pessoa, contendo Nome, Idade e Sexo,
//e utilizando esta struct permita que o usuário cadastre quantas pessoas
//desejar
#include <stdio.h>
#include <stdlib.h>
struct cadastro{
	char nome;
	int idade;
	char sexo;

};
float cadastro cad;

int main(){
	char ultimovalor,controle;
	int i = 0;
	cad *registro = (cad*)malloc(sizeof(cad));

	printf("Digite para serem cadastrados (Digite s para sair):\n");
	while(ultimovalor != 's'){
		registro = (cad*)realloc(registro,sizeof(cad));
		fflush(stdin);
		printf("\nDigite o nome: ");
		scanf("%s", &(registro+i) -> nome);

        printf("Digite o sexo: ");
        scanf("%s", &(registro+i) -> sexo);

        printf("Digite a idade: ");
        scanf("%s", &(registro+i) -> idade);

        printf("\nDeseja sair?: ");
        controle = getchar();
        scanf("%c",&ultimovalor);
        i++;
	}
	return 0 ;
}
