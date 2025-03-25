#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void initStack(Stack* s);
int isEmpty(Stack* s);
void push(Stack* s, int value);
int pop(Stack* s);

#endif // STACK_H