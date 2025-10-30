#include <stdio.h>

void maior(int a, int b) {
    (a > b) ? printf("%d", a) : printf("%d", b);
}


int main() {

    int num1, num2;
    printf("POR FAVOR DIGITE O PRIMEIRO NUMERO: "); scanf("%d", &num1);
    printf("POR FAVOR DIGITE O SEGUNDO NUMERO: "); scanf("%d", &num2);

    printf("ENTRE %d E %d O MAIOR É: ", num1, num2);
    maior(num1, num2);

    putchar('\n');
    return 0;
}