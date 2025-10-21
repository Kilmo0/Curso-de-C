#include <stdio.h>

int strcount(char *str, char valor) {

    int i;
    int j = 0;
    for(i = 0; str[i] != '\0'; i++) {
        
        if(str[i] == valor) {
            j++;
        }
    }
    
    return j;
}


int main(void) {

    printf("%d", strcount("abacate", 'a'));

    return 0;
}

