#include <stdio.h>

#define semana 7
#define mes 30

void calendario(int seusmeses[semana][5]);

int main() {

    int meses[semana][5]; 
    calendario(meses[semana][5]);

    return 0;
}


void calendario(int seusmeses[semana][5]) {
    int dia = 1;
    
    while(dia < 30) {
        for(int j = 1; j <= 5; j++) {
            for(int i = 1; i <= semana; i++) {
                
                seusmeses[i][j] = dia;
                dia++;
            }
        }
    }
        
    for(int j = 1; j < 5; j++) {
        for(int i = 1; i <= semana; i++) {

            printf("%2d ", seusmeses[i][j]);
            if(i >= semana) {
                putchar('\n');
            }
        }
    }
}

