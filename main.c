
#include "stack.h"
#include "queue.h"

int main()
{
/* reverse a queue using stack */
    printf("\n\n<------------ Reverse a Queue using a Stack ----------->\n\n");
    Queue *head = NULL;
    enqueue(&head, 1);
    enqueue(&head, 2);
    enqueue(&head, 3);
    enqueue(&head, 4);
    enqueue(&head, 5);

    printf("Original Queue: ");
    printQueue(head);

    Stack *temp = NULL;
    push(&temp, dequeue(&head));
    push(&temp, dequeue(&head));
    push(&temp, dequeue(&head));
    push(&temp, dequeue(&head));
    push(&temp, dequeue(&head));

    enqueue(&head, pop(&temp));
    enqueue(&head, pop(&temp));
    enqueue(&head, pop(&temp));
    enqueue(&head, pop(&temp));
    enqueue(&head, pop(&temp));

    printf("\nReversed Queue: ");
    printQueue(head);
}