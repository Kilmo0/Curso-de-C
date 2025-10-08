#include <stdio.h>

int main() {

    int active = 1, num;
    while (active) {

        puts("Digite um valor: "); scanf("%d", &num);
    
        if (num > 300) {
            continue;

        } else {
            break;
        
        }
    }
    
    return 0; 
}