# include <stdio.h>
# include <string.h>

// Estrutura para armazenar dados da carta.
typedef struct {
    char estado[50];
    int codigoCarta;
    char nomeCidade[50];
    int populacao;
    float area;
    int pib;
    int numeroPontosTuristicos;
} CartaCidade;

// Função para cadastar uma carta.
void cadastrarCarta(CartaCidade *CartaCidade){

    printf("Digite o nome do estado: ");
    getchar(); // limpa o buffer
    fgets(CartaCidade->estado, 50, stdin);
    CartaCidade->estado[strcspn(CartaCidade->estado, "\n")] = 0; // Remove o \n

    printf("Digite o codigo da carta: ");
    scanf("%d", &CartaCidade->codigoCarta);
    while(getchar() != '\n'); // limpa o buffer

    printf("digite o nome da cidade: ");
    fgets(CartaCidade->nomeCidade, 50, stdin);
    CartaCidade->nomeCidade[strcspn(CartaCidade->nomeCidade, "\n")] = 0; //remove o \n.

    printf("Digite a populacao: ");
    scanf("%d", &CartaCidade->populacao);

    printf("Digite a area: ");
    scanf("%f", &CartaCidade->area);

    printf("Digite o PIB: ");
    scanf("%d", &CartaCidade->pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &CartaCidade->numeroPontosTuristicos);
}

void exibirCarta(CartaCidade CartaCidade){
    printf("\n--- Carta ---\n");
    printf("Estado: %s\n", CartaCidade.estado);

    printf("Codigo da Carta: %d\n", CartaCidade.codigoCarta);

    printf("Cidade: %s\n", CartaCidade.nomeCidade);

    printf("Populacao: %d\n", CartaCidade.populacao);

    printf("Area: %.2f\n", CartaCidade.area);

    printf("PIB: %d\n", CartaCidade.pib);

    printf("Numero de Pontos Turisticos: %d\n", CartaCidade.numeroPontosTuristicos);
}

// Função do Nivel Novato.
void novato(){
    CartaCidade carta1, carta2;
    printf("\n--- Nivel Novato ---\n");
    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&carta2);

    exibirCarta(carta1);
    exibirCarta(carta2);

    printf("\nComparando pela população:\n");
    printf("%s: %d\n%s: %d\n", carta1.nomeCidade, carta1.populacao, carta2.nomeCidade, carta2.populacao);

    if(carta1.populacao > carta2.populacao)
        printf("Carta vencedora: %s\n", carta1.nomeCidade);
    else if(carta1.populacao < carta2.populacao)
        printf("Carta vencedora: %s\n", carta2.nomeCidade);
    else
    printf("Empate!\n");
}

void aventureiro(){
    CartaCidade c1, c2;
    int opcao;
    printf("\n--- Nivel Aventureiro ---\n");
    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&c1);
    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&c2);

    exibirCarta(c1);
    exibirCarta(c2);

    printf("\nEscolha o atributo para comparacao");
    printf("\n1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n");
    scanf("%d", &opcao); 

    switch(opcao){
        case 1:
            printf("%s: %d\n%s: %d\n", c1.nomeCidade, c1.populacao, c2.nomeCidade, c2.populacao);
            if(c1.populacao > c2.populacao) printf("Vencedora: %s\n", c1.nomeCidade);
            else if(c1.populacao < c2.populacao) printf("Vencedora: %s\n", c2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 2:
            printf("%s: %.2f\n%s: %d\n", c1.nomeCidade, c1.area, c2.nomeCidade, c2.area);
            if(c1.area > c2.area) printf("Vencedora: %s\n", c1.nomeCidade);
            else if(c1.area < c2.area) printf("Vencedora: %s\n", c2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 3:
            printf("%s: %d\n%s: %d\n", c1.nomeCidade, c1.pib, c2.nomeCidade, c2.pib);
            if(c1.pib > c2.pib) printf("Vencedora: %s\n", c1.nomeCidade);
            else if(c1.pib < c2.pib) printf("Vencedora: %s\n", c2.nomeCidade);
            else printf("Empate\n");
            break;
        case 4:
            printf("%s: %d\n%s: %d\n", c1.nomeCidade, c1.numeroPontosTuristicos, c2.nomeCidade, c2.numeroPontosTuristicos);
            if(c1.numeroPontosTuristicos > c2.numeroPontosTuristicos) printf("Vencedora: %s\n", c1.nomeCidade);
            else if(c1.numeroPontosTuristicos < c2.numeroPontosTuristicos) printf("Vencedora: %s\n", c2.nomeCidade);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

// Função do Nível Mestre.
void mestre(){
    CartaCidade c1, c2;
    int a1, a2;
    printf("\n--- Nivel Mestre ---\n");
    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&c1);
    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&c2);

    exibirCarta(c1);
    exibirCarta(c2);

    printf("\nEscolha dois atributos para comparacao:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n");
    scanf("%d %d", &a1, &a2);

    int pontos1 = 0, pontos2 = 0;

    // Primeiro atributo
    switch(a1){
        case 1: pontos1 += (c1.populacao > c2.populacao); pontos2 += (c2.populacao > c1.populacao); break;
        case 2: pontos1 += (c1.area > c2.area); pontos2 += (c2.area > c1.area); break;
        case 3: pontos1 += (c1.pib > c2.pib); pontos2 += (c2.pib > c1.pib); break;
        case 4: pontos1 += (c1.numeroPontosTuristicos > c2.numeroPontosTuristicos); pontos2 += (c2.numeroPontosTuristicos > c1.numeroPontosTuristicos); break;
    }

    // Segundo atributo.
    switch(a2){
        case 1: pontos1 += (c1.populacao > c2.populacao); pontos2 += (c2.populacao > c1.populacao); break;
        case 2: pontos1 += (c1.area > c2.area); pontos2 += (c2.area > c1.area); break;
        case 3: pontos1 += (c1.pib > c2.pib); pontos2 += (c2.pib > c1.pib); break;
        case 4: pontos1 += (c1.numeroPontosTuristicos > c2.numeroPontosTuristicos); pontos2 += (c2.numeroPontosTuristicos > c1.numeroPontosTuristicos); break;
    }

    printf("\nResultado da comparacao:\n");
    printf("%s: %d pontos\n%s: %d pontos\n", c1.nomeCidade, pontos1, c2.nomeCidade, pontos2);
    pontos1 > pontos2 ? printf("Vencedora: %s\n", c1.nomeCidade) : pontos2 > pontos1 ? printf("Vencedora: %s\n", c2.nomeCidade) : printf("Empate!\n");
}

// Função principal
int main(){
    int nivel;
    printf("Bem-vindo ao Super Trunfo de Paises!\n");
    printf("Escolha o nivel:\n1 - Novato\n2 - Aventureiro\n3 - Mestre\n");
    scanf("%d", &nivel);

    switch(nivel){
        case 1: novato(); break;
        case 2: aventureiro(); break;
        case 3: mestre(); break;
        default: printf("Nivel invalido!\n");
    }

    return 0;
}