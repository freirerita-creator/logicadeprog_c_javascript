

//Peça dois números inteiros e exiba a soma, subtração, multiplicação e divisão entre eles.

#include <stdio.h>

int main () {

    int numero1, numero2;

    printf("Digite o primeiro número inteiro:");
    scanf("%d",  &numero1);

    printf("Digite o segundo número inteiro:");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int multiplicacao = numero1 * numero2;
    int divisao = numero1 / numero2;

//O nome da variável precisa vir depois da vírgula, fora das aspas.
//\n para pular linha entre as saídas

    printf("A soma dos dois números é: %d\n", soma);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    return 0;

}