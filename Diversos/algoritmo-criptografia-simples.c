#include <stdio.h>
#include <string.h>

/*
 * SUBSTITUIÇÃO HOMÓFONA.
 * algoritmo que criptografa uma senha, uma criptografia simples, facil de ser quebrada criptografia por substituição, de palavras, por cifragem.
 * Numa substituição homófona cada letra do alfabeto pode ser correspondida por mais do que um símbolo. Habitualmente,
   há maior número de correspondências para as letras de maior frequência, de modo a dificultar uma análise estatística baseada na frequência.
*/

int main() {
 char alfa[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 //alfabeto base para criptografia
 char alfaCifra[] = {'8','F','H','G','3','l','1','L','E','I','w','o','M','X','6','Q','P','b','V','9','a','Z','S','D','j','r','z','-','k','m','x','n','B','u','0','-','-','O','A','v','5','p','-','R','y','f','4','g','-','-'}; // - - K - s N q - - - J - - a c - 2 - - T e Y h - - - - - 7 - - - t - - - - - - - - - W - - C - - - - - - - - i - - - - - - - - - - - - - d - - - - - - - - - - -"};
 //para obter o tamanho da string inicializada automaticamente
 int tm = strlen(alfaCifra);
 printf("%d \n",strlen(alfaCifra));
 //armazena a senha de no maximo 10 caracteres
 char senha[9];
 //para armazenar o codigo ASC de cada caracter da senha
 int cdASC2[9];
 //senha ja criptografa gerada e armazenada aqui
 char hash[9];
 //obtendo a senha
 printf("digite Senha de 0-9 caracteres: ");
 gets(senha);

 //obtendo o codigo ASC de cada caracter da senha
 for(int i = 0; i < 9; i += 1) {
     //faço um cast para obter o codigo
    cdASC2[i] = (int)senha[i];
 }

 //mostrando o codigo ASC de cada caracter da senha
 for(int i = 0; i < 9; i += 1) {
     printf("%d \t",cdASC2[i]);
 }
 printf("\n");

 //criptogrando a senha pelO metodo
 /*
 *ROT-13 (ou rot13, rot-13, Rot13, etc) é o nome que se costuma usar para um procedimento simples
   mas eficaz para garantir que textos eletrônicos não sejam lidos por distração ou acidente.
   ROT-13 vem do inglês, ROTate by 13 places, "ROTacionar 13 posições".
   Como há 26 letras (2 × 13) no alfabeto latino básico, o ROT13 é sua própria inversão;
   isto é, para desfazer ROT13, o mesmo algoritmo é aplicado, então a mesma ação pode ser usada para codificação e decodificação.
   O algoritmo fornece virtualmente nenhuma segurança criptográfica e é frequentemente citado como um exemplo canônico de criptografia fraca.[1]

  * obs: so trabalha com letras, sem numeros e simbolos.
 */
 int i,j;
 for(i = 0; i < 9; i += 1) {
     hash[i] = alfaCifra[i + 13];
 }

 //mostrando o caracter e seu respectivo codigo
 for(int i = 0; i < 9; i += 1) {
     printf("%c == %d\n",cdASC2[i],cdASC2[i]);
 }

 //mostrando senha original e codificada
 printf("Senha original: [%s]\n",senha);
 printf("Hash criptografa: [%s]\n",hash);
 return 0;
}
