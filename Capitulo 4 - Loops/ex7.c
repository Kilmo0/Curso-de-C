#include <stdio.h>

int main() {

    char opcao;

    do {
       printf("\t M E N U    P R I N C I P A L\n");
       printf("\n\n\t\tClientes"); 
       printf("\n\n\t\tFornecedores"); 
       printf("\n\n\t\tEncomendas"); 
       printf("\n\n\t\tSair"); 
       printf("\n\n\n\t\tOpção:");
       scanf(" %c", &opcao); 

        switch (opcao) {
            case 'C':
            case 'c': puts("Opção cliente!"); break;
            case 'F':
            case 'f': puts("Opção Fornecedor"); break;
            case 'E':
            case 'e': puts("Opção Encomendas"); break;
            case 'S':
            case 's': break;
            default: puts("Opção Invalida!"); break;
       }

    } while (opcao != 's' && opcao != 'S');
    

    return 0;
}