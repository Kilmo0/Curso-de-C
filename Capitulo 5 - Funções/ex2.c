#include <stdio.h>

void linhas(int asteristicos);

int main(void) {

    linhas(3);
    linhas(5);
    linhas(7);
    linhas(5);
    linhas(3);

    return 0;
}

void linhas(int asteristicos) {

    for (int i = 1; i <= asteristicos; i++) {
        putchar('*');
    }
    putchar('\n');
    
}