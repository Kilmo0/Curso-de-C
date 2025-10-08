#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        for(int n = 1; n <=10; n++) {
            printf("%2d * %2d = %3d\n", i, n, i*n);
        }
    }


    return 0;
}