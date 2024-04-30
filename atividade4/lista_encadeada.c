#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

// estrutura do nó
No* no(char valor, No* proximo_no){
    No* no= malloc(sizeof(No));
    no -> valor = valor;
    no -> proximo_no = proximo_no;
    return no; 
}
/* Função para criar um novo nó */
void inserir_no(No* H, No* no){
    if(H != NULL){
        if(H -> proximo_no == NULL){
            H -> proximo_no = no;
        } else{
            inserir_no(H -> proximo_no, no);
        }
    }
}
//Função para imprimir todos os valores da lista
void imprimir_lista(No* H){
    if(H != NULL){
        printf("%c ", H -> valor);
        imprimir_lista(H -> proximo_no);
    }
}
//Função para contar o número de nós na lista
int quantidade_nos(No* H){
    if(H != NULL){
        return 1 + quantidade_nos(H -> proximo_no);
    }
    return 0;
}
//Função para copiar uma lista encadeada
No* copiar_lista(No* H){
    if(H != NULL){
        return no(H -> valor, copiar_lista(H -> proximo_no));
    }
    return NULL;
}
//Função para liberar toda a memória alocada pela lista 
void liberar_lista(No* H){
    if(H != NULL){
        liberar_lista(H -> proximo_no);
        free(H);
        H = NULL;
    }
}
//Função para verificar se um valor está na lista
int lista_verificar_existencia(No* H, char valor_busca){
    if (H != NULL){
        if (H -> valor == valor_busca){
            return 1;
        } else{
            return lista_verificar_existencia(H -> proximo_no, valor_busca);
        }
    }
    return 0;
}
//Função para contar quantas vezes um valor ocorre na lista 
int lista_verificar_ocorrencias(No* H, char valor_busca){
    if(H != NULL){
        if(H -> valor == valor_busca){
            return 1 + lista_verificar_ocorrencias(H -> proximo_no, valor_busca);
        } else{
            return lista_verificar_ocorrencias(H -> proximo_no, valor_busca);
        }
    }
    return 0;
}
//Função para imprimir a lista em ordem inversa
void lista_imprimir_inversa(No* H){
    if(H != NULL){
        lista_imprimir_inversa(H -> proximo_no);
        printf("%c ", H -> valor);
    }
}
//Função para inserir um nó em uma posição específica na lista
void lista_inserir_no_i(No* H, int i){
    if(H != NULL && i >= 0){
        if(i == 0){
            No* novo_no = no('X', H -> proximo_no);
            H -> proximo_no = novo_no;
            return;
        }
        lista_inserir_no_i(H->proximo_no, i - 1);
    }
}
// Função para remover um nó de uma posição específica na lista
void lista_remover_no_i(No* H, int i){
    if(H != NULL && H != NULL && H -> proximo_no != NULL){
        if(i == 0){
            No* no_remover = H -> proximo_no;
            H -> proximo_no = no_remover -> proximo_no;
            free(no_remover);
            return;
        }
        lista_remover_no_i(H -> proximo_no, i - 1);
    }
}
// Função para remover todos os nós com um valor específico da lista
void lista_remover_no(No* H, char valor_busca) {
    No* atual = H;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->valor == valor_busca) {
            if (atual == H) {
                H = atual->proximo_no; 
            } else {
                anterior->proximo_no = atual->proximo_no; 
            }
            No* temp = atual; 
            atual = atual->proximo_no; 
            free(temp); 
        } else {
            anterior = atual; 
            atual = atual->proximo_no; 
        }
    }
}