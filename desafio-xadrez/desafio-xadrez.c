#include <stdio.h>

const int BISPO = 5;
const int TORRE = 5;
const int RAINHA = 8;

//===Nível Novato===//
void nivelNovato()
{
    printf("===Nivel Novato===\n\n");

    // Bispo (for)
    printf("Bispo se movimenta na diagonal:\n");
    int i;
    for (i = 0; i < BISPO; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre (do-while)
    printf("\nMovimento da Torre:\n");
    int j = 0;
    do
    {
        printf("Direita\n");
        j++;
    } while (j < TORRE);

    printf("\n");

    // Rainha (while)
    printf("Movimento da Rainha:\n");
    i = 0;
    while (i < RAINHA)
    {
        printf("Esquerda\n");
        i++;
    }
}

//===Nível Aventureiro===//
void nivelAventureiro(){
    printf("===Nivel Aventureiro===\n\n");

    printf("Movimento do calvalo (L - Baixo e esquerda):\n");
    for (int i = 0; i < 2; i++){
        printf("Baixo\n");
        int j = 0;
        while (j < 1){
            printf("Esquerda\n");
            j++;
        }
    }

    printf("\n");
}

//===Nível Mestre===//
// Função recursiva com loops aninhados para o bispo.
void moverBispoRecursivo(int passos){
    if (passos == 0) return;

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 1; j++){
            printf("cima\n");
            printf("direita\n");
        }
    }
    
    moverBispoRecursivo(passos - 1);
}

void moverTorreRecursivo(int passos){
    if (passos == 0) return;
    printf("direita\n");
    moverTorreRecursivo(passos - 1);
}

void moverRainhaRecursivo( int passos){
    if (passos == 0) return;
    printf("esquerda\n");
    moverRainhaRecursivo(passos - 1);
}

void nivelMestre(){
    printf("===Nivel Mestre===\n\n");

    //Recursão das peças
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(BISPO);

    printf("\nMovimento da Torre (recursivo):\n");
    moverTorreRecursivo(TORRE);

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainhaRecursivo(RAINHA);

    //múltiplas condições e break/continue
    printf("\nMovimento do cavalo (L - cima e direita):\n");
    for (int i = 0, j = 0; i < 2 && j < 1; i++, j++){
        if ( i < 2){
            printf("Cima\n");
        }
        if (j < 2){
            printf("Direita\n");
        }
        if (i > 2) break;
    }

    printf("\n");
}


int main()
{
    nivelNovato();
    nivelAventureiro();
    nivelMestre();

    return 0;
}