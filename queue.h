#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
} Queue;

void initializeQueue(Queue **);
void enqueue(Queue **, int);
int dequeue(Queue **);
int front(Queue *);
int isEmptyQ(Queue *);
void printQueue(Queue *);

#endif
