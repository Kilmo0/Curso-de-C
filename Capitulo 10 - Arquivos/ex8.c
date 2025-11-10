#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int i, v[10];

    for(i = 0; i <10; i++) {
        printf("Introdução do %d-ésimo n~: ", i+1);
        scanf("%d", &v[i]);
    }

    if((fp = fopen("DADOS.DAT", "wb")) == NULL) {
        printf("Não foi possivel criar arquivo %s\n", "DADOS.DAT");
        exit(1);
    }

    if(fwrite(v, sizeof(int), 10, fp) != 10) {    
        fprintf(stderr,"Não foram escritos todos os elementos!!!\n\n");
    }
    fclose(fp);

    return 0;
}