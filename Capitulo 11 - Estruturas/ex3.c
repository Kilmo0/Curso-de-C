#include <stdio.h>
#include <string.h>

int main(void) {

    struct data
    {
        int dia, ano;
        char mes[12];
    }   dt_nasc;
    
    dt_nasc.dia = 9;
    strcpy(dt_nasc.mes, "Janeiro");
    dt_nasc.ano = 2006;

    
    

    return 0;
}