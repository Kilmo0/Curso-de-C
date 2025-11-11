#include <stdio.h>

typedef struct {int dia, mes, ano} data;

typedef struct pessoa {
    char nome[100];
    int idade;
    float salario;
    data nasc;
};

void ler(struct pessoa *ptr) {

    printf("Qual o seu nome: "); scanf("%s", ptr->nome);
    printf("Qual a sua idade: "); scanf("%d", &ptr->idade);
    printf("Qual o seu salario: "); scanf("%f", &ptr->salario);
    printf("Que dia voce nasceu: DD/MM/AAAA"); scanf("%d %d %d", &ptr->nasc.dia, 
    &ptr->nasc.mes, &ptr->nasc.ano);
}

void mostrar(struct pessoa x) {

    printf("NOME: %10s\n", x.nome);
    printf("IDADE: %10d\n", x.idade);
    printf("SALARIO: %10.0f\n", x.salario);
    printf("DATA: %10d/%d/%d\n", x.nasc.dia, x.nasc.mes, x.nasc.ano);
}



int main(void) {

    struct pessoa p = {"Anton", 60, 2500, {11,12,1960}};
    mostrar(p);
    ler(&p);
    puts("\n");
    mostrar(p);

    return 0;
}