

//Peça um número e mostre quantas vezes ele pode ser dividido por 2 até chegar a 1 ou menos.


#include <stdio.h>

int main() {

    int numero;
    int contador = 0;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    //Enquanto o número for maior que 1, continue dividindo.

    while (numero > 1) {

        numero = numero / 2;
        contador++;
    }

    printf("Foram feitas %d divisoes por 2.\n", contador);

    return 0;
}