#include <stdio.h>


int len(char *v) {

    int i;
    for(i = 0; v[i] != '\0'; i++);
    return i;
}


int main() {

    char nome[20];
    char sobrenome[20];
    char nomedomeio[20];
    int i;

    scanf("%s", nome);
    scanf("%s", sobrenome);
    scanf("%s", nomedomeio);

    char *test[3] = {nome, sobrenome, nomedomeio};

    for(int i = 0; i <= 3; i++) {
        printf("%d" ,(len(test[i])));
    }




    return 0;
}