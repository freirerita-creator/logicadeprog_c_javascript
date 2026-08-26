#include <stdio.h>
int main() {
    char nome[50];
    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);
    printf("Olá, %s\n", nome);
    return 0;
}