#include <stdio.h>

int main() {

    int num = 5;
    int var = num;
    num = num + 1;

    printf("%d\n", var);
    printf("%d\n", num);

    return 0;
}