#include <stdio.h>

int soma(int valor1, int valor2) {

    int total;
    total = valor1 + valor2;

    return total;
}

int main(void) {

    int num1 = 10, num2 = 5;
    int total = soma(num1, num2);
    
    printf("%d", total);

    return 0;
}