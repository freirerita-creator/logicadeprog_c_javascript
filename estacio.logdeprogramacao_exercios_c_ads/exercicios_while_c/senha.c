

//Peça uma senha até que o usuário acerte (comparando com um valor fixo).

#include <stdio.h>
#include <string.h>

int main() {

    char senha[20];
    char senha_correta[20] = "R123f";

    printf("Digite a senha:\n");
    scanf("%19s", senha);

    //Enquanto a senha digitada for diferente da senha correta, continue repetindo.
    //Em C, você não deve comparar strings com !=. Use strcmp().


    while (strcmp(senha, senha_correta) != 0) {

        printf("Senha incorreta! Tente novamente:\n");
        scanf("%19s", senha);
    }

    printf("Senha correta!\n");

    return 0;
}
