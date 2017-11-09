#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
void linhas1(int n);
void printalogo(){
  printf("  _       _   _ _ _ _____ _____  \n");
  printf(" | |_ _ _| |_| | | |   __| __  | \n");
  printf(" |   | | | . | | | |   __| __ -| \n");
  printf(" |_|_|___|___|_____|_____|_____| \n");
  printf("\n");
}
void separador(){
	printf("\n");
	printf("-------------------------------\n");

}
void sep_tod_cadas(){
		printf("------Todos os Cadastros:------\n\n");
}
void sep_menu_1(){
  printf("------------Menu---------------\n");
}
void menu1(){
  printf(" >Cadastros<.\n");
  printf("\n 	>1< - Novo Cadastro.");
  printf("\n 	>2< - Editar Cadastro.   - FAZER");//fazer
  printf("\n        >3< - Excluir Cadastro.    - FAZER\n");//fazer
  printf("\n >Pesquisar<.\n");
  printf("\n        >4< - Buscar Cadastro  - FAZER");//fazer
  printf("\n 	>5< - Exibir todos os Cadastros.");
  separador();
  printf("\n >6< - Informações e Instruções  - FAZER\n" );
  printf("\n >7< - Sair.\n");
}


#endif // BIBLIOTECA_H_INCLUDED
