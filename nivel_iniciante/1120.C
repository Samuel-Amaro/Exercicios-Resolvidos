#include <stdio.h>
#include <string.h>

int main() {
 long int valor;
 int digito;
 printf(" ");
 scanf("%d",&digito);
 printf(" ");
 scanf("%d",&digito);
 char string[50];
 sprintf(string,"%d",valor);
 int tm = strlen(string);
 char string2[tm - 1];
 for(int i = 0; i < tm; i += 1) {
     if(string[i] == digito) {
        break;
     }else{
          string2[i] = string[i];
     }
 }
 printf("%d %d\n",digito,string2);


 return 0;
}
