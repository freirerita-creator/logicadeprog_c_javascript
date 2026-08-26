#include <stdio.h>

int main() {

    // --- Variáveis da Cidade 1 ---
    char cidade_1[50];
    char estado_1[50];
    int codigo_1;
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_1;
    float pib_percapita_1;

    // --- Variáveis da Cidade 2 ---
    char cidade_2[50];
    char estado_2[50];
    int codigo_2;
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_2;
    float pib_percapita_2;

    // --- Leitura Cidade 1 ---
    printf("=== CIDADE 1 ===\n");
    printf("Nome da cidade: ");
    scanf("%49s", cidade_1);
    printf("Nome do estado: ");
    scanf("%49s", estado_1);
    printf("Código: ");
    scanf("%d", &codigo_1);
    printf("População: ");
    scanf("%d", &populacao_1);
    printf("Área: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    densidade_1 = populacao_1 / area_1;
    pib_percapita_1 = pib_1 / populacao_1;

    // --- Leitura Cidade 2 ---
    printf("\n=== CIDADE 2 ===\n");
    printf("Nome da cidade: ");
    scanf("%49s", cidade_2);
    printf("Nome do estado: ");
    scanf("%49s", estado_2);
    printf("Código: ");
    scanf("%d", &codigo_2);
    printf("População: ");
    scanf("%d", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_2 = populacao_2 / area_2;
    pib_percapita_2 = pib_2 / populacao_2;

    // --- Resultados ---
    printf("\n=== RESULTADO CIDADE 1 ===\n");
    printf("Cidade: %s\n", cidade_1);
    printf("Estado: %s\n", estado_1);
    printf("Código: %d\n", codigo_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f\n", densidade_1);
    printf("PIB per capita: %.2f\n", pib_percapita_1);

    printf("\n=== RESULTADO CIDADE 2 ===\n");
    printf("Cidade: %s\n", cidade_2);
    printf("Estado: %s\n", estado_2);
    printf("Código: %d\n", codigo_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", densidade_2);
    printf("PIB per capita: %.2f\n", pib_percapita_2);

    return 0;
}