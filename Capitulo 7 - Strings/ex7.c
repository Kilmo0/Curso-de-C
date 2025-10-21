#include <stdio.h>


int main(void) {

    // strlen("");
    int b = strlen("STRLEN");
    printf("%d", b);
    return 0;
}

int strlen(char *v) {

    int i = 0;
    while (v[i] != '\0') {
        i++;
    }
    
    return i;
}
