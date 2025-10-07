#include <stdio.h>

int main() {

    char estado_civil;
    printf("Por favor digite o seu estado Cívil\nAs opções são:\n");
    printf("S - Solteiro\nC - Casado\nD - Divorciado\nV - Viuvo\n");
    scanf(" %c", &estado_civil);


    switch(estado_civil) {

    case 'C': printf("Você é casado\n"); break;
    case 'S': printf("Você é solteiro\n"); break;
    case 'D': printf("Você é divorciado\n"); break;
    case 'V': printf("Você é viuvo\n"); break;
    default: printf("Valor Inválido\n"); break;
    }

    // getchar();
    return 0;
}