#include <stdio.h>

int main() {

    short int idade;
    int montante;
    long int n_conta;

    printf("Qual a sua idade?");
    scanf("%hd", &idade);

    printf("Qual montante deseja depositar?"); 
    scanf("%d", &montante);

    printf("Qual o numero da sua conta?");
    scanf("%ld", &n_conta);
    
    printf("Uma pessoa de %hd anos, depositou %d, para conta de número: %ld", idade, montante, n_conta);

    return 0;
}