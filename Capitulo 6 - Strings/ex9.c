#include <stdio.h>

char* strcopy(char *origen, char *dest);

int main(void) {

    char nome[30];
    char nome2[30];
    scanf("%s", nome);

    strcopy(nome, nome2);

    puts("========");
    printf("%s", nome2);
    return 0;
}


char* strcopy(char *origen, char *dest) {

    int i;
    for (i = 0; origen[i] != '\0'; i++) {
        dest[i] = origen[i];
    }
    dest[i] = '\0';
    return dest;
}