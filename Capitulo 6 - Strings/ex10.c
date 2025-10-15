#include <stdio.h>


int strlen(char *len) {

    int i;
    for(i = 0; len[i] != '\0'; i++);
    return i;
}

char* strcat(char *orig, char *dest) {
    // a really dont understand what i have to do in this fuction


    int i, len;
    
    for(i = 0, len = strlen(dest); orig[i] !='\0'; i++, len++) {
        dest[i] = orig[i];
    }
    dest[len] = '\0';
    return dest;
}


int main(void) {

    char nome[20];
    char nome2[20];

    scanf("%s", nome);
    scanf("%s", nome2);

    strcat(nome2, nome);

    
    printf("%s\n", nome2);
    printf("%s\n", nome);

    return 0; 
}