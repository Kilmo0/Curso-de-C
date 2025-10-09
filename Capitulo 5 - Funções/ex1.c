#include <stdio.h>

int main() {
    
    linhas();
    puts("P R O G R A M A");
    linhas();

    return 0;
}


linhas() {
    
    for(int i = 1; i <= 16; i++) {
        putchar('*');
    } 
    putchar('\n');
}