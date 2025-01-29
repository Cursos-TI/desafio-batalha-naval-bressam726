#include <stdio.h>

#define TAMANHO 5

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; 

    for (int j = 1; j <= 3; j++) {
        tabuleiro[2][j] = 3;
    }

    
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][4] = 3;
    }

    
    printf("Tabuleiro com os navios:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
