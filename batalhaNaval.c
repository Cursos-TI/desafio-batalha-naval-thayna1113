#include <stdio.h>

int main() {

  int tabuleiro[10][10] = {0};//tabuleiro matrix 10x10
  

  // Navio horizontal na linha 3, colunas 2 a 4
  tabuleiro[3][2] = 3;
  tabuleiro[3][3] = 3;
  tabuleiro[3][4] = 3;

  // Navio vertical na coluna 8, linhas 5 a 7
  tabuleiro[5][8] = 3;
  tabuleiro[6][8] = 3;
  tabuleiro[7][8] = 3;

    // Navio diagonal na coluna 1 a 3, linhs 6 a 8
    tabuleiro[8][1] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[6][3] = 3;

     // Navio diagonal na linha 1 a 3, coluna 6 a 8
     tabuleiro[1][8] = 3;
     tabuleiro[2][7] = 3;
     tabuleiro[3][6] = 3;
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[i][j]); 
    }
    printf("\n"); 
  }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
