#include <stdio.h>

int main() {

    float salario, taxa;
    char sexo;

    printf("Por favor digite seu salário: "); scanf("%f", &salario);
    printf("Por favor digite seu Sexo M/F: "); scanf(" %c", &sexo);

    switch(sexo) {
        
        case 'f':
        case 'F': taxa = salario*0.05; break;
        case 'm':
        case 'M': taxa = salario*0.1; break;
        default: printf("Valor invalido"); break;
    }

    printf("Seu salário é de: %f\n, e você pagará de imposto: %f", salario, taxa);

    return 0;
}