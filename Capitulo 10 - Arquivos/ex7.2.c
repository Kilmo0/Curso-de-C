#include <stdio.h>
#include <stdlib.h>
#define MAX_LINES 80
#define SINAL '-'

void FATAL_ERROR(int num_erro, char *string);

int main(int argc, char *argv[]) {

    FILE *fp = stdin;
    char s[MAX_LINES+ 1];
    int i = 0;
    int n_linhas = 10;

    switch(argc) {
        
        case 1: break;
        case 2: 
            if(argv[1][0] == SINAL)  {
                n_linhas = atoi(argv[1] + 1);
            }
            else if((fp = fopen(argv[1], "r")) == NULL) {
                FATAL_ERROR(2, argv[1]);
            }   break;

        case 3:
            if(argv[1][0] != SINAL) {
                FATAL_ERROR(1, "");
            }
            else {
                n_linhas = atoi(argv[1] + 1);
                if((fp = fopen(argv[2], "r")) == NULL)
                FATAL_ERROR(2, argv[2]);
            }   break;

        default: FATAL_ERROR(1, "");
    }

    while (fgets(s, MAX_LINES+1, fp) != NULL && i++ < n_linhas)  {
        printf("%s", s);
    }

    fclose(fp);
    return 0;
}

void FATAL_ERROR(int num_erro, char *string) {

    switch(num_erro) {

        case 1: 
            fprintf(stderr, "Uso incorreto do programa\n");
            fprintf(stderr, "Uso: [-n] [arquivo]\n\n"); break;
        
        case 2:
            fprintf(stderr, "Não foi possível abrir o arquivo %s\n", string);
            break;

        default:
            fprintf(stderr, "ERROR404");
            break;
    }
    exit(num_erro);
}