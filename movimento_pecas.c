#include <stdio.h>

int main() {
    // movimento da torre
    // Torre: 5 casas para a direita

    int casas_movimento_torre = 5;
    
    printf("Movimento da Torre\n");

    for (int i = 1; i <= casas_movimento_torre; i++) {
        printf("Direita \n");
    }

    printf("\n");

    // movimento da dama
    // Rainha: 8 casas para a esquerda

    int casas_movimento_dama = 8, i = 1;

    printf("Movimento da Dama\n");
    
    while (i <= casas_movimento_dama) {
        printf("Esquerda \n");
        i++;
    }

    printf("\n");
   
    // movimento do bispo
    // Bispo: 5 casas na diagonal superior direita

    int casas_movimento_bispo = 5;
    i = 1;

    printf("Movimento do Bispo\n");

    do {
        printf("Diagonal Direita\n");
        i++;
    } while (i <= casas_movimento_bispo);

    printf("\n");

    // movimento do cavalo
    // Cavalo: 2 casas para baixo uma para esquerda. Movimento em L

    printf("Movimento do Cavalo\n");

    for (int j = 1; j <= 2; j++) {
       int contador_movimentos = 0;
       while (contador_movimentos < 1) {
        printf("Baixo\n");
        contador_movimentos++; 
       }   
    }
    int k = 0;
    while (k < 1) {
        for (int j = 0; j < 1; j ++) {
            printf("Esquerda\n");
        }
        k++;
    }
        
    return 0;
}
