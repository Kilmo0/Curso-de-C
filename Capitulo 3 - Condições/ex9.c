#include <stdio.h>
// Esse código é um teste eu sei que seria melhor utilizar a condição do primeiro if no else
// para utilizar o estado cívil tanto maiscula quando minuscula usando o ||, porém quis testar
// a lógica do C

int main() {

    float salario, imposto;
    char estado_civil;

    printf("Por favor digite seu salario: "); scanf("%f", &salario);
    printf("Digite S/C para seu estado cívil: "); scanf(" %c", &estado_civil);

    if (estado_civil != 'S' && estado_civil != 'C') {
        printf("\nFormato Invalido!\n");

    } else if (estado_civil == 'S') {
        imposto = salario*0.09;
        printf("seu salario e: %f\nE voce deve pagar: %f", salario, imposto);

    } else if (estado_civil == 'C') {
        imposto = salario*0.1;
        printf("seu salario e: %f\nE voce deve pagar: %f", salario, imposto);

    } 

    return 0;
}