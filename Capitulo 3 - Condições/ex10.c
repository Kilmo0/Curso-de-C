#include <stdio.h>

int main() {

    float salario, taxa;
    
    printf("Por favor digite seu salario: "); scanf("%f", &salario);
    taxa = salario > 10000 ? salario*0.1 : salario*0.05;

    printf("seu salario e: %f\nE você deve: %f", salario, taxa);
    
    return 0;
}