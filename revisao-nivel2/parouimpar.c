

//Peça um número e diga se ele é par ou ímpar.

#include <stdio.h>

int main (){

    int numero;

    printf("Digite um número de 0-10:");
    scanf("%d", &numero);


//Colocar parenteses na funcao if
//Para comparar igualdade em C, usa-se == (dois sinais de igual). Um único = atribui um valor, não compara.
//numero % 2 == 0, se lê como: "se o resto da divisão de numero por 2 for igual a 0" → ou seja, "se numero for par".
    if (numero % 2 == 0) {
        printf("O numero é par!\n"); 

    } else {
        printf("O número é ímpar!\n");
    }

    return 0;
}