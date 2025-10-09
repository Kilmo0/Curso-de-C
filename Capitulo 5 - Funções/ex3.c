#include <stdio.h>

void linhas(char caracter, int numero) {

    for(int i = 1; i <= numero; i++) {
        putchar(caracter);
    }
    putchar('\n');
}


int main(void) {

    char c;
    int n;

    printf("Digite o caracter que você deseja: "); scanf(" %c", &c);
    printf("Por favor digite o número de caracter que deseja: "); scanf("%d", &n);

    linhas(c, n);
    
    return 0;
}