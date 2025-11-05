#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {

    FILE *fin, *fout;
    int ch;

    if(argc != 3) {
        printf("Sintaxe: \n\n%s Origem Destino\n\n", argv[0]);
        exit(1);
    }
    fin = fopen(argv[1], "rb");
    
    if(fin == NULL) {
        printf("IMPOSSIVEL ABRIR O ARQUIVO!");
        exit(2);
    }
    if((fout = fopen(argv[2], "wb")) == NULL) {
        printf("Impossivel abir o arquivo!");
        exit(3);
    }
    while ((ch = fgetc(fin)) != EOF) {
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);

}