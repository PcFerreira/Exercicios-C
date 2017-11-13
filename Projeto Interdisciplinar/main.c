  #include"biblioteca_1.h"
  /////////////////////////////////////////////////////////
  struct dados{
    char nome[50];
    char telefone[15];
    char email[70];
    char cnpj[20];
    char manutencao[3];
    char criacao[3];
    char lojav1[3];
    char lojav2[3];
    char seo[3];
  };
  /////////////////////////////////////////////////////////
  int chaves; //Variavel para armazenar a quantidade de linhas do arquivo dataKey
  int fileC;
  char fileNameC[30];
  int KeyCX(int code){ //Escreve uma nova linha no arquivo dataKey
    FILE *arquivo;
    arquivo = fopen("dataKey.txt", "a");
    fprintf(arquivo, "%d\n",code);
    fclose(arquivo);
  }
  /////////////////////////////////////////////////////////
  void KeyCY(){ //Abre o arquivo dataKey e conta a quantidade de linhas
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
  /////////////////////////////////////////////////////////
  void listarArquivosN(){ //conta a quantidade de arquivos na pasta data/
    DIR *dp;
    int i = 0;
    struct dirent *ep;
    dp = opendir ("data/");
    {
      while (ep = readdir(dp))
        i++;
      (void) closedir (dp);
    }
    fileC = i-2;;
  }
  /////////////////////////////////////////////////////////
  void listarArquivosP(){ //lista todos os aquivos na pasta data/
    DIR *dp;
    struct dirent*ep;
    dp = opendir ("data/");
      if (dp != NULL)
      {
        while (ep = readdir(dp))
            puts(ep->d_name);
            (void) closedir (dp);
      }
      separador();
    }
  /////////////////////////////////////////////////////////
  void abrirTodosArquivos(){
  int i,n;
  struct dados z;
  char fileOpenAUX[30];
  char fileOpenAUX2[30];
  FILE *data;
    for (i = 1; i <= chaves; i++) {
      setbuf(stdin, NULL);
    n=sprintf(fileOpenAUX, "data/Cadastro-%d", i);
      n=sprintf(fileOpenAUX2,"Cadastro : %d", i);
      if( access( fileOpenAUX, F_OK ) != -1 ) { //checa se o arquivo existe, se ele existir o abre
        data=fopen(fileOpenAUX,"rb");
        while(1)
        {
         fread(&z,sizeof(z),1,data);
         if(feof(data)!=0)
           break;
           printf("%s",fileOpenAUX2);
           printf("\nNome: %s\nTelefone: %s\nEmail: %s\nCNPJ: %s\nManutenção do site: %s\nCriação de Site: %s\nLoja virtual Simples: %s\nLoja virtual Avançada: %s\nSEO: %s",z.nome,z.telefone,z.email,z.cnpj,z.manutencao,z.criacao,z.lojav1,z.lojav2,z.seo);
            separador();
          setbuf(stdin, NULL);
        }
        fclose(data);
    }
    }
  }
  /////////////////////////////////////////////////////////
  void excluirPAdata(){
    char nomeArquivo[30];
    int excluirC,n;
    abrirTodosArquivos();
    if (fileC == 0) {
      printf("0 Cadastros encontrados!\n");
      separador();
      return;
    }
    printf("Digite o codigo do Cadastro para excluir: ");
    scanf("%d",&excluirC);
    n=sprintf(nomeArquivo, "data/Cadastro-%d", excluirC);
    remove(nomeArquivo);
    MessageBox(0,"Cadastro Excluido com sucesso!!\n Ok para voltar.","",0);
    }
  /////////////////////////////////////////////////////////
  void Editar(){
    FILE *data;
    struct dados z;
    int editarC,opcao,n;
    char nomeArquivo2[30];
    if (fileC == 0) {
      printf("0 Cadastros encontrados!\n");
      separador();
      return;
    }
    printf("Digite o CODIGO do Cadastro para editar: ");
    setbuf(stdin, NULL);
    scanf("%d",&editarC);
    n=sprintf(nomeArquivo2, "data/Cadastro-%d", editarC);
    system("cls");
    do {
  /////////////////////////////////////////////////////////
      printalogo();
      separador();
      data=fopen(nomeArquivo2,"r+b");
      setbuf(stdin, NULL);
      while(1){fread(&z,sizeof(z),1,data);
       if(feof(data)!=0)
        break;
         printf("\nNome: %s\nTelefone: %s\nEmail: %s\nCNPJ: %s\nManutenção do site: %s\nCriação de Site: %s\nLoja virtual Simples: %s\nLoja virtual Avançada: %s\nSEO: %s",z.nome,z.telefone,z.email,z.cnpj,z.manutencao,z.criacao,z.lojav1,z.lojav2,z.seo);
      }
  /////////////////////////////////////////////////////////
        rewind(data);
        menu2();
        separador();
        printf("Editar: ");
        setbuf(stdin, NULL);
        scanf("%d", &opcao);
        switch (opcao) {
  /////////////////////////////////////////////////////////
        case 1:
        setbuf(stdin, NULL);
        printf("Nome da empresa: ");
        scanf("%[^\n]s", z.nome);
        fwrite(&z, sizeof(z),1,data);
        MessageBox(0,"Nome alterado com sucesso!","",0);
        break;
  /////////////////////////////////////////////////////////
        case 2:
        setbuf(stdin, NULL);
        printf("Digite o telefone(DDD+numero): ");///falta validação
        setbuf(stdin, NULL);
        scanf("%s",z.telefone);
        MessageBox(0,"Telefone alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 3:
        setbuf(stdin, NULL);
        printf("Digite o Email: ");
        setbuf(stdin, NULL);
        scanf("%s",z.email);
        MessageBox(0,"Email alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 4:
        setbuf(stdin, NULL);
        printf("Digite o CNPJ: ");///falta validação
        setbuf(stdin, NULL);
        scanf("%s",z.cnpj);
        MessageBox(0,"CNPJ alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 5:
        setbuf(stdin, NULL);
        printf("Manutenção do site? [s/n]: ");
        setbuf(stdin, NULL);
        scanf("%s",z.manutencao);
        MessageBox(0,"Manutenção alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 6:
        setbuf(stdin, NULL);
        printf("Criação de Site? [s/n]: ");
        setbuf(stdin, NULL);
        scanf("%s",z.criacao);
        MessageBox(0,"Criação alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 7:
        setbuf(stdin, NULL);
        printf("Loja virtual Simples? [s/n]: ");
        setbuf(stdin, NULL);
          scanf("%s",z.lojav1);
        MessageBox(0,"Loja virtua simples alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 8:
        setbuf(stdin, NULL);
        printf("Loja virtual Avançada? [s/n]: ");
        setbuf(stdin, NULL);
          scanf("%s",z.lojav2);
        MessageBox(0,"Loja virtual avançada alterada com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 9:
        printf("SEO? [s/n]: ");
        setbuf(stdin, NULL);
        scanf("%s",z.seo);
        MessageBox(0,"SEO alterado com sucesso!","",0);
        fwrite(&z, sizeof(z),1,data);
        break;
  /////////////////////////////////////////////////////////
        case 10:
        setbuf(stdin, NULL);
        printf("Cancelado!\n");
        system("pause");
        break;
  /////////////////////////////////////////////////////////
        default:
          printf("\n\nOpcao invalida! Tente Novamente!\n\n");
          setbuf(stdin, NULL);
          system("pause");
  /////////////////////////////////////////////////////////
      }
        setbuf(stdin, NULL);
        fclose(data);
        system("cls");

    } while(opcao != 10);
  }
  void cadastrar(){
    FILE *data;
    FILE *data2;
    struct dados x;//dados para cadastro
    int opcao,n, i,code,len;
    char fileNameC[30];
    char nomeAUX[50];
    char telefoneAUX[15];
    char emailA[70];
    char cnpjAUX1[20];
    char manutAUX1[2];
    char criacaoAUX[2];
    char lojav1AUX[2];
    char lojav2AUX[2];
    char seoAUX[2];
    system("cls");
    KeyCY();
    listarArquivosN();
    code = chaves+1; //Adiciona 1 a quantidade de linhas do arquivo datakey
    n=sprintf(fileNameC, "data/Cadastro-%d", code); // gera um novo nome de arquivo para armazenar o proximo cadastro
    printalogo();// exibe o logo(em biblioteca_1.h)
    data=fopen(fileNameC, "wb");
    separador();
    setbuf(stdin, NULL);
    printf("Cadastrar Nova Empresa: ");
    separador();
    printf("Nome da empresa: ");
    scanf("%[^\n]s", nomeAUX);
    while (nomeAUX[0] == '\0') {
      setbuf(stdin, NULL);
      printf("\nNão é Permitido Deixar Campos em Branco\n");
      printf("Por Favor Insira um Nome.\n");
      printf("Nome da empresa: ");
      scanf("%[^\n]s", nomeAUX);
    }
    setbuf(stdin, NULL);
    separador();
/////////////////////////////////////////////////////
        setbuf(stdin, NULL);
        printf("Digite o CNPJ: ");
        scanf("%s", cnpjAUX1);
        len = strlen(cnpjAUX1);
        setbuf(stdin, NULL);
        while (len != 13) {
          setbuf(stdin, NULL);
          printf("Por Favor Insira um CNPJ valido!!\n");
          printf("Digite o CNPJ: ");
          scanf("%s", cnpjAUX1);
          len = strlen(cnpjAUX1);
        }
        setbuf(stdin, NULL);
        separador();
/////////////////////////////////////////////////////
    printf("Digite o telefone(DDD+numero/sem espaços): \n");
      scanf("%[^\n]s", telefoneAUX);
      while (telefoneAUX[0] == '\0') {
        setbuf(stdin, NULL);
        printf("\nNão é Permitido Deixar Campos em Branco\n");
        printf("Por Favor Insira um Telefone.\n");
        printf("Digite o telefone(DDD+numero): \n");
        scanf("%[^\n]s", telefoneAUX);
      }
      setbuf(stdin, NULL);
    separador();
/////////////////////////////////////////////////////
    setbuf(stdin, NULL);
    printf("Digite o Email: ");
    scanf("%[^\n]s", emailA);
    n=sprintf(x.email, "%s", emailA);
      while (emailA[0] == '\0') {
        setbuf(stdin, NULL);
        printf("\nNão é Permitido Deixar Campos em Branco\n");
        printf("Por Favor Insira um Email\n");
        printf("Digite o Email: ");
        scanf("%s", emailA);
      }
      setbuf(stdin, NULL);
      separador();
/////////////////////////////////////////////////////
      setbuf(stdin, NULL);
      printf("Manutenção do site? [s/n]: ");
      scanf("%s", manutAUX1);
      while (manutAUX1[0] == '\0') {
      setbuf(stdin, NULL);
      printf("\nNão é Permitido Deixar Campos em Branco\n");
      printf("Por Favor Insira apenas s/n\n");
      printf("Manutenção do site? [s/n]: ");
      scanf("%s", manutAUX1);
      }
      while ((manutAUX1[0] != 's') && (manutAUX1[0] != 'n')) {
      setbuf(stdin, NULL);
      printf("Por Favor Insira apenas s/n\n");
      printf("Manutenção do site? [s/n]: ");
      scanf("%s", manutAUX1);
      }
      separador();
/////////////////////////////////////////////////////
      setbuf(stdin, NULL);
      printf("Criação de Site? [s/n]: ");
      scanf("%s", criacaoAUX);
        while (criacaoAUX[0] == '\0') {
          setbuf(stdin, NULL);
          printf("\nNão é Permitido Deixar Campos em Branco\n");
          printf("Por Favor Insira apenas s/n\n");
          printf("Criação de Site? [s/n]: ");
          scanf("%s", criacaoAUX);
      }
      setbuf(stdin, NULL);
      while ((criacaoAUX[0] != 's') && (criacaoAUX[0] != 'n')) {
        setbuf(stdin, NULL);
        printf("Por Favor Insira apenas s/n\n");
        printf("Criação de Site? [s/n]: ");
        scanf("%s", criacaoAUX);
      }
      setbuf(stdin, NULL);
        separador();
/////////////////////////////////////////////////////
      setbuf(stdin, NULL);
      printf("Loja virtual Simples? [s/n]: ");
      scanf("%s", lojav1AUX);
        while (lojav1AUX[0] == '\0') {
          setbuf(stdin, NULL);
          printf("\nNão é Permitido Deixar Campos em Branco\n");
          printf("Por Favor Insira apenas s/n\n");
          printf("Loja virtual Simples? [s/n]: ");
          scanf("%s", lojav1AUX);
      }
      setbuf(stdin, NULL);
      while ((lojav1AUX[0] != 's') && (lojav1AUX[0] != 'n')) {
        setbuf(stdin, NULL);
        printf("Por Favor Insira apenas s/n\n");
        printf("Loja virtual Simples? [s/n]: ");
        scanf("%s", lojav1AUX);
      }
      setbuf(stdin, NULL);
        separador();
/////////////////////////////////////////////////////
      setbuf(stdin, NULL);
      printf("Loja virtual Avançada? [s/n]: ");
      scanf("%s", lojav2AUX);
        while (lojav2AUX[0] == '\0') {
          setbuf(stdin, NULL);
          printf("\nNão é Permitido Deixar Campos em Branco\n");
          printf("Por Favor Insira apenas s/n\n");
          printf("Loja virtual Avançada? [s/n]: ");
          scanf("%s", lojav2AUX);
      }
      setbuf(stdin, NULL);
      while ((lojav2AUX[0] != 's') && (lojav2AUX[0] != 'n')) {
        setbuf(stdin, NULL);
        printf("Por Favor Insira apenas s/n\n");
        printf("Loja virtual Avançada? [s/n]: ");
        scanf("%s", lojav2AUX);
      }
      setbuf(stdin, NULL);
        separador();
/////////////////////////////////////////////////////
      setbuf(stdin, NULL);
      printf("SEO? [s/n]: ");
      scanf("%s", seoAUX);
        while (seoAUX[0] == '\0') {
          setbuf(stdin, NULL);
          printf("\nNão é Permitido Deixar Campos em Branco\n");
          printf("Por Favor Insira apenas s/n\n");
          printf("SEO? [s/n]: ");
          scanf("%s", seoAUX);
      }
      setbuf(stdin, NULL);
      while ((seoAUX[0] != 's') && (seoAUX[0] != 'n')) {
        setbuf(stdin, NULL);
        printf("Por Favor Insira apenas s/n\n");
        printf("SEO? [s/n]: ");
        scanf("%s", seoAUX);
      }
      setbuf(stdin, NULL);
        separador();
/////////////////////////////////////////////////////
      n=sprintf(x.nome, "%s", nomeAUX);
      n=sprintf(x.telefone, "%s", telefoneAUX);
      n=sprintf(x.cnpj, "%s", cnpjAUX1);
      n=sprintf(x.manutencao, "%s", manutAUX1);
      n=sprintf(x.criacao, "%s", criacaoAUX);
      n=sprintf(x.lojav1, "%s", lojav1AUX);
      n=sprintf(x.lojav2, "%s", lojav2AUX);
      n=sprintf(x.seo, "%s", seoAUX);
    fwrite(&x, sizeof(x),1,data);
    fclose(data);
    data2=fopen("dataKey", "a");//abre o arquivo dataKey
    KeyCX(code);//grava a proxima linha no arquivo dataKey
    fclose(data2);
    separador();
    MessageBox(0,"Cadastro concluido com sucesso!!\n Ok para voltar.","",0);
    chaves+1;
    separador();
    setbuf(stdin, NULL);
    KeyCY();
  }
  /////////////////////////////////////////////////////////
  int main(){
    setlocale(LC_ALL, "Portuguese");//Definir localização
    KeyCY(); //
    listarArquivosN();
    int opcao;
  /////////////////////////////////////////////////////////
    do {
      system("cls");
      printalogo();
      separador();
      sep_menu_1();
      menu1(); //exibe as opcoes (em biblioteca_1.h)
      printf("\nDigite uma opção\n");
        scanf("%d", &opcao);
      system("cls");
  /////////////////////////////////////////////////////////
    switch (opcao) {
      case 1:
      printalogo();
      cadastrar();
      system("cls");
      break;
  /////////////////////////////////////////////////////
      case 2:
      system("cls");
      printalogo();
      separador();
      abrirTodosArquivos();
      setbuf(stdin, NULL);
      Editar();
      break;
  /////////////////////////////////////////////////////
      case 3:
      system("cls");
      printalogo();
      separador();
      sep_excluir();
      excluirPAdata();
      break;
  /////////////////////////////////////////////////////
      case 4:
      system("cls");
      printalogo();
      separador();
      sep_tod_cadas();
      abrirTodosArquivos();
      system("pause");
      break;
  /////////////////////////////////////////////////////
      case 5:
      system("cls");
      printalogo();
      separador();
      sep_tod_cadasCOD();
      listarArquivosP();
      printf("..\n");
      printf(".\n");
      system("pause");
      break;
  /////////////////////////////////////////////////////
      case 6:
      infoS();
      printf("Informações:\n");
      separador();
      printf("Quantidade de Registros no arquivo dataKey: %d\n",chaves);
      separador();
      printf("Quantidade de arquivos na pasta 'data': %d\n",fileC );
      separador();
      system("pause");
      printf("*Cada Cadastro possui um codigo unico.\n");
      separador();
      break;
  ////////////////////////////////////////////////////
      case 7:
      printf("\n\nSaindo...\n\n");
      exit(0);
      break;
  ////////////////////////////////////////////////////
      default:
      printf("\n\nOpcao invalida! Tente Novamente!\n\n");
      system("pause");
    }
      } while(opcao!=9);
  /////////////////////////////////////////////////////////
      return 0;
  }
