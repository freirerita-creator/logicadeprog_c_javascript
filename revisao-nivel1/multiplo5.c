

//Peça um número e diga se ele é múltiplo de 5.

#include <stdio.h>

int main (){

int numero;

printf("Digite um numero inteiro:\n");
scanf("%d", &numero);

if(numero % 5 == 0) {
    printf ("O número é multiplo de 5.\n");

} else {
    printf("O número não é multiplo de 5.\n");

}

return 0;

}



