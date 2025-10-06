#include <stdio.h>

int main() {

    int num;
    printf("Por favor insira um número: ");
    scanf("%d", &num);

    if (num != 0) {
        printf("Seu número é diferente de 0");
    } else {
        printf("\nSeu número é 0!");
    }
    
    return 0;
}