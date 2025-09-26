#include <stdio.h>
 
const int movimentosTorre = 3;
const int movimentosBispo = 5;
const int movimentosRainha = 3;
const int fimCavaloVertical = 4;
const int fimCavaloHorizontal = 4;

// Recursividade TORRE
    void moverTorre(int casas){
        if (casas <= 0) return;
        printf("Direita");
        moverTorre(casas - 1);
    }
    // Mover o Bispo na Diagonal para cima e à direita
    void moverBISPO(int diagonal){
        if (diagonal <= 0 ) return;
           
        // Loop aninhado: vertical externo, horizontal interno
    for (int i = 0; i < diagonal; i++) {
            printf("Cima\n");
            printf("Direita\n");
        
    }

    // Chamada recursiva: um movimento a menos
    moverBISPO(diagonal - 1);
}

    // Mover RAINHA 
    void moverRainha(int passos) {
    if (passos <= 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverRainha(passos - 1);
}

    // CAVALO COM LOOPS COPLEXOS
    // Mover o Cavalo em L: 2 para baixo e 1 para a esquerda
    void moverCavalo() { 
        for (int i = 0; i < fimCavaloVertical; i++){
            for (int j = 0; j < fimCavaloHorizontal; j++){
                // Simular movimento do Cavalo apenas se for múltiplo de 2 no vertical
                 if ((i + 1) % 2 != 0) {
                    continue; // pular se não for possível o movimento "2 para cima"
                 }

                    printf("Cima\n");
                    printf("Cima\n");
                    printf("Direita\n");

                // Interromper se ultrapassar o limite do tabuleiro (simulado)
                if (i + 2 > fimCavaloVertical || j + 1 > fimCavaloHorizontal) {
                    break;
                }
        }
    }
}

int main() {

    // MOVER A TORRE
      printf("MOVIMENTO DA TORRE: \n");
      moverTorre(movimentosTorre);
      printf("\n");

    // MOVER O BISPO
       printf("Movimento do Bispo:\n");
   moverBISPO(movimentosBispo, movimentosBispo);
    printf("\n");

    
    // MOVER A RAINHA
    
    printf("Movimento da Rainha:\n");
    moverRainha(movimentosRainha);
    printf("\n");

   
    // MOVER O CAVALO
    
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}