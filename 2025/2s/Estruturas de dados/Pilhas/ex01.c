#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    Node* next;
}Node;

typedef struct Stack
{
    Node* top;
}Stack;

Node* create_node(int value)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

Stack* push(Stack* s, int value)
{
    Node* new_node = create_node(value);
    new_node->next = s->top;
    s->top = new_node;
    return s;
}

Stack* pop(Stack*s)
{
    if (s->top == NULL) return s;
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    return s;
}

void freeStack(Stack* s)
{
    Node* current = s->top;
    while (current != NULL)
    {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(s);
}

void printStack(Stack* s)
{
    Node* current = s->top;
    printf("Stack (top -> bottom):");
    while (current != NULL)
    {
        printf("%d -> ",current->value);
        current = current->next;
    }
    printf("NULL\n");
}