#include <stdio.h>

int main() {

    float salario;
    printf("Por favor digite seu salario: "); scanf("%f", &salario);

    salario = salario * (salario > 1000 ? salario*1.05 : salario*1.1);
    printf("%f", salario);
    return 0;
}