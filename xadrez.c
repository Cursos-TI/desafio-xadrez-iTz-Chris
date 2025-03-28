#include <stdio.h>

int main() {


    int torre = 5, bispo = 5, rainha = 8;
    int cavaloBaixo, cavaloEsquerda = 1;
    
    
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


    // Movimento do Cavalo
    printf ("\n");
    printf ("Cavalo (duas casas para baixo e uma casa para a esquerda):\n");

    for (cavaloBaixo = 1; cavaloBaixo <= 3; cavaloBaixo++) {

        while (cavaloEsquerda <= 1)
        {
            printf ("Baixo\n");
            printf ("Baixo\n");
            printf ("Esquerda\n");
            cavaloEsquerda++;
        }
          
            printf ("\n");
    }


    
return 0;

}
