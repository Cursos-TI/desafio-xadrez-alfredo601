#include <stdio.h>

int main() {
    // movimento da torre
    // Torre: 5 casas para a direita

    int casas_movimento_torre = 5;
    
    printf("movimento da torre\n");

    for (int i = 1; i <= casas_movimento_torre; i++) {
        printf("%d Casa = Direita \n", i);
    }

    printf("\n");

    // movimento da dama
    // Rainha: 8 casas para a esquerda

    int casas_movimento_dama = 8, i = 1;

    printf("movimento da dama\n");
    
    while (i <= casas_movimento_dama) {
        printf("%d Casa = Esquerda \n", i);
        i++;
    }

    printf("\n");
   
    // movimento do bispo
    // Bispo: 5 casas na diagonal superior direita

    int casas_movimento_bispo = 5;
    i = 1;

    printf("movimento do bispo\n");

    do {
        printf("%d Casa = Cima + %d Casa = Direira\n", i, i);
        i++;
    } while (i <= casas_movimento_bispo);

    return 0;
}
