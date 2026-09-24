

//Peça um usuário e uma senha e diga se o login foi bem-sucedido, comparando com valores fixos definidos no código.

#include <stdio.h>

#include <string.h>


int main (){

    char usuario[20];
    char senha[20];

    char usuario_correto[20] = "admin";
    char senha_correta[20] = "1234";

    printf("Digite o usuario:\n");
    scanf("%s", usuario);

    printf("Digite a senha:\n");
    scanf("%s", senha);

    if(strcmp (usuario, usuario_correto) == 0 && strcmp (senha, senha_correta) == 0 ) {
        printf("Login realizado com sucesso!\n");

    } else {
        printf("login ou senha incorretos!\n");

    }

    return 0;

    }



