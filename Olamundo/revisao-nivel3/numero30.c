

//Peça um número e diga se ele está entre 10 e 50, mas exclua o valor 30 dessa faixa.


#include <stdio.h>

int main () {

    int numero;

    printf("Digite um numero:\n");
    scanf ("%d", &numero);

    if (numero >= 10 && numero <= 50 && numero !=30) {
        printf("Numero está entre 10 e 50.\n");

    } else if (numero == 30) {
        printf("O numero 30 está excluído do intervalo.\n");
        
    } else {
        printf("o numero não está entre 10 e 50.\n");
    }

    return 0;

    }

    
