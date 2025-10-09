#include <stdio.h>


int pow(int valor1, int valor2) {

    int resp, i;    
    for(i = 1, resp = 1; i <= valor2; i++){
        resp *= valor1;
    }

    return resp;
}

int sigma(int valor1, int valor2) {

    int total = 0;

    for(int i = 1; i <= valor2; i++) {

        total = total + valor1;
        valor1++;
    }

    return total;
}

int main() {

    int num1, num2;
    num1 = 1;
    num2 = 5;

    int potencia = sigma(num1, num2);
    printf("%d", potencia);

    return 0;
}