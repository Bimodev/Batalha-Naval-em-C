#include <stdio.h>

void aplicarHabilidade(int tabuleiro[10][10], int origemX, int origemY, int tipo) {
    int matrizHabilidade[5][5] = {0};
    
    // Construção das habilidades
    if (tipo == 1) { // Cone
        matrizHabilidade[0][2] = 1;
        matrizHabilidade[1][1] = matrizHabilidade[1][2] = matrizHabilidade[1][3] = 1;
        for (int i = 0; i < 5; i++) matrizHabilidade[2][i] = 1;
    } else if (tipo == 2) { // Cruz
        for (int i = 0; i < 5; i++) matrizHabilidade[2][i] = matrizHabilidade[i][2] = 1;
    } else if (tipo == 3) { // Octaedro
        matrizHabilidade[0][2] = matrizHabilidade[4][2] = 1;
        matrizHabilidade[1][1] = matrizHabilidade[1][3] = matrizHabilidade[3][1] = matrizHabilidade[3][3] = 1;
        for (int i = 0; i < 5; i++) matrizHabilidade[2][i] = 1;
    }
    
    // Aplicação da habilidade ao tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origemX + i - 2;
            int y = origemY + j - 2;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && matrizHabilidade[i][j] == 1) {
                tabuleiro[x][y] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[10][10] = {0};
    
    // Posicionamento dos navios
    int posicoesNavios[4][2] = {{2, 4}, {5, 1}, {0, 0}, {7, 9}};
    for (int i = 0; i < 3; i++) {
        tabuleiro[posicoesNavios[0][0]][posicoesNavios[0][1] + i] = 3; // Horizontal
        tabuleiro[posicoesNavios[1][0] + i][posicoesNavios[1][1]] = 3; // Vertical
        tabuleiro[posicoesNavios[2][0] + i][posicoesNavios[2][1] + i] = 3; // Diagonal principal
        tabuleiro[posicoesNavios[3][0] + i][posicoesNavios[3][1] - i] = 3; // Diagonal secundária
    }
    
    // Aplicação das habilidades
    aplicarHabilidade(tabuleiro, 3, 3, 1); // Cone no centro
    aplicarHabilidade(tabuleiro, 6, 6, 2); // Cruz
    aplicarHabilidade(tabuleiro, 2, 7, 3); // Octaedro
    
    // Exibir tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
