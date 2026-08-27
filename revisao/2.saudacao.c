

//Peça o nome do usuário e exiba uma saudação personalizada (ex: "Olá, Rita!").

//não coloca ; no final da biblioteca.
#include <stdio.h> 

//precisa colocar o limitador de caracteres para uma variavel char.

int main (){  
    char nome [50];  
    printf("Digite o seu nome:");

//Quando nome é um vetor (array). Não se usa &.

    scanf("%s", nome);

//precisa colocar especificador da variavel a ser exibida no printf.  
  
    printf("Olá, %s!", nome);

    return 0;

}
