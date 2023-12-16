# Stack and Queue Implementations using Linked Lists

This repository contains C language implementations of stack and queue data structures using linked lists. Additionally, there are exercises to reinforce your understanding of these fundamental data structures.

## Table of Contents

- [Introduction](#introduction)
- [Implemented Data Structures](#implemented-data-structures)
- [Exercise Problems](#exercise-problems)
- [How to Use](#how-to-use)

## Introduction

Understanding stack and queue data structures is crucial in computer science. This repository provides implementations of stacks and queues using linked lists, which are dynamic data structures allowing efficient memory usage.

## Implemented Data Structures

### Stack using Linked List

- **push(Stack\*\* head, int item):** Adds an item to the stack.
- **pop(Stack\*\* head):** Removes and returns the top item from the stack.
- **peek(Stack\*\* head):** Returns the top item without removing it.
- **isEmptyS(Stack\* head):** Checks if the stack is empty.

### Queue using Linked List

- **enqueue(Queue\*\* head, int item):** Adds an item to the rear/end of the queue.
- **dequeue(Queue\*\* head):** Removes and returns the item from the front of the queue.
- **front(Queue\* head):** Returns the item at the front without removing it.
- **isEmptyQ(Queue\* head):** Checks if the queue is empty.

## Exercise Problems

1. **Reverse a Queue:**
   - Reverse the elements of a queue using a stack.

2. **Check if parentheses are balanced:**
   - Ckech if an expression has balanced parentheses or not using a stack.

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/maryqu3en/stack-queue-in-LL.git
   ```

2. Navigate to the project directory:

   ```bash
   cd stack-queue-in-LL
   ```

3. Compile the C files:

   ```bash
   gcc -o main *.c
   ```

4. Run the program:

   ```bash
   ./main
   ```
