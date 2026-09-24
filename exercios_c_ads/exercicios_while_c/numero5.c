

//Peça números ao usuário até que ele digite 0, e mostre quantos números foram digitados.

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    while(numero != 0) {
        printf("%d\n", numero); //mostra o numero que foi digitado, se for diferente se 0, continua pedindo numero

        printf("Digite outro numero:\n");

        scanf("%d", &numero);
    }


    return 0;

    }

