#include <stdio.h>

int main() {


    int torre = 5, bispo = 5, rainha = 8;
    
    
    // Movimento da Torre:

    printf ("Torre (5 casas para a direita):\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo
    printf("\n");
    printf("Bispo (5 casas na diagonal para cima e à direita):\n");
    int i = 0;
    while (i < bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimento da Rainha
    printf("\n");
    printf("Rainha (8 casas para a esquerda):\n");
    int incremento = 0;
    do {
        printf("Esquerda\n");
        incremento++;
    } while (incremento < rainha);

    
return 0;

}
