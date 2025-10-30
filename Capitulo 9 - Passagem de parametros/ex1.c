#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    
    int num1 = 5, num2 = 6;
    printf("%d", maior(num1, num2));
    
    return 0; 
}