#include <stdio.h>

int main(void) {

    char nome[20];
    while (1) {
        
        printf("Nome: ");
        gets(nome);

        if(nome[0] == 0) {
            break;
        }
    }
    

    return 0;
}