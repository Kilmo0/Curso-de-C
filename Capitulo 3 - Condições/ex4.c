#include <stdio.h>

int main() {

    int num;
    printf("Por favor, digite um número: ");
    scanf("%d", &num);

    if (num)
    {
        printf("O número é diferente de 0!");
    } else {
        printf("O número é igual a 0");
    }
    

    return 0;
}