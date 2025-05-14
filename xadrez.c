#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez com recursividade e loops complexos
 * Desafio Final: Nível Mestre - "Movimentando as Peças do Xadrez"
 * Linguagem: C
 * Autor: [Seu Nome]
 */

#define TORRE_MOV 5
#define BISPO_MOV 5
#define RAINHA_MOV 8

// =============================
// Função Recursiva: Movimento da Torre
// =============================
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// =============================
// Função Recursiva: Movimento da Rainha
// =============================
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =============================
// Função Recursiva + Loops Aninhados: Movimento do Bispo
// =============================
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com Loops Aninhados (Diagonal Cima + Direita):\n");
    for (int i = 0; i < casas; i++) {           // Loop vertical
        for (int j = 0; j < 1; j++) {           // Loop horizontal (1 casa por movimento)
            printf("Cima Direita\n");
        }
    }
}

// =============================
// Loops Aninhados: Movimento do Cavalo
// Movimento em "L": 2 para cima e 1 para direita
// =============================
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    int movimentos = 1; // Definido diretamente como solicitado

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                printf("Direita\n");
                break; // Controla para mover para a direita após 2 para cima
            }
            printf("Cima\n");
        }
    }
}

// =============================
// Função Principal
// =============================
int main() {
    // Movimento da Torre com recursividade
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(TORRE_MOV);

    // Movimento do Bispo com recursividade
    printf("\nMovimento do Bispo Recursivo (5 casas na diagonal cima + direita):\n");
    moverBispoRecursivo(BISPO_MOV);

    // Movimento do Bispo com loops aninhados
    moverBispoComLoops(BISPO_MOV);

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(RAINHA_MOV);

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();

    return 0;
}