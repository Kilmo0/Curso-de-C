#include <stdio.h>

int main() {

    int x;
    printf("por favor digite o número desejado: ");
    scanf("%d", &x);
    if (x >= 0) {
        printf("Seu numero e positivo!\n");
    } else {
        printf("Seu numero e negativo!\n");
    }
    

    return 0;
}