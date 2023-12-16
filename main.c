
#include "stack.h"
#include "queue.h"

void reverseQueue(Queue **);
int areParenthesesBalanced(char *);

int main()
{
    /* reverse a queue using stack */
    printf("\n\n<------------ Reverse a Queue using a Stack ----------->\n\n");
    Queue *head = NULL;
    for (int i = 0; i < 5; i++)
        enqueue(&head, i);

    printf("Original Queue: ");
    printQueue(head);

    reverseQueue(&head);

    printf("\nReversed Queue: ");
    printQueue(head);

    /* check if parentheses are balanced or not */
    printf("\n\n<------- Check if parantheses are balanced or not ------>\n\n");
    char exp[] = "({([])})";
    if (areParenthesesBalanced(exp))
        printf("%s is balanced.\n", exp);
    else
        printf("%s is not balanced.\n", exp);
}

void reverseQueue(Queue **queue)
{
    Stack *temp = NULL;

    while (!isEmptyQ(*queue))
    {
        push(&temp, dequeue(queue));
    }

    while (!isEmptyS(temp))
    {
        enqueue(queue, pop(&temp));
    }
}

int areParenthesesBalanced(char *expression)
{
    Stack *stack = NULL;

    for (int i = 0; expression[i] != '\0'; i++)
    {
        char currentChar = expression[i];

        if (currentChar == '(' || currentChar == '{' || currentChar == '[')
        {
            push(&stack, currentChar);
        }
        else if (currentChar == ')' || currentChar == '}' || currentChar == ']')
        {
            if (isEmptyS(stack))
            {
                return 0;
            }

            char topChar = pop(&stack);

            if ((currentChar == ')' && topChar != '(') ||
                (currentChar == '}' && topChar != '{') ||
                (currentChar == ']' && topChar != '['))
            {
                return 0;
            }
        }
    }

    return isEmptyS(stack);
}


// Infix to Postfix Conversion:

// Convert an infix expression to postfix using a stack.
// Evaluate Postfix Expression:

// Evaluate a postfix expression using a stack.
// Implement a Queue using Stacks:

// Implement a queue data structure using two stacks.

// Circular Queue:

// Implement a circular queue.
// Expression Evaluation:

// Evaluate a given arithmetic expression.
// Tower of Hanoi:

// Solve the Tower of Hanoi problem using recursion and stacks.