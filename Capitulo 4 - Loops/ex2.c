#include <stdio.h>

int main() {

    int i, num;
    i = 0;

    while(i <= 10) {
        printf("5 * %2d = %2d\n", i, i*5);
        i = i+1;
    }

    return 0;
}