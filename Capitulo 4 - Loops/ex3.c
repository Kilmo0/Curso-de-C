#include <stdio.h>

int main() {
    int i = 1, num = 1;
    char carc[11] = "==========";

    while (i <= 10) {
        
        printf("%2d * %2d = %3d\n", i, num, i*num );
        num = num + 1;

        if (num > 10) {

            i = i + 1;
            num = 1;
            printf("%s\n", carc);
        }
        
    }

    return 0;
}