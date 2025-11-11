#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char s[100], *ptr;

    printf("Por favor digite sua String: "); scanf("%s", s);
    ptr = malloc(strlen(s)+ 1);

    if(ptr == NULL) {
        puts("Problema na alocação de memória");
    } 
    else {
        strcpy(ptr, s);
        printf("String original: %s\nCopia: %s\n", s, ptr);
        free(ptr);
    }


    return 0;
}