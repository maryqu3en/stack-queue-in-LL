// FIFO

#include "queue.h"

void initializeQueue(Queue** queue) {
    *queue = NULL;
}

void enqueue(Queue** head, int d) {
    Queue* temp = (Queue*)malloc(sizeof(Queue));
    temp->data = d;
    temp->next = NULL;

    if (*head == NULL) {
        *head = temp;
        return;
    }

    Queue* t = *head;
    while (t->next != NULL) {
        t = t->next;
    }
    t->next = temp;
}

int dequeue(Queue** head) {
    if (*head == NULL) {
        printf("Queue underflow\n");
        return -1;
    }

    Queue* temp = *head;
    *head = (*head)->next;
    int data = temp->data;
    free(temp);
    return data;
}

int front(Queue* head) {
    if (head == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return head->data;
}

int isEmptyQ(Queue* head) {
    return (head == NULL);
}

void printQueue(Queue* head) {
    printf("Queue: ");
    while (head != NULL) {
        printf("%d\t", head->data);
        head = head->next;
    }
    printf("\n");
}