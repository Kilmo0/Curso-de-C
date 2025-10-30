#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, total;
    argv++;
    for(total = 0; *argv != NULL; argv++) {
        total += atoi(*argv);
    }
    printf("o valor total: %d\n", total);
}
