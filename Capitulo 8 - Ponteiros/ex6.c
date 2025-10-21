#include <stdio.h>

int main(void) {

    char a = 'z';
    int num = 1234;
    float pi = 3.1415;

    char *prt_a = &a;
    int *prt_num = &num;
    float *prt_pi = &pi;
    
    printf("%d %d\n", sizeof(a), sizeof(*prt_a));
    printf("%d %d\n", sizeof(num), sizeof(*prt_num));
    printf("%d %d\n", sizeof(pi), sizeof(prt_pi));


    return 0;
}