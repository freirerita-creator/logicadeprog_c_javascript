

//Peça a idade e diga se a pessoa é criança, adolescente, adulta ou idosa

#include <stdio.h>
int main(){

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

//Para que a lógica funcione, é preciso verificar a condição mais restritiva primeiro (idoso), antes da mais abrangente (maior de idade)

    if (idade < 18) {
        printf("Voce é menor de idade!\n");

    } else if (idade >= 60) {
        printf("Voce é idoso!\n");
   
    } else {
        printf("Voce é maior de idade.\n");
    }

    return 0;

    }
