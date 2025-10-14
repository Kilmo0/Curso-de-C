#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LIN 7


void inicrandom() {

    long ultime;
    time( &ultime);
    srand((unsigned) ultime);

}

void inic(int list[]) {

    for(int i = 0; i < NUMS; i++) {
        list[i] = 0;
    }

}

int leraposta() {

    int n;
    do {
       
        printf("Quantos numeros voce deseja aposta? (0 - Terminar) "); 
        scanf("%d", &n);
 
    } while ((n < MIN_APOSTA || n > NUMS) && n != 0);

    return n;
}

void gerar(int *v, int n) {

    int indice;
    for(int i = 0; i < n; i++) {

        indice = rand() %NUMS;
        
        if(v[indice] == 0) {
            v[indice] = 1;

        } else {
            i--;
        }
    }

}

void apresentar(int res[]) {

    for(int i = 0; i < NUMS; i++) {

        if (res[i] == 0) {
            printf(" %2d", i+1);
        } else {
            printf(" XX");
            
        } if ((i+1) %NUM_LIN ==0) {
                putchar('\n');
        }
    }
    putchar('\n');
}
 
int main(void) {
    
    int vetor[NUMS];
    int n_nums;

    inicrandom();
    while (1) {
        
        inic(vetor);
        if((n_nums = leraposta()) == 0) {
            break;
        }   
        gerar(vetor, n_nums);
        apresentar(vetor);
    }

    return 0;
}