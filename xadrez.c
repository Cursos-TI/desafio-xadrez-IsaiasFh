#include <stdio.h>

int main() {

        printf("Peça do tabuleiro: TORRE \n");
        int casasTorre = 5;
        // Mover a Torre 5 vezes
        for (int i = 1; i <= casasTorre; i++){
            printf("Direita \n"); // Imprime a direção do movimento
        }

        // Mover o Bispo na Diagonal para cima e à direita
       printf("\n Movimento do Bispo: \n");
       int casasBispo = 5; // número de casas para mover
        int i = 1;
        while ( i <= casasBispo) {
            printf("Cima, Direita \n");// Imprime a direção do movimento
            i++;
        }
        // Mover a Rainha 8 casas para a esquerda
        printf("\n Movimento da Rainha: \n");
        int casasRainha = 8; // número de casas para mover
        int j = 0;
        do {
            printf("Esquerda \n");
            j++;
        } while (j <= casasRainha);
        

    return 0;
}