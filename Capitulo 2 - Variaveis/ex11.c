#include <stdio.h>

int main() {

    double pi = 3.14159, area;
    float raio, perimetro;

    printf("Introduza o raio da circuferencia\n");
    scanf("%f", &raio);
    area = pi*raio*raio;
    perimetro = 2*pi*raio;

    printf("\nO perimetro é: %f\n", perimetro);
    printf("A area é: %f", area);

    return 0;
}