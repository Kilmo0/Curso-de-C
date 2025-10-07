#include <stdio.h>

int main() {
    
    int x, y, temp;
    printf("Por favor digite dois valores: ");
    scanf("%d %d", &x, &y);
    
    if (x > y) {

        temp = x;
        x = y;
        y = temp;

        printf("O menor valor é: %d\nO maior valor é: %d", x, y);
    }
    
    return 0;
}