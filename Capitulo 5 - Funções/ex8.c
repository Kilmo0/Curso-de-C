#include <stdio.h>

int pot(int valor1, int valor2);

int main() {

    int num1, num2;
    num1 = 5, num2 = 4;

    int a = pot(num1, num2);
    printf("%d", a);

    return 0;
}

int pot(int valor1, int valor2) {

    int resp, i;
    for(i = 1, resp = 1; i <= valor2; i++) {
        resp *= valor1;
    }

    return resp;
}