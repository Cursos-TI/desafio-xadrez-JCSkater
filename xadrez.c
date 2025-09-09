#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    unsigned int Rainha = 8;
    unsigned int Torre = 5;
    unsigned int Bispo = 5;

    // Implementação de Movimentação do Bispo

    do { //printa acima e direita para simular movimentação diagonal
        printf("Acima / direita\n");
        Bispo--; // decrementa o valor da variável enquanto o valor for diferente de zero
    } while (Bispo != 0);

    // Implementação de Movimentação da Torre
    while (Torre != 0) { // enquanto o valor de torre for diferente de zero
        printf("Direita\n"); // printa a palavra direita no terminal
        Torre--;  // decrementa o valor da variável
    }

    // Implementação de Movimentação da Rainha
    for (Rainha; Rainha != 0; Rainha --) { //para cada caso em que Rainha for diferente de zero, decrementa uma unidade da variável.
        printf("Esquerda\n"); //printa a palavra esquerda no terminal
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
