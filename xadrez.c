#include <stdio.h>

int main() {
        printf("Desafio Xadrez!\n");
    
    
    // Movimento do Bispo: 5 casas na diagonal para cima/direita
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Diagonal para cima/direita\n");
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    while (j < 8) {
        printf("Esquerda\n");
        j++;
    }

    // Movimento da Torre: 5 casas para frente
    printf("\nMovimento da Torre:\n");
    int k = 0;
    do {
        printf("Frente\n");
        k++;
    } while (k < 5);
    return 0;
}
