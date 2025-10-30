#include <stdio.h>

void calc(float *v, int num, float *xmin, float *xmax) {
    int i;
    *xmin = *xmax = *v;

    for(i = 0; i<num; i++) {
        
        if(v[i] < *xmin) {
            *xmin = v[i];
        }
        if(v[i] > *xmax) {
            *xmax = v[i];
        }

    }

}


int main(void) {

    float vetor[] = {10, 20, 30, 40, 50, 11, 12, 5, -33};
    float maior, menor;

    calc(vetor, 9, &menor, &maior);

    printf("O maior elemente e: %f\ne o menor e o: %f\n", maior, menor);


    return 0;
} 