// LIFO

#include "stack.h"

void push(Stack **head, int d)
{
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->data = d;
    temp->next = *head;
    *head = temp;
}

int pop(Stack **head)
{
    Stack *temp = *head;
    *head = (*head)->next;
    return temp->data;
}

int peek(Stack **head)
{
    return (*head)->data;
}

int isEmptyS(Stack *head)
{
    return (head == NULL);
}

void printStack(Stack *head)
{
    printf("Stack: ");
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
    printf("\n");
}