#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

Node *CreateNode(int data){
    Node *node = (Node*)malloc(sizeof(Node));
    if(!node) return NULL;
    node->val = data;
    node->next = NULL;
    return node;
}

void insert(Node **node, int data, int pos){
    Node *newNode = CreateNode(data);
    if(!newNode) return;

    if(!pos){
        newNode->next = *node;
        *node = newNode;
        return;
    }

    Node *tmp = *node;
    for(int i=0; i<pos-1 && tmp; i++) tmp = tmp->next;

    if(!tmp){
        free(newNode);
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete(Node **node, int data){
    Node *tmp = *node;
    Node *pre = NULL;

    if(tmp && tmp->val==data){
        *node = tmp->next;
        free(tmp);
        return;
    }

    while(tmp && tmp->val!=data){
        pre = tmp;
        tmp = tmp->next;
    }

    if(!tmp) return;

    pre->next = tmp->next;
    free(tmp);
}

void printList(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    Node* head = CreateNode(0);

    insert(&head, 1, 1);
    insert(&head, 2, 2);
    insert(&head, 3, 3);
    insert(&head, 4, 4);

    printf("Linked List: ");
    printList(head);

    delete(&head, 2);
    printf("After deleting 2: ");
    printList(head);

    delete(&head, 4);
    printf("After deleting 4: ");
    printList(head);

    delete(&head, 1);
    printf("After deleting 1: ");
    printList(head);

    delete(&head, 3);
    printf("After deleting 3: ");
    printList(head);

    return 0;
}