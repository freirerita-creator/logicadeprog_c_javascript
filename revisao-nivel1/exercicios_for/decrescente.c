

#include <stdio.h>

int main() {

    int numero;
    int contador;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    for (contador = numero; contador >= 1; contador--) {
        printf("%d\n", contador);
    }

    return 0;
}