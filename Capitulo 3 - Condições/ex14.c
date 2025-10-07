#include <stdio.h>

int main() {

    int num1, num2, resl;
    char op;
    
    printf("Por favor digite o primeiro numero: "); scanf("%d", &num1);
    printf("Por favor digite o operador: "); scanf(" %c", &op);
    printf("Por favor digite o segundo numero: "); scanf("%d", &num2);

    switch(op) {
        
        case '+': resl = num1 + num2; break;
        case '-': resl = num1 - num2; break;
        case '*':
        case 'x':
        case 'X': resl = num1 * num2; break;
        case '/':
        case '\\':
        case ':': resl = num1 / num2; break;
        default: printf("Valor invalido!"); break;
    }
    
    printf("%d %c %d = %d", num1, op, num2, resl);

    return 0;
}