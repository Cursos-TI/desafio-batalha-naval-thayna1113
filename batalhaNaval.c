#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {

  int tabuleiro[linhas][colunas] = {0};//tabuleiro matrix 10x10
  

  //posiçoes dos navios
    tabuleiro[3][2] = 3; tabuleiro[3][3] = 3; tabuleiro[3][4] = 3;
    tabuleiro[5][8] = 3; tabuleiro[6][8] = 3; tabuleiro[7][8] = 3;
    tabuleiro[8][1] = 3; tabuleiro[7][2] = 3; tabuleiro[6][3] = 3;
    tabuleiro[1][8] = 3; tabuleiro[2][7] = 3; tabuleiro[3][6] = 3;


  for (int i = 0; i < linhas; i++) {    // Imprime o tabuleiro final
    for (int j = 0; j < colunas; j++) {
      printf("%d ", tabuleiro[i][j]); 
    }
    printf("\n"); 
  }

    return 0;
}
