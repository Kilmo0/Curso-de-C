#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;
    int nota;
    char nome[100];

    if (argc != 2) {
        printf("IMPOSSIVEL ABRIR O ARQUIVO\n");
        exit(1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("IMPOSSIVEL ABRIR O ARQUIVO %s\n", argv[1]);
        exit(2);
    }
    while (fscanf(fp, "%s %d", nome, &nota) != EOF) {
        if(nota > 5) {
            printf("%s %d\n", nome, nota);
        }
    }
    fclose(fp);
    
    

    return 0;
}