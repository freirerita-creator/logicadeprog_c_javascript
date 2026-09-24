#include <stdio.h>

int main() {

    // Cidade 1
    char cidade1[50];
    char estado1[50];
    int codigo1;
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Cidade 2
    char cidade2[50];
    char estado2[50];
    int codigo2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da Cidade 1
    printf("=== Cadastro da Cidade 1 ===\n");

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Digite o nome do estado: ");
    fgets(estado1, 50, stdin);

    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    getchar(); // limpa o Enter do teclado

    // Cadastro da Cidade 2
    printf("\n=== Cadastro da Cidade 2 ===\n");

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Digite o nome do estado: ");
    fgets(estado2, 50, stdin);

    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados
    printf("\n=== Dados da Cidade 1 ===\n");
    printf("Cidade: %s", cidade1);
    printf("Estado: %s", estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("\n=== Dados da Cidade 2 ===\n");
    printf("Cidade: %s", cidade2);
    printf("Estado: %s", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}