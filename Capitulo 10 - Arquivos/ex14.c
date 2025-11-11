#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;

    if(argc != 2) {
        printf("SIntaxe incorreta!\n");
        exit(1);
    }
    fp = fopen(argv[1], "rb");
    
    if(fp == NULL) {
        printf("Impossível abrir o arquivo!");
        exit(2);
    }

    fseek(fp, 0L, SEEK_END);    
    printf("Dim. do arquivo: %ld\n", ftell(fp));
    fclose(fp);
    
    return 0;
}