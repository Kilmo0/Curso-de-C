#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char *str;
    str = malloc(10);
    strcpy(str, "Maria");

    printf("String: %s\nEndereço: %p\n", str, str);
    str = realloc(str, 100);
    printf("String: %s\nEndereço: %p\n", str, str);
    free(str);

    return 0;
}