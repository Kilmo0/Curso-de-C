#include <stdio.h>
#define dim 3


int main(void) {

    char velha[dim][dim];

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            velha[i][j] = '0';        
        }
    }
    
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            
            if(j == dim-1) {
                printf(" %c", velha[i][j]);
                putchar('\n');
            } else {
                printf(" %c", velha[i][j]);
            }
        }
    }

    return 0;
}