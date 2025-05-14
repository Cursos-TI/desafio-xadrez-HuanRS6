#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez usando estruturas de repetição
 * Desenvolvido para o desafio: "Movimentando as Peças do Xadrez"
 * Linguagem: C | Nível: Novato / Aventureiro
 */

int main() {
    // =============================
    // Movimento da Torre (FOR LOOP)
    // =============================
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // =============================
    // Movimento do Bispo (WHILE LOOP)
    // =============================
    printf("\nMovimento do Bispo (5 casas na diagonal cima + direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // =============================
    // Movimento da Rainha (DO-WHILE LOOP)
    // =============================
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    // =============================
    // Movimento do Cavalo (FOR + WHILE)
    // =============================
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;

    // FOR para mover 2 casas para baixo
    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");
    }

    // WHILE para mover 1 casa para a esquerda
    int j = 0;
    while (j < movimentos_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
