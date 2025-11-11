#include <stdio.h>

typedef struct {int dia, mes, ano} DATA;

typedef struct pessoa {
    char nome[100];
    int idade;
    float salario;
    DATA nasc;
};

void mostrar(struct pessoa x) {

    printf("NOME: %10s\n", x.nome);
    printf("IDADE: %10d\n", x.idade);
    printf("SALARIO: %10.0f\n", x.salario);
    printf("DATA: %10d/%d/%d\n", x.nasc.dia, x.nasc.mes, x.nasc.ano);
}



int main(void) {
    
    struct pessoa p = {"Kaua", 19, 1600, {9,01,2006}};
    mostrar(p);

    return 0;
}