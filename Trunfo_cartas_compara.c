#include <stdio.h>

int main() {

    // === VARIÁVEIS CARTA 1 ===
    char  estado_1[49], codigo_1[10], cidade_1[49];
    int   populacao_1, pontos_1;
    float area_1, pib_1, densidade_1, pibpc_1, superpoder_1;

    // === VARIÁVEIS CARTA 2 ===
    char  estado_2[49], codigo_2[10], cidade_2[49];
    int   populacao_2, pontos_2;
    float area_2, pib_2, densidade_2, pibpc_2, superpoder_2;

    // === LEITURA CARTA 1 ===
    printf("=== CARTA 1 ===\n");
    printf("Estado: ");             scanf("%s", estado_1);
    printf("Codigo: ");             scanf("%s", codigo_1);
    printf("Nome da cidade: ");     scanf("%s", cidade_1);
    printf("Populacao: ");          scanf("%d", &populacao_1);
    printf("Area (km2): ");         scanf("%f", &area_1);
    printf("PIB (bilhoes): ");      scanf("%f", &pib_1);
    printf("Pontos turisticos: ");  scanf("%d", &pontos_1);

    // === CÁLCULOS CARTA 1 ===
    densidade_1  = populacao_1 / area_1;
    pibpc_1      = (pib_1 * 1000000000) / populacao_1;
    superpoder_1 = populacao_1 + area_1 + pib_1 + pontos_1
                   + densidade_1 + pibpc_1;

    // === LEITURA CARTA 2 ===
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: ");             scanf("%s", estado_2);
    printf("Codigo: ");             scanf("%s", codigo_2);
    printf("Nome da cidade: ");     scanf("%s", cidade_2);
    printf("Populacao: ");          scanf("%d", &populacao_2);
    printf("Area (km2): ");         scanf("%f", &area_2);
    printf("PIB (bilhoes): ");      scanf("%f", &pib_2);
    printf("Pontos turisticos: ");  scanf("%d", &pontos_2);

    // === CÁLCULOS CARTA 2 ===
    densidade_2  = populacao_2 / area_2;
    pibpc_2      = (pib_2 * 1000000000) / populacao_2;
    superpoder_2 = populacao_2 + area_2 + pib_2 + pontos_2
                   + densidade_2 + pibpc_2;

    // === EXIBIÇÃO CARTA 1 ===
    printf("\n=== RESULTADO CARTA 1 ===\n");
    printf("Estado: %s\n",                    estado_1);
    printf("Codigo: %s\n",                    codigo_1);
    printf("Cidade: %s\n",                    cidade_1);
    printf("Populacao: %d\n",                 populacao_1);
    printf("Area: %.2f km2\n",                area_1);
    printf("PIB: %.2f bilhoes\n",             pib_1);
    printf("Pontos turisticos: %d\n",         pontos_1);
    printf("Densidade: %.2f hab/km2\n",       densidade_1);
    printf("PIB per capita: %.2f reais\n",    pibpc_1);
    printf("Super Poder: %.2f\n",             superpoder_1);

    // === EXIBIÇÃO CARTA 2 ===
    printf("\n=== RESULTADO CARTA 2 ===\n");
    printf("Estado: %s\n",                    estado_2);
    printf("Codigo: %s\n",                    codigo_2);
    printf("Cidade: %s\n",                    cidade_2);
    printf("Populacao: %d\n",                 populacao_2);
    printf("Area: %.2f km2\n",                area_2);
    printf("PIB: %.2f bilhoes\n",             pib_2);
    printf("Pontos turisticos: %d\n",         pontos_2);
    printf("Densidade: %.2f hab/km2\n",       densidade_2);
    printf("PIB per capita: %.2f reais\n",    pibpc_2);
    printf("Super Poder: %.2f\n",             superpoder_2);

    // === COMPARAÇÕES ===
printf("\n=== COMPARACOES ===\n");

// População: maior vence
printf("Populacao: ");
if (populacao_1 > populacao_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// Área: maior vence
printf("Area: ");
if (area_1 > area_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// PIB: maior vence
printf("PIB: ");
if (pib_1 > pib_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// Pontos turísticos: maior vence
printf("Pontos turisticos: ");
if (pontos_1 > pontos_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// Densidade: MENOR vence
printf("Densidade: ");
if (densidade_1 < densidade_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// PIB per capita: maior vence
printf("PIB per capita: ");
if (pibpc_1 > pibpc_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

// Super Poder: maior vence
printf("Super Poder: ");
if (superpoder_1 > superpoder_2) {
    printf("Vence Carta 1\n");
} else {
    printf("Vence Carta 2\n");
}

    return 0;
}