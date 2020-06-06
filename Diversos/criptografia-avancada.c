#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TM_CHAVE   7
#include <locale.h>
#define TM_TEXTO 100000
#include <stdbool.h>

/*
 * CRIPTOGRAFIA DE DADOS.
 * TRASMITE UM ARQUIVO COM UMA MENSAGEM CRIPTOGRAFA, E O ARQUIVO CRIPTOGRAFADO.
 * VAMOS TRABALHAR COM ARQUIVOS, FUNÇÕES, TABELA ASC2.

 * usando o conceito de criptografia assimétrica
*/

// lugar onde o texto a ser criptografado vai ser armazenado
char texto[TM_TEXTO];

//lugar onde vai ficar armazenada cada codigo asc do texto que for criptografado
int CodAscTexto[TM_TEXTO];

//a chave que vai ser a autenticação da criptografia
char chavePublica[TM_CHAVE] = "AbCzPQÇ";

//menu do programa
void menu();

//menu criptografar, onde o usario informa uma mensagem curta para criptografia, ou um texto, importado em um arquivo
void menu_criptografia();

//função que recebe um arqgumento, especificando que tipo de texto vai ser criptografado
void recebe_texto(char tipo[]);

//função que criptografa texto de uma mensagem ou arquivo
bool criptografa_texto();

//função que recebe um arquivo criptografado
void recebe_arquivo_criptografado();

//função que descriptografa um texto
bool descriptografar();

int main() {
 //para tradução de caracteres de acentos, tius, etc....
 setlocale(LC_ALL,"Portuguese");
 menu();
 return 0;
}

//implementação da função do menu
void menu() {
 //armazenara a opção escolhida pelo usuario no menu
 int opcao;
 //usando o conceito de logica de programação e verdade e falso, e tabela verdade, sabemos que 0 == falso e 1 == verdade
 //o while(enquanto), estiver com o valor 1 em seu argumento, ele vai ficar funcionando infinitamente, ate ter, um break para poder paralo,
 //o break no caso vai ser uma opção que o usuario escolher, isso e uma nova maneira de fazer menu em c.
 while(1) {
        //limpa a tela do terminal, e escreve o menu
        system("cls");
        printf("------------------------------");
        printf("\n Criptografia de Dados       |");
        printf("\n 1 - Criptografia de Mensagem|");
        printf("\n 2 - Receber Arquivo         |");
        printf("\n 3 - Sair                    |\n");
        printf("------------------------------\n");
        printf("\n Informe a opção desejada: ");
        scanf("%d",&opcao);
        //limpando o buffer do teclado(para os lixos de memoria não atrapalhar leitura)
        setbuf(stdin,NULL);
        switch(opcao) {
          case 1:
            system("cls");
            menu_criptografia();
            break;
          case 2:
            system("cls");
            recebe_arquivo_criptografado();
            break;
          case 3:
            printf("Encerrando Programa!\n");
            system("pause");
            exit(0);
            break;
          default:
                 printf("Opção Escolhida e Invalida!\n");
        }
 }
}


//implementando o menu
void menu_criptografia() {
    int opcao;
    printf("--------------------------------------");
    printf("\n Criptografia de Dados               |");
    printf("\n Criptografia de Mensagem ou arquivo |");
    printf("\n 1 - Digitar Mensagem                |");
    printf("\n 2 - importa arquivo de texto (txt)  |");
    printf("\n 3 - Voltar menu Principal           |\n");
    printf("--------------------------------------\n");
    printf("\n Informe a opção desejada: ");
    scanf("%d",&opcao);
    //limpando o buffer do teclado(para os lixos de memoria não atrapalhar leitura)
    setbuf(stdin,NULL);
        switch(opcao) {
          case 1:
            system("cls");
            recebe_texto("msg");
            break;
          case 2:
            system("cls");
            recebe_texto("arquivo");
            break;
          case 3:
            break;
          default:
                 printf("Opção Escolhida e Invalida!\n");
        }
}

//implementando
void recebe_texto(char tipo[]) {
 //variavel que vai armazenar o texto recebido por mensagem temporariamente
 char aux[TM_TEXTO];
 //para armazenar um caractere
 char pasta;
 //para armazenar o arquivo de texto
 FILE *arquivo;
 //armazenara toda palavra lida no arquivo
 char palavra[100];
 //verifico que tipo de texto vou trabalhar, mensagem ou arquivo
 if(strcmp(tipo,"msg") == 0) {
    //obtendo a entrada do texto via teclado
    printf("Digite o Texto: ");
    gets(aux);
    //verificando se o texto informado pelo usuario excedeu a qtd de caracteres maximos permitidos
    if(strlen(aux) <= TM_TEXTO) {
       //copinado o conteudo do texto que esta em aux, para o lugar de armazenamento original
       strcpy(texto,aux);
       printf("Mensagem Recebida Com Sucesso!\n");
       //verifica se o texto esta sendo criptografado
       if(criptografa_texto()) {
          printf("Mensagem Informada Esta Sendo Criptografada\n");
          //o texto informado esta sendo criptografado, e sera retornado para o usuario( o texto criptografado, em um arquivo.txt)
          printf("Pressione qualquer tecla para abrir o arquivo criptografado na pasta: ");
          scanf("%c",&pasta);
          //preparando o arquivo com o texo criptografado para ir para a pasta
          arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-usados-codigo-fonte\\criptografado.txt","w");
          if(arquivo == NULL) {
            //verifico se deu certo
            printf("Erro ao Criptografar o arquivo criptografado, na pasta\n");
          }else{
            //se deu certo mostro o texto criptografado no arquivo
            for(int i = 0; i < strlen(texto); i += 1) {
                fprintf(arquivo,"%d ",CodAscTexto[i]);
                //crie uma condição para quebrar de linha no arquivo a cada 10 codigos de mensagem criptografados forem escritos
                //a cada multiplo de 10(o indice for) vai quebra de linha no arquivo
                //if(i % 10 == 0)
                   //fprintf(arquivo,"%c",'\n');
            }
            //deu tudo certo fecha o arquivo
            fclose(arquivo);
          }

          //limpando o buffer do teclado(para os lixos de memoria não atrapalhar leitura)
          setbuf(stdin,NULL);
          printf("Abrindo arquivo na pasta!\n");
          system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-usados-codigo-fonte");
       }else{
            printf("Erro ao criptografar Mensagem\n");
            system("pause");
       }
    }else{
         printf("ERRO! a quantidade de texto informado execede o limite Definido\n");
         system("pause");
    }
 }else if(strcmp(tipo,"arquivo") ==  0) {
  //quando o usuaario escoher importar um arquivo de texto para poder ser criptografado ou descriptografado, vou mostrar uma sequencia de opções,
  //que ele pode usar para poder, fazer importação, porque na importação ele vai ter que me dar o arquivo relativo logo direto ou o caminho ate o arquivo
  // eu não vou deixar ele fazer isso, vou criar uma condição para ele so poder jogar o arquivo em uma pasta em que o usuario tenha acesso
  printf("------------------------------------------------------------------\n");
  printf("Istruções para poder importa um arquivo de texto                 |\n");
  printf("1 - renomeio o arquivo para 'nome-original.txt'                  |\n");
  printf("2 - copie o arquivo para a pasta que vai ser aberta a seguir     |\n");
  printf("3 - Feche a janela de arquivos que foi aberta e volte a aplicação|\n");
  printf("------------------------------------------------------------------\n");
  printf("Pressione qualquer tecla para abrir a pasta: ");
  scanf("%c",&pasta);
  //limpa o lixo de memoria
  setbuf(stdin,NULL);
  //abrindo a pasta que o usuario tem que colar o arquivo
  system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\importa-arquivo");
  printf("Importando arquivo\n");
  //verifico se realmente o usuario colou algum arquivo na pasta
  printf("Digite enter apos abrir a pasta: ");
  scanf("%c",&pasta);
  setbuf(stdin,NULL);
  //abrindo arquivo importado que esta dentro da pasta
  arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\importa-arquivo\\original.txt","r");
  //verificando se o arquivo existe
  if(arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    system("pause");
  }else{
       //se o arquivo existir vou ler todo o texto que possui dentro do arquivo
       // a função feof(le todo o conteudo do arquivo ate encontra a constante EOF - fim de arquivo)
       //a logica e ler todo o arquivo enquanto não encontrar o fim dele
       while(!(feof(arquivo))) {
             //função que le palavra do arquivo, e armazena no array
             fscanf(arquivo,"%s",palavra);
             //com o fscanf não le espaços, eu preciso criar um maneira de colocar os espaços entre as palavras
             //uso a função de concatena strings, concatena o espaço em aux
             strcat(aux," ");
             //depois concateno o aux(que e um espaço em branco na palavra)
             strcat(aux,palavra);

       }if(strlen(aux) <= TM_TEXTO) {
            //copinado o conteudo do texto que esta em aux, para o lugar de armazenamento original
            strcpy(texto,aux);
            printf("Recebendo Arquivo!\n");
            printf("Criptografando Arquivo!\n");
            //verifica se o texto esta sendo criptografado
            if(criptografa_texto()) {
                printf("Arquivo Esta Sendo Criptografado Com sucesso\n");
                printf("Pressione qualquer tecla para abrir o arquivo na pasta: ");
                scanf("%c",&pasta);
                //limpando o buffer do teclado(para os lixos de memoria não atrapalhar leitura)
                setbuf(stdin,NULL);
                printf("Abrindo arquivo na pasta!\n");
                system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-usados-codigo-fonte");
            }else{
                printf("Erro ao criptografar Arquivo\n");
                system("pause");
            }
        }else{
            printf("ERRO! a quantidade de texto informado no arquivo execede o limite\n");
            system("pause");
        }
  }
 }else {
  //caso não seja nenhum dos dois acima
 }
}


//implementando a função
//função que criptografa texto de uma mensagem ou arquivo
bool criptografa_texto() {
  int indice_texto = 0,chave_int;
  //obtendo o codigo ASC de cada caracter do texto informado para ser criptografado
  for(int i = 0; i < strlen(texto); i += 1)
      CodAscTexto[i] = texto[i]; //a conversão e automatica( do char para o int)
  //criptografando o texto(multiolicando o ASC de cada caracter o texto, por um int de uma chave publica que somente o algoritmo sabe)
  printf("\n--%d--\n",texto[0]);
  //vai gerar codigos criptografados para cada caractere sem repetição de codigos
  //vai pegar cada caractere da mensagem o codigo asc
  for(int j = 0; j < strlen(texto);) {
        //e vai multiplicar e armazenar no array criptografado para depois escrever no arquivo
      for(int i = 0; i < TM_CHAVE; i += 1) {
           chave_int = chavePublica[i];//pegando o int de cada caracter da chave
           CodAscTexto[j] = CodAscTexto[j] * chave_int;//multiplicando
           j += 1;
      }
  }
  printf("\n--%d--\n",CodAscTexto[0]);
  return true;
}


//implementando a função que vai receber um arquivo criptografado
void recebe_arquivo_criptografado() {
    char opcao;
    //variavel que vai armazenar o texto recebido via arquivo temporariamente
    char aux[TM_TEXTO];
    //para armazenar um caractere
    char pasta;
    //para armazenar o arquivo de texto
    FILE *arquivo;
   //armazenara toda palavra lida no arquivo
   char palavra[100];
   //quando o usuaario escoher importar um arquivo de texto para poder ser criptografado ou descriptografado, vou mostrar uma sequencia de opções,
  //que ele pode usar para poder, fazer importação, porque na importação ele vai ter que me dar o arquivo relativo logo direto ou o caminho ate o arquivo
  // eu não vou deixar ele fazer isso, vou criar uma condição para ele so poder jogar o arquivo em uma pasta em que o usuario tenha acesso
  printf("------------------------------------------------------------------\n");
  printf("Istruções para poder importa um arquivo de texto criptografado   |\n");
  printf("1 - renomeio o arquivo para 'criptografado.txt'                  |\n");
  printf("2 - copie o arquivo para a pasta que vai ser aberta a seguir     |\n");
  printf("3 - Feche a janela de arquivos que foi aberta e volte a aplicação|\n");
  printf("------------------------------------------------------------------\n");
  printf("Pressione qualquer tecla para abrir a pasta: ");
  scanf("%c",&pasta);
  //limpa o lixo de memoria
  setbuf(stdin,NULL);
  //abrindo a pasta que o usuario tem que colar o arquivo
  system("explorer C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-recebidos");
  printf("Importando arquivo\n");
  //verifico se realmente o usuario colou algum arquivo na pasta
  printf("Digite enter apos abrir a pasta: ");
  scanf("%c",&pasta);
  setbuf(stdin,NULL);
  //abrindo arquivo importado que esta dentro da pasta, e criando uma extesnão propria do programa, para o arquivo recebido para dar mais enfase no programa
  arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-recebidos\\criptografado.txt","r");
  if(arquivo == NULL) {
    printf("Arquivo Inexistente!\n");
    system("pause");
  }else{
      if(descriptografar()) {
         printf("Arquivo descriptografado com sucesso\n");
         system("pause");
         system("cls");
         printf("%s \n",texto);
         system("pause");
      }else{
           printf("Não foi possivel descriptografar o arquivo\n");
           system("pause");
      }
  }
}


//função que descriptografa um texto
bool descriptografar() {
 int indice_chave = 0;
 int indice_texto = 0;
 //variavel que armazenara os valores criptografados que estão no arquivo
 int valor;
 //variavel que armazena o arquivo
 FILE *arquivo;
 //abrindo o arquivo para verificar se tem a mensagem criptografada la dentro
 arquivo = fopen("C:\\Users\\SAMUE\\Documents\\Meus-Projetos-Git-locais-Remotos-2020\\Uri-judge-exercicios-resolvidos\\Exercicios-Resolvidos\\Diversos\\arquivos-recebidos\\criptografado.txt","r");
 //verifico se o arquivo existe
 if(arquivo == NULL) {
    return false;
 }else{
  //se o arquivo exisitir vou ler o todo o texto do arquivo
  while(!feof(arquivo)) {
       //lendo todo o conteudo do arquivo ate encotrar o fim dele, com a costante FEOF
       fscanf(arquivo,"%d",&valor);
       //agora como descriptografar a mensagem ?
       //a criptografia e, codigo asc do caracter * chave, certo ?
       //a  descriptografia e o processo inversso, isso e, o codigo gerado na criptografia / pela chave
       valor = valor / chavePublica[indice_chave];
       //a linha acima ja obtive o valor original do caracter(ASC), com o processo de descriptografia
       //agora e, converte esse valor para o caracter para mostrar a mensagem gerada, usando um typecast
       texto[indice_texto] = (char)valor;
       indice_texto += 1;
       if(indice_chave == TM_CHAVE - 1) {
         //significa que ja ultrapassou o tamanho da chave que serve para a multiplicação e divisão da criptografia
         //temos que zerar ela, para não ultrapassa seu limite
         indice_chave = 0;
       }else{
             indice_chave += 1;
       }
  }
  //fechando o arquivo
  fclose(arquivo);
  return true;
 }
}
