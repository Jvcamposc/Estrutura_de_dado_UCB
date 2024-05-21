typedef struct StackNode{
    char data;
    struct StackNode* next;
} StackNode;

void push(StackNode** root, char data);
char pop(StackNode** root);
char peek(StackNode* root);
int isEmpty(StackNode* root); //verificar se a pilha esta vazia 
void display(StackNode* root); //mostrar os elementos que estao impilhado