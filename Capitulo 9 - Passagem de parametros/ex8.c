#include <stdio.h>
#include <stdlib.h>

void calculo(int num) {
    
    int i, total;
    for(i = 1, total = 1; i <= num; i++){
        total = total * i;
        } printf("%d\n", total);
}


int main(int argc, char *argv[])  {

    int i;
    for(i = 1; i < argc; i++) {
        calculo(atoi(argv[i]));
    }

    return 0;
}