#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
/////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<sys/types.h>
#include"dirent.h"
#include <string.h>
/////////////////////////////////////////////////////////
void printalogo(){
  printf("   _       _   _ _ _ _____ _____  \n");
  printf("  | |_ _ _| |_| | | |   __| __  | \n");
  printf("  |   | | | . | | | |   __| __ -| \n");
  printf("  |_|_|___|___|_____|_____|_____| \n");
  printf("\n");
}
/////////////////////////////////////////////////////////
void separador(){
	printf("\n");
printf("+--------------------------------+\n" );
}
/////////////////////////////////////////////////////////
void sep_tod_cadasCOD(){
printf("+--Todos os Cadastros por codigo-+\n" );

}
/////////////////////////////////////////////////////////
void sep_tod_cadas(){
  printf("+-------Todos os Cadastros-------+\n" );
}
/////////////////////////////////////////////////////////
void sep_excluir(){
  printf("+-------------Excluir------------+\n" );
}
/////////////////////////////////////////////////////////
void sep_editar(){
  printf("+-------------Editar-------------+\n" );
}
/////////////////////////////////////////////////////////
void sep_menu_1(){
  printf("+-------------Menu---------------+\n" );
}
/////////////////////////////////////////////////////////
void menu1(){
printf("+--------------------------------+\n" );
printf("|Cadastros:                      |\n" );
printf("| <1> Novo Cadastro.             |\n" );
printf("|                                |\n" );
printf("| <2> Editar Cadastro.           |\n" );
printf("|                                |\n" );
printf("| <3> Excluir Cadastro.          |\n" );
printf("|                                |\n" );
printf("+--------------------------------+\n" );
printf("|Listar:                         |\n" );
printf("| <4> Listar Todos os Cadastros. |\n" );
printf("|                                |\n" );
printf("| <5> Listar Cadastros por Codigo|\n" );
printf("|                                |\n" );
printf("+--------------------------------+\n" );
printf("|Informações e Instruções:       |\n" );
printf("| <6> Sobre.                     |\n" );
printf("|                                |\n" );
printf("| <7> SAIR.                      |\n" );
printf("+--------------------------------+\n" );
}
/////////////////////////////////////////////////////////
void menu2(){
  separador();
  printf("1 - Nome / 2 - Telefone / 3 - Email \n");
  printf("4 - CNPJ / 5 - Serviço de Manutenção \n");
  printf("6 - Criação de Site / 7 - Loja Virtual Simples \n");
  printf("8 - Loja Virtual Avançada / 9 - SEO\n");
  printf("10 - VOLTAR\n");
}
/////////////////////////////////////////////////////////
void infoS(){
  printalogo();
  separador();
  printf("\nVersão 0.55\n");
  separador();
  printf("*Validações Removidas.\n");
}
/////////////////////////////////////////////////////////


#endif // BIBLIOTECA_H_INCLUDED
