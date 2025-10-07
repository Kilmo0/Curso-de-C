#include <stdio.h>

int main() {

    float salario;
    printf("Por favor digite seu salário: ");
    scanf("%f", &salario);
    
    if(salario < 100000) {
        salario = salario + 1000;
        printf("\nSeu novo salário é %f", salario);

    } else {
        printf("\nSeu salário não mudou =( ");
    }

    return 0;
}