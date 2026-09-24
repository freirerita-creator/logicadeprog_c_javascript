

//Peça um número n e mostre a tabuada desse número (de 1 a 10).

#include <stdio.h>

int main() {

    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}