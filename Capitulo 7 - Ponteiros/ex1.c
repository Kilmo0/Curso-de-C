#include <stdio.h>

int main() {

    int x = 5;
    float pi = 3.14;
    int *ptr = &x;
    float *ptrpi = &pi;

    printf("%d\n", ptr);

    return 0;
}