#include <stdio.h>

int main() {

    int a, b, *pr1, *pr2;
    a = 5, b = 3;
    pr2 = b;
    pr1 = pr2;

    printf("%d %d %d\n", b, pr1, pr2);
    
    pr2 = &b;
    printf("%d %d %d\n", b, pr1, pr2);
    
    int *pr3;
    pr2 = pr3;

    printf("%d %d\n", pr2, pr3);

    int pr4;
    pr2 = pr4;
    printf("%d %d\n", pr2, pr4);


    return 0;
}