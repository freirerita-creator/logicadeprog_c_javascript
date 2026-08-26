#include <stdio.h>

int idade = 25;
float altura = 1.75;
double peso = 70.5;
char inicial = 'A';
char nome[20] = "João";

int main() {
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2lf\n", peso);
    printf("Inicial: %c\n", inicial);
    printf("Nome: %s\n", nome);
    
    return 0;
}   