#include <stdio.h>

int main() {

    for(int i = 1; i <= 100; i++) {
        
        if (i == 60) { 
            break; 

        } else if(i % 2 != 0) {
            continue;

        } else {
            printf("%d\n", i);

        } 
    }

    return 0;
}