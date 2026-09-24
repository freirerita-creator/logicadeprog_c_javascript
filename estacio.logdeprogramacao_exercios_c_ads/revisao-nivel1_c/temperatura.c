

//Peça a temperatura do dia e diga se está calor (acima de 30°C) ou não.

#include <stdio.h>

int main (){

int temperatura;

printf("Digite a temperatura:\n");
scanf("%d", &temperatura);

if(temperatura > 30) {
    printf("Está calor!");

} else {
    printf("Não está calor!");

}

return 0;

}