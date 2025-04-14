#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Variáveis calculadas
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // Declaração das variáveis da carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Variáveis calculadas
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 =
        (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) +
                   (float)pontos_turisticos1 + pib_per_capita1 +
                   (1.0f / densidade1);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 =
        (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) +
                   (float)pontos_turisticos2 + pib_per_capita2 +
                   (1.0f / densidade2);

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    } else {
        printf("População: Carta 2 venceu (%d)\n", populacao1 > populacao2);
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    } else {
        printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", pib1 > pib2);
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n",
               pontos_turisticos1 > pontos_turisticos2);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n",
               pontos_turisticos1 > pontos_turisticos2);
    }

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n",
               densidade1 < densidade2); // menor vence
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n",
               densidade1 < densidade2); // menor vence
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n",
               pib_per_capita1 > pib_per_capita2);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n",
               pib_per_capita1 > pib_per_capita2);
    }

    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (%d)\n",
               super_poder1 > super_poder2);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n",
               super_poder1 > super_poder2);
    }

    return 0;
}
