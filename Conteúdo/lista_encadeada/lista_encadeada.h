typedef struct No{
    char valor; //Armazena o valor do nó, que neste caso é do tipo char.
    struct No* proximo_no; //Ponteiro para o próximo nó na lista.
} No;

No* no(char valor, No* proximo_no); //Valor a ser armazenado no novo nó.
void inserir_no(No* H, No* no);
void imprimir_lista(No* H);
int quantidade_nos(No* H);
No* copiar_lista(No* H);
void liberar_lista(No* H);
