

//Peça o raio de um círculo e calcule sua área (área = π × r²).

#include <stdio.h>
int main (){

    float raio;

    printf("Informe o raio do círculo:\n");
    scanf("%f", &raio);

    float area = 3.14 * (raio * raio);

    printf("A area do círculo é: %.2f\n", area);

    return 0;

}
