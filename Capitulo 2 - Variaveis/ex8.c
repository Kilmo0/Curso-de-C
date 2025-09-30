#include <stdio.h>

int main() {
   
   printf("Por favor, insara dois números: ");
   int num, num2;
   
   scanf("%d%d", &num, &num2);
   printf("A soma de %d, com %d, é igual: %d", num, num2, num+num2);

   
   
    return 0;
}