

//Peça a idade (idade menores que 100 anos) do usuário e exiba em quantos anos ele completará 100 anos.

#include <stdio.h>

int main (){

    int idade;
    

    printf("Qual é a sua idade?");
    scanf("%d", &idade);

    int idade100 = 100 - idade;

    printf("Em %d anos voce terá 100 anos\n", idade100);

    return 0;

}