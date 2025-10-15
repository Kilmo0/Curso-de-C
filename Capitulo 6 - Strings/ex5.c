#include <stdio.h>

int main(void) {

    char nome[20];
    printf("Insira seu nome completo: ");
    gets(nome);

    printf("Seu nome completo é: %s", nome);
    
    return 0;
}