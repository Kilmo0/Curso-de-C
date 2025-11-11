#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct spessoa {

    int idade;
    char nome[20+1];
    struct spessoa *prox;

}   PESSOA;

typedef PESSOA* FILA;

void inic(FILA *fila) {
    *fila = NULL;
}

void inserir(FILA *fila, int idade, char *nome) {

    if(*fila == NULL) {
        
        *fila = (FILA) malloc(sizeof(PESSOA));
        if(*fila == NULL) {return;}
        (*fila) ->idade = idade;
        strcpy((*fila)->nome, nome);
        (*fila)->prox = NULL;
    
    } else {
        inserir(&(*fila)->prox, idade, nome);
    }
}

void apagar(FILA *fila) {

    PESSOA *tmp = *fila;
    
    if (*fila == NULL) {
        return;    
    }
    *fila = (*fila)->prox;
    free(tmp);
}

void listar(FILA fila) {

    if(fila == NULL) {
        return;
    }
    printf("%d %s\n", fila->idade, fila->nome);
    listar(fila->prox);
}

int main(void) {

    FILA F;
    inic(&F);
    puts("Iniciar:");
    listar(F);
    puts("Inserir: ");
    inserir(&F, 10, "Thiago");
    inserir(&F, 20, "Luiza");
    inserir(&F, 30, "Ana");
    puts("Listar 3");
    listar(F);
    apagar(&F);
    puts("Listar 2");
    listar(F);
    apagar(&F);
    puts("Listar 1");
    listar(F);
    apagar(&F);
    puts("Listar nada");
    listar(F);
    apagar(&F);
    
    return 0;
}