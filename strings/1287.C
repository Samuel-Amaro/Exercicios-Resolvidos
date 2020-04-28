#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char caracteres[4] = {'O','o','l','\0'};
  char string[50];
  printf(" ");
  gets(string);
  int tm = strlen(string);
  long int valor = atol(string);
  if(valor > 1) {
     printf("error\n");
  }else{
  	for(int i = 0; i < tm; i += 1) {
  	   if(string[i] == caracteres[0] || string[i] == caracteres[1]) {
  	  	  string[i] = '0';
		}
	   else if(string[i] == caracteres[2]) {
	   	       string[i] = '1';
	   }
    }
    printf("%llu \n", valor);
  }
  return 0; 		
}
