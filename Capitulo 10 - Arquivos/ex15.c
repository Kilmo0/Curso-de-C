#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int i, n;
    float v[10], x;

    for(i = 0; i < 10; i++) {
        printf("Introduza o %d-essimo numero: ", i+1);
        scanf("%f", &v[i]);
    }

    fp = fopen("DADOS.DAT", "w+b");
    if(fp == NULL) {
        printf("Não foi possível criar o arquivo!\n");
        exit(1);
    }

    if(fwrite(v, sizeof(float), 10, fp) != 10) {
        printf("Não foi possível imprimir todos os dados!\n"); 
        exit(2);
    }

    printf("Qual ordem de numero planeja ver!");
    scanf("%d", &n);

    fseek(fp, (long) (n-1)*sizeof(float), SEEK_SET);
    fread(&x, sizeof(float), 1, fp);
    printf("o primeiro valor introduzido foi %f\n", x);
    fseek(fp, -(long) sizeof(float), SEEK_END);
    fread(&x, sizeof(float), 1, fp);
    printf("O ultimo valor introduzido foi: %f\n", x);

    fclose(fp);

    return 0;
}