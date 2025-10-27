#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    long cpf;
    long contatoCelular;
}Cliente;

typedef struct Node
{
    Cliente cliente;
    struct Node* next;
}Node;

Node* create_node(Cliente c)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->cliente = c;
    new_node->next = NULL;
    return new_node;
}

Node* insert_front(Node* head, Cliente c)
{
    Node* new_node = create_node(c);
    new_node->next = head;
    return new_node;
}

Node* insert_back(Node* head, Cliente c)
{
    Node* new_node = create_node(c);
    if (head == NULL) return new_node;

    Node* current = head;
    while (current->next != NULL) current = current->next;
    current->next = new_node;
    return head;
}

Node* insert_at(Node* head, Cliente c, int pos)
{
    if (pos <= 0 || head == NULL) return insert_front(head, c);

    Node* current = head;
    int index = 0;
    while (current->next != NULL && index != pos - 1)
    {
        current = current->next;
        index++;
    }

    Node* new_node = create_node(c);
    new_node->next = current->next;
    current->next = new_node;
    return head;
}

Node* remove_front(Node* head)
{
    if (head == NULL) return NULL;

    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* remove_back(Node* head)
{
    if (head == NULL) return NULL;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return head;
    }

    Node* current = head;
    while (current->next->next != NULL) current = current->next;
    free(current->next);
    current->next = NULL;
    return head;
}

Node* remove_at(Node* head, int pos)
{
    if (pos < 0 || head == NULL) return head;
    if (pos == 0) return remove_front(head);

    Node* current = head;
    int index = 0;
    while (current->next != NULL && index < pos - 1)
    {
        current = current->next;
        index++;
    }

    if (current->next == NULL) return remove_back(head);
    Node* temp = current->next;
    current->next = temp->next;
    free(temp);
    return head;

}