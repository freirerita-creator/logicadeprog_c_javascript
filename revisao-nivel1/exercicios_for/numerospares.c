

//Mostre todos os números pares entre 1 e 50.

#include <stdio.h>

int main() {

    int numero;

    for (numero = 1; numero <= 50; numero++) {

        if (numero % 2 == 0) {
            printf("%d\n", numero);
        }
    }

    return 0;
}

