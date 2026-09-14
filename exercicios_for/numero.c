

//Pede um número ao usuário e imprime todos os números de 1 até n, um por linha.

#include <stdio.h>

int main() {

    int numero;
    int contador;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    printf("Numeros de 1 ate %d:\n", numero);

    //imagine uma escada. voce começa a subir no 1ro degrau e quer ir ate o 5. voce continua subindo se
    //o degrau for menor igual a 5, e o incremento é pra continuar subindo um degrau

    for (contador = 1; contador <= numero; contador++) {
        printf("%d\n", contador);
    }

    return 0;
}