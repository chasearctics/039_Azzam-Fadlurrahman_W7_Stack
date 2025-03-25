#include "stack.h"

void initStack(Stack* s) {
    s->top = NULL;
}

int isEmpty(Stack* s) {
    return s->top == NULL;
}

void push(Stack* s, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Heap overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    Node* temp = s->top;
    int value = temp->data;
    s->top = temp->next;
    free(temp);
    return value;
}