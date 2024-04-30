#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main() {
    No* H = no('J', no('O', no('A', no('O', no('V', no('I', no('C', no('T', no('O',no('R', NULL))))))))));
    No* Hc = copiar_lista(H);

    printf("\nlista original: ");
    imprimir_lista(H);
    printf("\ncopia: ");
    imprimir_lista(Hc);

    inserir_no(Hc, no('!', NULL));

    printf("\ncopia alterada: ");
    imprimir_lista(Hc);

    printf("\nquantidade de nos da original: %d", quantidade_nos(H));
    printf("\nquantidade de nos da copia: %d", quantidade_nos(Hc));

    printf("\ncaractere 'A' existe na lista? %d", lista_verificar_existencia(H, 'A'));
    printf("\ncaractere 'B' existe na lista? %d", lista_verificar_existencia(H, 'B'));

    printf("\nquantas vezes o caractere 'O' aparece na lista? %d", lista_verificar_ocorrencias(H, 'O'));

    printf("\nlista invertida: ");
    lista_imprimir_inversa(H);

    lista_inserir_no_i(Hc, 2);
    printf("\nnovo no em i: ");
    imprimir_lista(Hc);

    lista_remover_no_i(Hc, 1);
    lista_remover_no_i(Hc, 3);
    printf("\nno removido em i: ");
    imprimir_lista(Hc);

    char valor_busca = 'O';
    lista_remover_no(H, valor_busca);

    printf("\nLista Apos Remocao do Valor '%c':\n", valor_busca);
    imprimir_lista(H);

    return 0;
}
