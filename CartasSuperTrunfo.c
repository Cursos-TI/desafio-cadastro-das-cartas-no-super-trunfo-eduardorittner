#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis da carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

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

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
