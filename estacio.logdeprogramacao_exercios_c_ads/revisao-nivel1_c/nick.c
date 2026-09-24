

#include <stdio.h>

int main() {

    char nickname[50];

    printf("Digite o nome do seu jogador: ");
    scanf("%49s", nickname);

    printf("Bem-vindo(a) %s!\n", nickname);

    return 0;
}