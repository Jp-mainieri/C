
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    Node* next;
}Node;

typedef struct Queue
{
    Node* first;
    Node* last;
}Queue;

Node* create_node(int value)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

Queue* insert_node(Queue* q, int value)
{
    Node* new_node = create_node(value);

    if (q->last == NULL) //Lista está vazia
    {
        q->first = new_node;
        q->last = new_node;
    }else
    {
        q->last->next = new_node;
        q->last = new_node;
    }

    return q;
}

Queue* remove_node(Queue* q)
{
    if (q->first == NULL) return q;

    Node* temp = q->first;
    q->first = q->first->next;
    if (q->first == NULL) // Fila ficou vazia
    {
        q->last = NULL;
    }

    free(temp);
    return q;
}