

//Número positivo
//Peça um número ao usuário.
//Se o número for maior que zero, mostre: "O número é positivo."

#include <stdio.h>
int main (){

int numero;

printf("Digite um numero:\n");
scanf("%d", &numero);

if(numero > 0){
    printf("Numero é positivo!\n");
    
} else if(numero < 0) {
    printf("Numero é negativo.\n");

} else {
    printf("O numero é zero.\n");

}

return 0;

}