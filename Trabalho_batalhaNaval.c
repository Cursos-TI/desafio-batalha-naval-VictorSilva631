#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define OCUPADO 3
#define LIVRE 0

void inicializarMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = LIVRE;
        }
    }
}

void exibirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void nivelNovato(int tabuleiro[5][5]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            tabuleiro[i][j] = LIVRE;

    for (int j = 0; j < 3; j++) {
        tabuleiro[1][j] = OCUPADO;
        printf("Navio Horizontal: (%d,%d)\n", 1, j);
    }

    for (int i = 2; i < 5; i++) {
        tabuleiro[i][3] = OCUPADO;
        printf("Navio Vertical: (%d,%d)\n", i, 3);
    }
}

void nivelAventureiro(int tabuleiro[TAMANHO][TAMANHO]) {
    inicializarMatriz(tabuleiro);

    for (int j = 0; j < 4; j++)
        tabuleiro[0][j] = OCUPADO;

    for (int i = 5; i < 9; i++)
        tabuleiro[i][2] = OCUPADO;

    for (int i = 0; i < 4; i++)
        tabuleiro[i][i] = OCUPADO;

    for (int i = 0; i < 4; i++)
        tabuleiro[i][9 - i] = OCUPADO;
}

void aplicarHabilidadeCone(int matriz[TAMANHO][TAMANHO], int centroX, int centroY) {
    inicializarMatriz(matriz);

    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            int x = centroX + i;
            int y = centroY + j;
            if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO)
                matriz[x][y] = 1;
        }
    }
}

void aplicarHabilidadeCruz(int matriz[TAMANHO][TAMANHO], int centroX, int centroY) {
    inicializarMatriz(matriz);

    for (int i = -2; i <= 2; i++) {
        if (centroX + i >= 0 && centroX + i < TAMANHO)
            matriz[centroX + i][centroY] = 1;
        if (centroY + i >= 0 && centroY + i < TAMANHO)
            matriz[centroX][centroY + i] = 1;
    }
}

void aplicarHabilidadeOctaedro(int matriz[TAMANHO][TAMANHO], int centroX, int centroY) {
    inicializarMatriz(matriz);

    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if (abs(dx) + abs(dy) <= 2) {
                int x = centroX + dx;
                int y = centroY + dy;
                if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO)
                    matriz[x][y] = 1;
            }
        }
    }
}

int main() {
    printf("=== Nível Novato ===\n");
    int tabuleiroNovato[5][5];
    nivelNovato(tabuleiroNovato);

    printf("\n=== Nível Aventureiro ===\n");
    int tabuleiroAventureiro[TAMANHO][TAMANHO];
    nivelAventureiro(tabuleiroAventureiro);
    exibirMatriz(tabuleiroAventureiro);

    printf("\n=== Nível Mestre - Cone ===\n");
    int habilidade[TAMANHO][TAMANHO];
    aplicarHabilidadeCone(habilidade, 2, 4);
    exibirMatriz(habilidade);

    printf("\n=== Nível Mestre - Cruz ===\n");
    aplicarHabilidadeCruz(habilidade, 5, 5);
    exibirMatriz(habilidade);

    printf("\n=== Nível Mestre - Octaedro ===\n");
    aplicarHabilidadeOctaedro(habilidade, 4, 4);
    exibirMatriz(habilidade);

    return 0;
}
