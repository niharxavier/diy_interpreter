#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int value;
    struct node* next;

} Node;

void print_list(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
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

    Node  n1, n2, n3;
    Node *head;
    n1.value = 8;
    n2.value = 10;
    n3.value = 30;

    //now we link them

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL; // so we know when to stop

    print_list(head);
    add_node(&head, 5);
    print_list(head);
    return 0;
}