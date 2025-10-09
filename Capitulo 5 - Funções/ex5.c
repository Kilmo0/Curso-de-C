#include <stdio.h>

int dobrar(int valor);
int somar(int valor1, int valor2);

int main(void) {

    int num1, num2;
    num1 = 15, num2 = 8;
    int total = somar(num1, num2);

    printf("A soma entre %d e %d é: %d\n", num1, num2, total);
    printf("O numero %d e %d dobrado é igual a %d e %d", num1, num2, dobrar(num1), dobrar(num2));

    return 0;
}

int dobrar(int valor) {
    valor *= 2;
    return valor;
}

int somar(int valor1, int valor2) {
    int total;
    total = valor1 + valor2;
    return total;
}