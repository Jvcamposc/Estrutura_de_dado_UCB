typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no);
void inserir_no(No* H, No* no);
void imprimir_lista(No* H);
int quantidade_nos(No* H);
No* copiar_lista(No* H);
void liberar_lista(No* H);
//atividade
int lista_verificar_existencia(No* H, char valor_busca);
int lista_verificar_ocorrencias(No* H, char valor_busca);
void lista_imprimir_inversa(No* H);
void lista_inserir_no_i(No* H, int i);
void lista_remover_no_i(No* H, int i);
void lista_remover_no(No* L, char valor_busca);