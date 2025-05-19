#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo
void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Cima Direita\n");
    moverBispoDiagonal(vertical - 1, horizontal - 1);
}

// Movimento do Cavalo (2 cima, 1 direita)
void moverCavaloL() {
    int movimentos = 1; // número de "L" a fazer

    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentos; m++) {
        for (int i = 0, j = 0; i < 3; i++) {
            if (i < 2) {
                printf("Cima\n");
                continue;
            }

            while (j < 1) {
                printf("Direita\n");
                j++;
                break; // termina o loop interno após mover uma vez para a direita
            }
        }
    }
}

// Função principal
int main() {

    // Torre - Recursivo

    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);


    // Bispo - Recursivo + Loops Aninhados

    int casas_bispo = 5;
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < casas_bispo; i++) {
        for (int j = 0; j < 1; j++) {
            moverBispoDiagonal(1, 1);  // move uma casa em diagonal por iteração
        }
    }


    // Rainha - Recursivo

    int casas_rainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);


    // Cavalo - Loops Aninhados Complexos

    printf("\n");
    moverCavaloL();

    return 0;
}