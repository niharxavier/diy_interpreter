#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

void insert_at_beginning(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = data;
    new_node->next = *head;
    *head = new_node;
}

void add_node(Node **head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = data;
    newNode->next = NULL;

    if(*head == NULL) {
        *head = newNode;
    }

    else {
        Node *temp = *head;
        
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}




int main() {

  return 0;  
}