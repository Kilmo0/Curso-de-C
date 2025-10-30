#include <stdio.h>

int main(void) {

    int n;
    puts("Introduza um numero inteiro:");
    
    while(scanf("%d", &n) == 0) {
        fflush(stdin);
    }
    printf("Valor inteiro é: %d\n", n);
    
    return 0;
}