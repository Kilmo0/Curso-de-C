#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;
    long int nbytes = 0;

    if(argc != 2) {
        printf("Sintaxe incorreta!!\n\n");
        exit(1);
    }

    fp = fopen(argv[1], "rb");
    
    if(fp == NULL) {
        printf("Impossível abrir o arquivo!");
        exit(2);
    }

    while(fgetc(fp) != EOF) {
        nbytes++;
    }
    fclose(fp);

    printf("Dim. do arquivo: %ld\n", nbytes);
    return 0;
}