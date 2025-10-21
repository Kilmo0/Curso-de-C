#include <stdio.h>

int main(void) {

    char s[20];
    char *ptr = s;

    printf("String: "); scanf("%s", s);

    while(*ptr != '\0') {
        ptr++;
    }

    while (ptr >= s) {
        putchar(*ptr);
        ptr--;
    }
    putchar('\n');

    return 0;
}