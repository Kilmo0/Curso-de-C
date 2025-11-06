#include <stdio.h>
#include <stdlib.h>
#define MAX_LINES 80

int main(int argc, int *argv[]) {

    FILE *fp;
    int ch;
    int i = 0;

    switch(argc) {

        case 1: fp = stdin;
            printf("Argumentos Insuficientes!");
            exit(1);
            break;
        
        case 2:
            if((fp = fopen(argv[1], "r")) == NULL) {
                printf("Argumento Inválido");
                exit(2);
            } break;

        default: printf("aaa");
        exit(3);
    }

    while((ch = fgetc(fp)) != EOF && i < MAX_LINES) {
        putchar(ch);
        i++;
    }
    fclose(fp);

    return 0;
}