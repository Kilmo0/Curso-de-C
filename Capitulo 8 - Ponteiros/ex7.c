#include <stdio.h>

int main(void) {

    int v[] = {10, 20, 30};
    int prt;

    prt = &v[0];
    
    printf("%d\n", prt);
    prt = &v[1];
    printf("%d\n", prt);



    return 0;
}