//
// Created by João Pedro Panza Mainieri on 14/04/26.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int code;
    float price;
    struct Node * nextNode;
} Node;

typedef struct List {
    Node * head;
    int size;
} List;

Node* removeNode(List * list, int code) {
    Node * previousNode = NULL;
    Node * remove = list->head;

        while (remove != NULL) {
            if (remove->code == code) {
                if (previousNode == NULL) {
                    list->head = remove->nextNode;
                } else {
                    previousNode->nextNode = remove->nextNode;
                }
                list->size--;
                return remove;
            }
            previousNode = remove;
            remove = remove->nextNode;
        }

    return NULL;
}

Node* searchNode(List* list, int code) {
    Node * search = list->head;

        while (search != NULL) {
            if (search->code == code) {
                return search;
            }
            search = search->nextNode;
        }
    return NULL;
}

void removeAboveThePrice(List * list, float limit) {
    if (list == NULL) return;
    Node * previousNode = NULL;
    Node * remove = list->head;

    while (remove != NULL) {
        if (remove->price > limit) {
            Node* temp = remove->nextNode;
            remove = remove->nextNode;

            if (previousNode == NULL) {
                list->head = temp->nextNode;
            } else {
                previousNode->nextNode = temp->nextNode;
            }

            free(temp);
            list->size--;
        }else {
            previousNode = remove;
            remove = remove->nextNode;
        }
    }
}


Node* searchHighestPrice(List * list) {

    if (list == NULL && list->head == NULL) return NULL;

    Node * search = list->head;
    Node * highestPriceNode = list->head;

        while (search != NULL) {
            if (highestPriceNode->price < search->price) {
                highestPriceNode = search;
            }
                search = search->nextNode;
        }
        return highestPriceNode;
}

void removeDuplicatedByCode(List * list) {
    Node * current = list->head;

    while (current != NULL) {
        Node * runner = current;
        while (runner->nextNode != NULL) {
            if (runner->code == current->code) {
                Node* removed = runner->nextNode;
                runner->nextNode = removed->nextNode;
                free(removed);
                removed = NULL;
                list->size--;
            }else {
                runner = runner->nextNode;
            }
        }
        current = current->nextNode;
    }
}

typedef struct stackNode {
    int value;
    struct stackNode* nextNode;
}stackNode;

typedef struct {
    int size;
    stackNode* head;
}Stack;

void push(Stack* stack, int value) {
    stackNode* newNode = (stackNode*) malloc(sizeof(stackNode));
    newNode->value = value;

    newNode->nextNode = stack->head;
    stack->head = newNode;

    stack->size++;
}

typedef struct queueNode {
    int value;
    struct queueNode* nextNode;
}queueNode;

typedef struct {
    int size;
    queueNode* start;
    queueNode* end;
}Queue;

int dequeue(Queue* queue) {
    if (queue->start == NULL) return -1;

    queueNode* current = queue->start;

    queue->start = current->nextNode;
    if (queue->start == NULL) {
        queue->end = NULL;
    }

    int value = current->value;

    free(current);
    queue->size--;

    return value;
}

typedef struct TreeNode{

    int value;

    struct TreeNode* left;
    struct TreeNode* right;
    int height;

} TreeNode;

typedef struct BinaryTree {
    TreeNode* root;
}BinaryTree;

int perfectelyBalancedRoot(TreeNode* root) {
    if (root == NULL) return 0;

    int left = perfectelyBalancedRoot(root->left);
    int right = perfectelyBalancedRoot(root->right);

    if (left-right == 0) return 1;
    return 0;
}

int showPathAVL(TreeNode* root, int value) {
    if (root == NULL) return 0;

    printf("%d",root->value);

    if (value == root->value) return 1;
    if (value < root->value) {
        if (showPathAVL(root->left, value)) return 1;
    }else {
        if (showPathAVL(root->right, value)) return 1;
    }

    return 0;
}



int main() {

    return 0;
}