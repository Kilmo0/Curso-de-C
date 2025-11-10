#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;

    fp = fopen("Lixo", "wb");

    if(fp == NULL) {
        printf("Impossível criar o arquivo!");
        exit(1);
    }
    fclose(fp);
    fp = fopen("Lixo", "rb");
    
    if(fp == NULL) {
        printf("Impossível abrir  o arquivo");
        exit(1);
    }

    puts(feof(fp) ? "EOF" : "NOT EOF");
    fgetc(fp);

    puts(feof(fp) ? "EOF" : "NOT EOF");
    fclose(fp);

    return 0; 
}