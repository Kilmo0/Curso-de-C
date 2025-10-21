#include <stdio.h>

#define NUM 20

int  strlen(char *v) {

    int i;

    for(i = 0; v[i] != '\0'; i++);
    return i;
}


char* strcat(char *destino, const char *origem) {

    int i, j;

    for(i = 0; destino[i] != '\0'; i++);

    for(j = 0; destino[j] != '\0'; j++) {
        destino[i+j] = origem[j];
    }

    destino[i+j] = '\0';
    return destino;
}


int main(void) {

    char nome[NUM];
    char sobrenome[NUM];
    // char completo[NUM];

    gets(nome);
    gets(sobrenome);

    strcat(nome, sobrenome);
    printf("%s\n", nome);

    return 0;
}
