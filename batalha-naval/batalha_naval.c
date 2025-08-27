#include <stdio.h>

 void nivelNovato(){
        printf("Nivel Novato selecionado.\n");
        int tabuleiro[5][5] = {0}; //Tabuleiro 5x5

        // Navio vertical 
        tabuleiro[1][1] = 1;
        tabuleiro[2][1] = 1;
        tabuleiro[3][1] = 1;

        // Navio horizontal
        tabuleiro[4][2] = 1;
        tabuleiro[4][3] = 1;
        tabuleiro[4][4] = 1;

        printf("\n=== Nível Novato ===\n");
        printf("Coordenadas do navio vertical:\n");
        for (int i = 0; i < 5; i++){
            if (tabuleiro[i][1] == 1){
                printf("(%d,%d)\n", i, 1);
            }
        }

        printf("\nCoordenadas do navio horizontal:\n");
        for (int j = 0; j < 5; j++){
            if (tabuleiro[4][j] == 1){
                printf("(%d,%d)\n", 4, j);
            }
        }
    }

void nivelAventureiro(){
        printf("Nivel Aventureiro selecionado.\n");
        int tabuleiro[10][10] = {0}; // Incializa com 0
        
        // Navio vertical (coluna 2, linhas 1 a 4)
        for (int i = 1; i <= 4; i++){
            tabuleiro[i][2] = 3;
        }

        // Navio horizontal (colunas 4 a 7, linha 6)
        for (int j = 4; j <= 7; j++){
            tabuleiro[6][j] = 3;
        }

        // Navio diagonal (de (0,0) até (3,3))
        for (int i = 0; i < 4; i++){
            tabuleiro[i][i] = 3;
        }

        // Navio diagonal (de (9,0) até (6,3))
        for (int i = 0; i < 4; i++){
            tabuleiro[9 - i][i] = 3;
        }

        // Exibição do tabuleiro completo
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

void nivelMestre(){
    printf("Nivel Mestre selecionado.\n");
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Padrão Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    // Padrão Cruz
    for (int j = 0; j < 5; j++) cruz[2][j] = 1;
    for (int i = 0; i < 5; i++) cruz[i][2] = 1;

    // Padrão Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    for (int j = 0; j < 5; j++) octaedro[2][j] = 1;
    octaedro[3][1] = octaedro[3][2] = octaedro[3][3] = 1;
    octaedro[4][2] = 1;

    // Exibir cone
    printf("\n=== Nível Mestre ===\n");
    printf("\nCone:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Exibir cruz
    printf("\nCruz:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Exibir octaedro
    printf("\nOctaedro:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
}
// Função main
int main() {
    int opcao;

    do {
        printf("\n=== Batalha Naval ===\n");
        printf("Escolha o nivel:\n");
        printf("1 - Novato\n");
        printf("2 - Aventureiro\n");
        printf("3 - Mestre\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                nivelNovato();
                break;
            case 2:
                nivelAventureiro();
                break;
            case 3:
                nivelMestre();
                break;
            case 0:
                printf("Saindo do jogo.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while(opcao != 0); 

    return 0;
}