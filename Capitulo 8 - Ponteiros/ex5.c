#include <stdio.h>

int main(void) {

    int num1 = 5;
    int *ptr;
    ptr = num1;

    printf("%d\n", sizeof(num1));
    printf("%d\n", sizeof(ptr));

    printf("§%d§\n", ptr);


    return 0;
}