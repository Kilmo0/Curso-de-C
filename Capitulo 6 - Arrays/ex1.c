#include <stdio.h>

int main(void) {

    int vetor[5];

    for(int i = 0; i < 6; i++) {
        
        vetor[i] = i;
    }
    
    for(int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}