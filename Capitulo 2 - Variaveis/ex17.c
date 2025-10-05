#include <stdio.h>

int main () {
    char ch;
    printf("Por favor escrava seu caractere char: ");
    scanf("%c", &ch);
    printf("O caracter que você escolheu foi '%c'\nO seu formato ASCII É: %d", ch, ch);
    return 0;
}