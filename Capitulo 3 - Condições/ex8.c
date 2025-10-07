#include <stdio.h>

int main() {

    float salario, imposto;

    printf("Por favor digite seu salário: ");
    scanf("%f", &salario);

    if (salario <= 0) {
        printf("Valor inválido! ");
    } else {
        
        if (salario > 1000) {
            imposto = salario*0.1;

        } else {
            imposto = salario*0.05;
        
        }
    }
    
    printf("Seu salário é de: %f\n e você terá que pagar de imposto: %f", salario, imposto);

    
    return 0;
}