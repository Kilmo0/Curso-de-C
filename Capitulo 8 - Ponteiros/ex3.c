#include <stdio.h>

int main(void) {

    int a = 5;
    int *ptr = a;
    a = a + 1;


    printf("%d\n", ptr);
    printf("%d\n", a);


    return 0;
}