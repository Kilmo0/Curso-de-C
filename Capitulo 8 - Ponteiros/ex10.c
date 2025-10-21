#include <stdio.h>

int main(void) {

    char s[20];
    char *ptr = &s;


    printf("Digite uma String: "); scanf("%s", s);

    while(*ptr != '\0'){
        putchar(*ptr);
        ptr++;
    }

    return 0;
}