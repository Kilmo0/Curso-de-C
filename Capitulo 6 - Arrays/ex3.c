#include <stdio.h>
// #include <string.h>

void separar(int valor);

int main() {
    
    int salario[12];
    int total = 0;

    for(int i = 0; i < 12; i++) {
        
        printf("Pór favor digite o salario do mes: ");
        scanf("%d", &salario[i]);
    }
    separar(15);
    puts("Os valores Mensais são");
    separar(15);

    for(int i = 0; i < 12; i++) {
        printf("%d\n", salario[i]);
    }
    
    separar(15);
    puts("O valor anual é");
    separar(15);

    for(int i = 0; i < 12; i++) {
        total = total + salario[i];
    }
    printf("%d", total);

    return 0;
}

void separar(int valor) {

    for(int i = 0; i < valor; i++) {
        printf("=");
    } 
    putchar('\n');
}