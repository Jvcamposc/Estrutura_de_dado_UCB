#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char* argv[]){

    QueueNode* root = NULL;

    enqueue(&root, 'J');
    enqueue(&root, 'V');
    enqueue(&root, 'C');
    enqueue(&root, 'A'); 

    printf("%c\n", peek(root));
    printf("%c\n", dequeue(&root));
    display(root);

    exit(0);
}

