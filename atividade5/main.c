#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

int main(int argc, char* argv[]){

    No* H = no('J', NULL);
    inserir_no(H, 'O');
    inserir_no(H, 'A');
    inserir_no(H, 'O');
    inserir_no(H, 'V');
    inserir_no(H, 'I');

    imprimir_lista(H);
    printf("\n");

    remover_no(H, 'O');
    imprimir_lista(H);
    printf("\n");

    remover_no(H, 'C');
    imprimir_lista(H);
    printf("\n");

    exit(0);
}