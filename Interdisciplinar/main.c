#include"biblioteca_1.h"
struct dados{
  char nome[50];
  char telefone[15];
  char email[70];
  char cnpj[14];
  char descricao[255];
};
int chaves;
char fileNameC[30];
int KeyCX(int code){
  FILE *arquivo;
  arquivo = fopen("dataKey.txt", "a");
  fprintf(arquivo, "%d\n",code);
  fclose(arquivo);
}
void KeyCY(){
  FILE *arquivo;
  int j= 0;
  char c;
  arquivo = fopen("dataKey.txt", "r");
  for (c = getc(arquivo); c != EOF; c = getc(arquivo))
  if (c == '\n')
    j = j+1;
    fclose(arquivo);
    chaves = j;
}
int main(){
setlocale(LC_ALL, "Portuguese");
KeyCY();
FILE *data;
FILE *data2;
struct dados x;
int opcao,n, i,code;
char fileNameC[30];


do {

  KeyCY();
  code = chaves+1;
  n=sprintf(fileNameC, "data/data%d.bin", code);
  printalogo();
  separador();
  sep_menu_1();
  menu1();

  printf("%d\n",chaves);
  printf("\nDigite uma opção\n");
    scanf("%d", &opcao);
    system("cls");

switch (opcao) {
  case 1:
  data=fopen(fileNameC, "w+b");
  printalogo();
  separador();
  setbuf(stdin, NULL);
  printf("Cadastrar Nova Empresa: ");
  separador();
  printf("Nome da empresa: ");
    scanf("%s",x.nome);
  printf("Digite o telefone(DDD+numero): ");
    scanf("%s",x.telefone);
  printf("Digite o Email:");
    scanf("%s",x.email);
  printf("Digite o CNPJ(14 digitos): ");
    scanf("%s",x.cnpj);
  printf("Detalhes sobre o projeto: ");
    scanf("%s",x.descricao);
  fwrite(&x, sizeof(x),1,data);
    fclose(data);
  data2=fopen("dataKey", "a");
    KeyCX(code);
    fclose(data2);
    separador();
    MessageBox(0,"Cadastro concluido com sucesso!!","",1);
    system("pause");
    chaves+1;
    separador();
  setbuf(stdin, NULL);
  KeyCY();
  system("cls");
  break;







  case 2:
  data=fopen("DBdata", "rb");
  printf("Todos os cadastros");
  while (1) {
    fread(&x,sizeof(x),1,data);
    if(feof(data)!=0)
    break;
    printf("\n\nNome:%s\nTelefone:%s\nEmail:%s\nCNPJ:%s\nDetalhes:%s\n",x.nome,x.telefone,x.email,x.cnpj,x.descricao);
  }
  fclose(data);
  break;
  case 7:
      printf("\n\nSaindo...\n\n");
      system("pause");
      exit(0);
      break;
  default:
  printf("\n\nOpcao invalida! Tente Novamente!\n\n");
  system("pause");
}
} while(opcao!=9);
}
