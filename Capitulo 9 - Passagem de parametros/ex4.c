#include <stdio.h>

void troca(int *valor1, int *valor2) {
    int *temp;

    temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}

int main(void) {
    
    int num1, num2;

    puts("Por favor digite dois valores inteiros!");
    scanf("%d %d", &num1, &num2);

    printf("O valro correspondente ao num1 e: %d\njá o num2 e: %d\n", num1, num2);
    troca(&num1, &num2);
    printf("Depois da troca o valor num1 e: %d\ne de num2 e: %d\n", num1, num2);

    return 0;
}