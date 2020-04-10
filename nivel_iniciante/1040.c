#include <stdio.h>

int main() {
  float n1,n2,n3,n4,media;
  printf("NOTA 1: ");
  scanf("%f",&n1);
  printf("NOTA 2: ");
  scanf("%f",&n2);
  printf("NOTA 3: ");
  scanf("%f",&n3);
  printf("NOTA 4: ");
  scanf("%f",&n4);
  media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
  if(media >= 7) {
    printf("ALUNO APROVADO\n");
    printf("MEDIA FINAL: ",media);
  }
   if(media < 4.9){
    printf("ALUNO REPROVADO\n");
    printf("MEDIA FINAL: ",media);
  }
  if(media > 5 && media < 6.9) {
     float exame,novaMedia;
     printf("ALUNO EM EXAME\n");
     printf("Digite a nota do exame:");
     scanf("%f",&exame);
     printf("NOTA EXAME: %.2f\n",exame);
     novaMedia = (media + exame) / 2;
     if(novaMedia > 5) {
        printf("ALUNO APROVADO\n");
        printf("MEDIA FINAL: ",novaMedia);
     }else{
          printf("ALUNO REPROVADO\n");
          printf("MEDIA: %.2f",novaMedia);
     }
  }
 return 0;
}
