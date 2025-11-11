#include <stdio.h>
#include <string.h>

int main(void) {

    char s[200], outra[200];
    printf("Digite algo: "); scanf("%s", s);
    
    strcpy(outra, s);
    printf("String original: %s\nNova String: %s\n", s, outra);


    return 0;
}