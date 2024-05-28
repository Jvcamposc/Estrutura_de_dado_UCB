typedef struct QueueNode{
    char data;
    struct QueueNode* next;
}QueueNode;

void enqueue(QueueNode** root, char data); // adicionar um novo no como dados fornecidos ao final  da fila
void dequeue(QueueNode** root); // remove e retorna o no na frente da fila
char peek(QueueNode* root); // retornar os dados do no na frente da fila sem remove-lo
int isEmpty(QueueNode* root); // verificar se a fila esta vazia retornando verdadeiro se estiver
void display(QueueNode* root); //mostrar todos os caracter que estao enfilerado