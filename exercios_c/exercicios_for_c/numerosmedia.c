

//Peça 5 números (um por vez) e calcule a soma e a média deles.



    #include <stdio.h>

int main() {

    int numero;
    int soma = 0;
    float media;

    for (int i = 1; i <= 5; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
    }

    media = soma / 5.0;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}
