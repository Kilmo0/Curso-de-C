#include <stdio.h>

int main() {

    char estado_civil, test;
    printf("Por favor digite o seu estado Cívil\nAs opções são:\n");
    printf("S - Solteiro\nC - Casado\nD - Divorciado\nV - Viuvo\n");
    scanf(" %c", &estado_civil);


    switch(estado_civil) {

    case 'C': printf("Você é casado\n"); 
    case 'S': printf("Você é solteiro\n"); 
    case 'D': printf("Você é divorciado\n"); 
    case 'V': printf("Você é viuvo\n"); 
    default: printf("Valor Inválido\n"); 
    }

    printf("Getchar de test");
    test = getchar();
    return 0;
}