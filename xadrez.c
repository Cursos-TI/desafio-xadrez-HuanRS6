#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez usando estruturas de repetição
 * Desenvolvido para o desafio: "Movimentando as Peças do Xadrez"
 * Linguagem: C | Nível: Novato
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

    return 0;
}