#include <stdio.h>

int strlen(char *v) {

    int i;
    for(i == 0; v[i] != '\0'; i++);

    return i;
}



int strpal(char *v) {

    int i, j;
    for(i = 0, j = strlen(v)-1; i < j ;i++, j--) {
        if(v[i] != v[j]) {
            return 0;
        } 
        return 1;
    }
}




int main(void) {


    char nome[20];
    scanf("%s", nome);
    int test = strpal(nome);

    printf("%d", test);


    return 0;
}