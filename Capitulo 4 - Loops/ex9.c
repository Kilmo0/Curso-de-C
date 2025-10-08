#include <stdio.h>

int main() {

    int num;
    printf("Por favor digite um valor: "); scanf("%d", &num);

    for(int i = 1; i < num+1; i++) {

        printf("%d ", i);
    }

    return 0;
}