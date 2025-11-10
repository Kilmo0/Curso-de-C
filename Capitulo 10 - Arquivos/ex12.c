#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;
    int conta = 0;

    if(argc != 2) {
        printf("Sintaxe Inválida!\n");
        exit(1);
    }
    
    fp = fopen(argv[1], "rb");
    if(fp == NULL) {
        printf("Impossível abrir o arquivo!");
        exit(2);
    }

    while(fgetc(fp) != EOF) {
        conta++;
    }
    fclose(fp);

    printf("O total de caracteres e: %d\n", conta);

    return 0;
}