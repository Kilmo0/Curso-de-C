#include <stdio.h>

int main() {

    float salario;
    printf("Por favor digite o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 0) {
        printf("Formato invalido!");

    } else if (salario > 1000) {
        printf("Você deve pagar %f de Taxa!", salario*0.10);
    
    } else {    
        printf("Você deve pagar %f de Taxa!", salario*0.05);
    
    }

    return 0;
}