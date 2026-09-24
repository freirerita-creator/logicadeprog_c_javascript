#include <stdio.h>

int main() {

    // --- Declaração de variáveis ---
    float nota1, nota2, nota3, media;

    // Passo 1: Pedir e ler as três notas
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    // Passo 2: Calcular a média
    media = (nota1 + nota2 + nota3) / 3;

    // Passo 3: Mostrar o resultado
    printf("A media das notas e: %.2f\n", media);

    return 0;
}