#include <stdio.h>
int main() {

    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media >= 7) {
        printf("Voce foi aprovado! Media: %.2f\n", media);

      } else { 
        printf("Reprovado! Media: %.2f\n", media);
 }
        return 0;
    }