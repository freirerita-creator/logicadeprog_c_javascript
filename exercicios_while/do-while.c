

#include <stdio.h>
#include <string.h>

int main() {

    char senha[20];
    char senha_correta[20] = "1234";

    // O do-while executa o código pelo menos uma vez
    // antes de verificar a condição.

    do {
        printf("Digite a senha: ");
        scanf("%19s", senha);

        // O if verifica se a senha está errada.

        if (strcmp(senha, senha_correta) != 0) {
            printf("Senha incorreta! Tente novamente.\n");
        }

    // Enquanto a senha for diferente, repete.
    
    } while (strcmp(senha, senha_correta) != 0);

    printf("Senha correta!\n");

    return 0;
}

