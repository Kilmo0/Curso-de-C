#include <stdio.h>

int main(void) {

    FILE *fp; 
    char s[100];

    puts("Introduza o nome do arquivo:");
    scanf("%s", s);
    fp = fopen(s, "r");
    
    if (fp == NULL) {
        printf("---NAO FOI POSSIVEL ABRIR O ARQUIVO---\n");
    } 
    else {
        printf("Arquivo aberto com sucesso");
        fclose(fp);
    }


    return 0;
}