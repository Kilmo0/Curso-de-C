#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *strdub(char *s) {

    char *temp;
    temp = malloc(strlen(s) + 1);
    if(temp != NULL) {
        strcpy(temp, s);
    }

    return temp;
}

int main(void) {

    char nome[20];
    scanf("%s", nome);
    char *novo = strdub(nome);

    printf("%s----%s", nome, novo);
    free(novo);

    return 0;
}