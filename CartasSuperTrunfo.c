#include <stdio.h>

int main() {

// ====== Menu Do SuperTrunfos ======

    int escolhaJogador;

    printf("||| CARTAS SUPER TRUNFOS |||\n");
    printf("| Escolha uma das opções abaixo⤵ |\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("Selecione: ");
    scanf("%d", &escolhaJogador);

// ====== Entrada de Dados ======

    // Primeira Carta
    char Estado1[3];        // Letra da Carta ex: A
    char Codigo1[10];       // Código (sem acentuação para evitar erro)
    char Cidade1[30];       // Nome da Cidade
    unsigned int Populacao1;
    int Turismo1;
    float Area1, PIB1;
    float Densidade1, PIBPERCAPITA1;
    float SUPERPODER1;      // Superpoder baseado em atributos combinados

    // Segunda Carta
    char Estado2[3], Codigo2[10], Cidade2[30];
    unsigned int Populacao2;
    int Turismo2;
    float Area2, PIB2;
    float Densidade2, PIBPERCAPITA2;
    float SUPERPODER2;

// ====== Entrada da Primeira Carta ======

    printf("\n*** Carta 01: ***\n");
    printf("Digite o Estado: ");
    scanf("%2s", Estado1);

    printf("Digite o Código: ");
    scanf("%9s", Codigo1);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite quantos Pontos Turísticos tem: ");
    scanf("%d", &Turismo1);

// ====== Entrada da Segunda Carta ======

    printf("\n*** Carta 02: ***\n");
    printf("Digite o Estado: ");
    scanf("%2s", Estado2);

    printf("Digite o Código: ");
    scanf("%9s", Codigo2);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite quantos Pontos Turísticos tem: ");
    scanf("%d", &Turismo2);

// ====== Saída de Dados ======

    printf("\n*** Carta 01: ***\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Turismo1);

    Densidade1 = (Populacao1 + Area1) / 2;
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);

    PIBPERCAPITA1 = (PIB1 + Populacao1) / 2;
    printf("PIB per Capita: R$%.2f\n", PIBPERCAPITA1);

    Densidade1 = (1 / Densidade1);
    SUPERPODER1 = (Populacao1 + Area1 + PIB1 + Densidade1 + Turismo1);
    printf("Super Poder: %.2f\n", SUPERPODER1);

    printf("\n*** Carta 02: ***\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Turismo2);

    Densidade2 = (Populacao2 + Area2) / 2;
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);

    PIBPERCAPITA2 = (PIB2 + Populacao2) / 2;
    printf("PIB per Capita: R$%.2f\n", PIBPERCAPITA2);

    Densidade2 = (1 / Densidade2);
    SUPERPODER2 = (Populacao2 + Area2 + PIB2 + Densidade2 + Turismo2);
    printf("Super Poder: %.2f\n", SUPERPODER2);

// ====== Escolha de Atributo para Comparação ======

    printf("\nEscolha um atributo da sua carta para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Selecione: ");
    scanf("%d", &escolhaJogador);

// ====== Switch Case de Comparação ======

    switch (escolhaJogador)
    {
    case 1:
        printf("\n||| Você escolheu População! |||\n");
        printf("Cidade 1: %s - População: %d\n", Cidade1, Populacao1);
        printf("Cidade 2: %s - População: %d\n", Cidade2, Populacao2);
        if (Populacao1 > Populacao2)
            printf("Carta 1 venceu!\n");
        else if (Populacao1 < Populacao2)
            printf("Carta 2 venceu!\n");
        else
            printf("Houve um empate!\n");
        break;

    case 2:
        printf("\n||| Você escolheu Área! |||\n");
        printf("Cidade 1: %s - Área: %.2f km²\n", Cidade1, Area1);
        printf("Cidade 2: %s - Área: %.2f km²\n", Cidade2, Area2);
        if (Area1 > Area2)
            printf("Carta 1 venceu!\n");
        else if (Area1 < Area2)
            printf("Carta 2 venceu!\n");
        else
            printf("Houve um empate!\n");
        break;

    case 3:
        printf("\n||| Você escolheu PIB! |||\n");
        printf("Cidade 1: %s - PIB: %.2f\n", Cidade1, PIB1);
        printf("Cidade 2: %s - PIB: %.2f\n", Cidade2, PIB2);
        if (PIB1 > PIB2)
            printf("Carta 1 venceu!\n");
        else if (PIB1 < PIB2)
            printf("Carta 2 venceu!\n");
        else
            printf("Houve um empate!\n");
        break;

    case 4:
        printf("\n||| Você escolheu Pontos Turísticos! |||\n");
        printf("Cidade 1: %s - Pontos Turísticos: %d\n", Cidade1, Turismo1);
        printf("Cidade 2: %s - Pontos Turísticos: %d\n", Cidade2, Turismo2);
        if (Turismo1 > Turismo2)
            printf("Carta 1 venceu!\n");
        else if (Turismo1 < Turismo2)
            printf("Carta 2 venceu!\n");
        else
            printf("Houve um empate!\n");
        break;

    case 5:
        printf("\n||| Você escolheu Densidade Populacional! |||\n");
        printf("Cidade 1: %s - Densidade: %.2f\n", Cidade1, Densidade1);
        printf("Cidade 2: %s - Densidade: %.2f\n", Cidade2, Densidade2);
        if (Densidade1 < Densidade2)
            printf("Carta 1 venceu!\n");
        else if (Densidade1 > Densidade2)
            printf("Carta 2 venceu!\n");
        else
            printf("Houve um empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

// ====== Resultados Gerais ======

    printf("\n*** RESULTADOS GERAIS ***\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Ponto Turístico: Carta 1 venceu (%d)\n", Turismo1 > Turismo2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPERCAPITA1 > PIBPERCAPITA2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SUPERPODER1 > SUPERPODER2);

    return 0;
}