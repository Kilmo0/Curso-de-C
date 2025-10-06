#include <stdio.h>

int main() {

    int num1, num2;
    printf("Por favor digite 2 numeros: ");
    scanf("%d%d", &num1, &num2);

    printf("O resultado de %d == %d, e: %d\n", num1, num2, num1 == num2);
    printf("O resultado de %d > %d, e: %d\n", num1, num2, num1 > num2);
    printf("O resultado de %d >= %d, e: %d\n", num1, num2, num1 >= num2);
    printf("O resultado de %d < %d, e: %d\n", num1, num2, num1 < num2);
    printf("O resultado de %d <= %d, e: %d\n", num1, num2, num1 <= num2);
    printf("O resultado de %d != %d, e: %d\n", num1, num2, num1 != num2);


    return 0;
}