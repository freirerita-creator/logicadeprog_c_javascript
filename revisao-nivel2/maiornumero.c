

//Peça três números e mostre qual é o maior.

#include <stdio.h>

int main(){

int numero1, numero2, numero3;

printf("Digite o primeiro numero:\n");
scanf("%d", &numero1);

printf("Digite o segundo numero:\n");
scanf("%d", &numero2);

printf("Digite o terceiro numero:\n");
scanf("%d", &numero3);

//precisa fazer as comparaçoes explicitamente

if( numero1 > numero2 && numero1 > numero3) {
    printf("O primeiro numero é o maior.\n");

} else if (numero2 > numero1 && numero2 > numero3) {
    printf("O segundo numero é o maior.\n");

} else {
    printf("O terceiro numero é o maior.\n");

}

return 0;

}







