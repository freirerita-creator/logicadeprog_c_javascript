

//peça o peso e a altura de uma pessoa, calcule o IMC e diga em qual faixa ela se encontra: 
//abaixo do peso, peso normal, sobrepeso ou obesidade.

//Abaixo de 18,5: Magreza ou abaixo do peso
//Entre 18,5 e 24,9: Peso normal ou adequado
//Entre 25,0 e 29,9: Sobrepeso
//30,0 ou mais: Obesidade

#include <stdio.h>

int main() {

float peso;
float altura;
float imc;

//para formatar saída float. No scanf é só %f.

printf("Digite seu peso:\n");
scanf("%f", &peso);

printf("Digite sua altura:\n");
scanf("%f", &altura);

//calculo do imc vem depois da leitura

imc = peso / (altura * altura);

//Em C, números decimais usam ponto, não vírgula

if(imc < 18.5) {
    printf("Abaixo do peso ideal.\n");

} else if (imc >= 18.5 && imc <= 24.9) {
    printf("Peso normal.\n");

} else if (imc >= 25.0 && imc <= 29.9) {
    printf("Sobrepeso.\n");

} else {
    printf("Obesidade");

}

return 0;

}





