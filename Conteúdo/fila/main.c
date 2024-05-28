#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "queue.h"

int main(int argc, char *argv[])
{
    QueueNode *root = NULL;
    enqueue(&root, 'A');
    enqueue(&root, 'B');
    enqueue(&root, 'C');
    enqueue(&root, 'D');

    printf("%c %c %c %c \n", dequeue(&root), dequeue(&root), dequeue(&root));
    printf("%c\n", dequeue(&root));
    display(root);
    
    exit(0);
}