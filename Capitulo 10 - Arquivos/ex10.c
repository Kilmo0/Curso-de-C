#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int i = 0, valor;

    fp = fopen("DADOS.DAT", "rb");

    if(fp == NULL) {
        printf("Impossivel abrir o arquivo!");
        exit(1);
    }
    
    while(fread(&valor, sizeof(int), 1, fp)) {
        printf("%2d, N:%d\n", ++i, valor);
    }


    fclose(fp);
    
    return 0;
}