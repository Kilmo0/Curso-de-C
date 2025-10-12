#include <stdio.h>

void printarray(int array[], int numero);

int main() {

    int array[20];

    for(int i = 0; i<20; i++) {
        array[i] = i;
    }
    printarray(array, 20);

    return 0;
}

void printarray(int array[], int numero) {

    for(int i = 0; i < numero; i++) {
        printf("%d\n", array[i]);
    }
}