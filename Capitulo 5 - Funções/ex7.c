#include <stdio.h>

int igual(int valor1, int valor2);

int main(void) {
    
    int x = 8, y = 8;
    int comp = igual(x, y);
    
    if(comp) {
        puts("True");

    } else {
        puts("False");
    }

    return 0;
}

int igual(int valor1, int valor2) {

    if(valor1 == valor2) {
        return 1;

    } else {
        return 0;
    }
}