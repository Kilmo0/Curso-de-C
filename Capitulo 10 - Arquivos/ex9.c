#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    FILE *fp;
    int i, v[10], n;

    if((fp = fopen("DADOS.DAT", "rb")) == NULL) {
        printf("impossível abrir arquivo!\n");
        exit(1);
    }

    n = fread(v, sizeof(int), 10, fp);
    
    if(n != 10) {
        fprintf(stderr, "Foram lidos apedas %d Elementos!\n", "DADOS.DAT");
        exit(1);
    }

    for(i = 0; i < n; i++) {
        printf("%2d N:%d\n", i+1, v[i]);
    }
    return 0;
}