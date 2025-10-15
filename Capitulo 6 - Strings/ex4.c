#include <stdio.h>

int main(void) {

    char nome[10];
    char sobrenome[10];

    printf("Por favor digite seu nome: ");
    scanf("%s", nome);
    printf("Por favor digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Seu nome é %s %s", nome, sobrenome);

    return 0;
}