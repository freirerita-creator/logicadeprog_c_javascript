#include <stdio.h>
int main() {
    int numero1 = 7;
    int numero2 = 5;
    if (numero1 > numero2) {
        printf("O número %d é maior que o número %d.\n", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("O número %d é menor que o número %d.\n", numero1, numero2);
    } else {
        printf("Os números são iguais.\n");
    }
    return 0;