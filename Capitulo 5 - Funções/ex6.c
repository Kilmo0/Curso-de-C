#include <stdio.h>

int maximo(int valor1, int valor2);

int main(void) {
    int num1, num2;

    printf("Digite seu primeiro numero: "); scanf("%d", &num1);
    printf("Digite o segundo numero: "); scanf("%d", &num2);

    int maior = maximo(num1, num2);
    printf("O maior valor é: %d", maior);
    return 0;
}

int maximo(int valor1, int valor2) {
    if (valor1 > valor2) {
        return valor1;

    } else {
        return valor2;
    }
}