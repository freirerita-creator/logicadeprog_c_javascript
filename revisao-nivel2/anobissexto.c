

//Ano bissexto

//é divisível por 4 — regra geral (ano % 4 == 0)
// E não é divisível por 100 (ano % 100 != 0) — exceção: anos de século normalmente NÃO são bissextos
// OU é divisível por 400 (ano % 400 == 0) — exceção da exceção: anos de século divisíveis por 400 SÃO bissextos

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é bissexto.\n", ano);
    } else {
        printf("%d não é bissexto.\n", ano);
    }

    return 0;
}