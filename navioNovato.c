#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int tamanho = 10, navio = 3;
    
    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 4; // Navio horizontal
    int linhaV = 5, colunaV = 1; // Navio vertical

    // Validar se os navios estão dentro dos limites e não se sobrepõem
    if (colunaH + navio <= tamanho && linhaV + navio <= tamanho) {
        for (int i = 0; i < navio; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 3 || tabuleiro[linhaH][colunaH + i] == 3) {
                printf("Erro: Sobreposição de navios!\n");
                return 1;
            }
            tabuleiro[linhaH][colunaH + i] = 3; // Navio horizontal
            tabuleiro[linhaV + i][colunaV] = 3; // Navio vertical
        }
    } else {
        printf("Erro: Navios fora dos limites do tabuleiro!\n");
        return 1;
    }
    
    // Exibir tabuleiro
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
