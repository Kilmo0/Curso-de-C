#include <stdio.h>


//AJUDA DO CHATGPT PARA FAZER ESSE EXERCICIO, POIS ACREDITO QUE O LIVRO ESTÁ EXPLICANDO ERRADO

int main(void) {
    char s[100];
    char *prt = s;

    printf("Digite uma string: ");
    scanf("%99s", s);  // evita overflow

    // Imprime normal
    while (*prt != '\0') {
        putchar(*prt);
        prt++;
    }

    putchar('\n');

    // Agora 'prt' está no fim da string ('\0')
    prt--;

    // Imprime invertido
    while (prt >= s) {
        putchar(*prt);
        prt--;
    }

    putchar('\n');
    return 0;
}
