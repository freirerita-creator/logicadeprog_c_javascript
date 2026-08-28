

//Peça um número e diga se é positivo, negativo ou zero.

#include <stdio.h>
int main(){

    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);

//Nao coloca ; depois da condicao if
//Vale sempre revisar com atenção se não sobrou um ; "perdido" depois de if, while ou for.


    if(numero >= 0) {
    printf("O numero é positivo.\n");

    } else if (numero < 0) {
        printf("O numero é negativo.\n");

    } else {
        printf("O numero é igual a zero.\n");
    }
        return 0;
    }

