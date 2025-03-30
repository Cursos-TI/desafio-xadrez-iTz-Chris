#include <stdio.h>

// Função para movimento da Torre:

void torre(int numero) {
    if (numero > 0) {
        printf ("Direita\n");
        torre (numero - 1);
    }
}

// Função para movimento do Bispo:

void bispo(int numero) {
    if (numero > 0) {

        // Loop externo
        for (int i = 1; i <= 1; i++) {

            // Loop interno
            for (int j = 1; j <=1; j++) {
                printf("Cima\n");
                printf("Direita\n");

            }
        }
        
        bispo (numero - 1);
    }
}

// Função para movimento da Rainha:

void rainha(int numero) {
    if (numero > 0) {
        printf("Esquerda\n");
        rainha (numero - 1);
    }
}


int main() {

    printf ("Torre (5 casas para a direita): \n");
    torre (5);
    printf ("\n"); 

    printf ("Bispo (5 casas na diagonal para cima e à direita): \n");
    bispo (5);
    printf ("\n");

    printf ("Rainha (8 casas para a esquerda): \n");
    rainha (8);
    printf ("\n");


    int cavaloCima, cavaloDireita;


    // Movimento do Cavalo
    printf ("\n");
    printf ("Cavalo (duas casas para cima e uma casa para a direita): \n");

    // Loop externo para o movimento de duas casas para cima:
    for (cavaloCima = 1, cavaloDireita = 1; cavaloCima <= 2 && cavaloDireita <= 1; cavaloCima++) {

    // loop interno para o movimento de uma casa para a direita:
    for (cavaloDireita = 1; cavaloDireita <= 1; cavaloDireita++) {

        printf("Cima\n"); 
        printf("Cima\n"); 
        printf("Direita\n"); 

    }
          
            printf ("\n");

    }





    return 0;
}
