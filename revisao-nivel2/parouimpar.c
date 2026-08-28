

//Peça um número e diga se ele é par ou ímpar.

#include <stdio.h>

int main (){

    int numero;

    printf("Digite um número de 0-10:");
    scanf("%d", &numero);


//Colocar parenteses na funcao if
//Para comparar igualdade em C, usa-se == (dois sinais de igual). Um único = atribui um valor, não compara.

    if (numero % 2 == 0) {
        printf("O numero é par!\n"); 

    } else {
        printf("O número é ímpar!\n");
    }

    return 0;
}