#include <stdio.h>

int main() {
 char p[20][20] = {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ','x','x','x',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x','x','x',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ','x','x','x','x','x','x','x','x','x',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x',' ',' ',' ',' '},
                   {' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x',' ',' '},
                   {' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x',' '},
                   {' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'},
                   {' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x',' '},
                   {' ',' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x',' ',' '},
                   {' ',' ',' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x','x','x',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ','x','x','x','x','x','x','x','x','x','x','x',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x','x','x','x','x',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x','x','x',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x','x','x',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' '}};

  for(int i = 0; i < 20; i += 1) {
      for(int j = 0; j < 20; j += 1) {
          printf("%c",p[i][j]);
      }
      printf("\n");
  }
 return 0;
}
