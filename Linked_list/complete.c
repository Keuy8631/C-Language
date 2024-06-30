#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct ListNode{
    int val;
    struct ListNode *next;
} ListNode;

// Function to create a new node
ListNode* createNode(int value){
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print a linked list
void printList(ListNode *head){
    ListNode *current = head;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(ListNode **head, int value){
    ListNode *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(ListNode **head, int value){
    ListNode *newNode = createNode(value);
    if (*head == NULL){
        *head = newNode;
        return;
    }
    ListNode *current = *head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

// Function to delete a node with a given value
void deleteNode(ListNode **head, int value){
    ListNode *current = *head;
    ListNode *prev = NULL;

    if(current != NULL && current->val == value){
        *head = current->next;
        free(current);
        return;
    }

    while(current != NULL && current->val != value){
        prev = current;
        current = current->next;
    }

    if (current == NULL) return;

    prev->next = current->next;
    free(current);
}

// Function to reverse a linked list
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Function to free the linked list
void freeList(ListNode *head){
    ListNode *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(){
    ListNode *head = NULL;

    // Insert nodes
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);

    // Print original list
    printf("Original list:\n");
    printList(head);

    // Reverse the list
    head = reverseList(head);

    // Print reversed list
    printf("Reversed list:\n");
    printList(head);

    // Delete a node
    deleteNode(&head, 2);
    printf("List after deleting 2:\n");
    printList(head);

    // Free the list
    freeList(head);

    return 0;
}
