#include <stdio.h>

int main() {

    double quilos = 1.0E3;
    double gramas = 1.0e6;
    float toneladas;

    printf("Por favor, digite quantas toneladas você comprou: "); scanf("%f", &toneladas);
    printf("\nVocê comprou %f Toneladas\nVocê Tem em Quilos: %f\nE em gramas: %f", toneladas, toneladas*quilos, toneladas*gramas);

    
    return 0;
}