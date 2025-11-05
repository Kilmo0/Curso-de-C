#include <stdio.h>

int main(void) {

    FILE *fp;
    char s[100];

    printf("Por favor digite o nome de um arquivo: ");
    scanf("%s", s);
    fp = fopen(s, "w");

    fclose(fp);

    return 0;
}