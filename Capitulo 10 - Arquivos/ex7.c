#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MENOS "-"
#define MENOS_L "-l"
#define MAX_LIN 80

void Error(int num_erro, char *string);

int main(int argc, char *argv[]) {
    int mostrar_linhas = 0;
    int n_linhas = 0;
    FILE *fp = stdin;
    char s[MAX_LIN + 1];

    switch (argc) {
        case 1:
            break;

        case 2:
            if (strcmp(argv[1], MENOS_L) == 0) {
                mostrar_linhas = 1;
            } else {
                fp = fopen(argv[1], "r");
                if (fp == NULL) {
                    Error(2, argv[1]);
                }
            }
            break;

        case 3:
            if (argv[1][0] != '-') {
                Error(3, argv[1]);
            }
            if (strcmp(argv[1], MENOS_L) != 0) {
                Error(3, argv[1]);
            }
            mostrar_linhas = 1;
            fp = fopen(argv[2], "r");
            if (fp == NULL) {
                Error(2, argv[2]);
            }
            break;

        default:
            Error(1, NULL);
    }

    while (fgets(s, MAX_LIN + 1, fp) != NULL) {
        s[strcspn(s, "\n")] = '\0'; 
        if (mostrar_linhas)
            fprintf(stdout, "%d: %zu\n", ++n_linhas, strlen(s));
        else
            printf("%zu\n", strlen(s));
    }

    fclose(fp);
    return 0;
}

void Error(int num_erro, char *string) {
    switch (num_erro) {
        case 1:
            fprintf(stderr, "SINTAXE:\n\tconta [-l] [Arq]\n\n");
            break;

        case 2:
            fprintf(stderr, "Impossível abrir o arquivo: \"%s\"\n", string);
            break;

        case 3:
            fprintf(stderr, "Opção inválida!\n");
            break;
    }

    exit(num_erro);
}
