/* 節點的搜尋與插入 */
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"

/* createList() */
NODE *createList(int *arr, int len){
    NODE *first, *current, *previous;
    for(int i=0; i<len; i++){
        current = (NODE*)malloc(sizeof(NODE));
        current->data = *(arr+i);               /* 設定節點的成員資料 */   // *(arr+i) = arr[i]
        if(!i)                                  /* 判斷是否為第一個節點 */
            first = current;
        else
            previous->next = current;           /* 把前一節點的next指向目前節點 */
        current->next = NULL;
        previous = current;
    }
    return first;
}

/* printList() */
void printList(NODE* first){
    NODE* node = first;
    if(first==NULL) printf("List is empty!\n");
    else{
        while (node){
            printf("%3d", node->data);
            node = node->next;
        }
        printf("\n");
    }
}

/* freeList() */
void freeList(NODE* first){
    NODE *current, *tmp;
    current = first;
    while(current){
        tmp = current;
        current = current->next;
        free(tmp);
    }
}

NODE *searchNode(NODE* first, int item){
    NODE *curr = first;
    while(curr){
        if(curr->data==item)
            return curr;
        else curr = curr->next;
    }
    return NULL;
}

void insertNode(NODE* node, int val){
    NODE *newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = val;
    newnode->next = node->next;
    node->next = newnode;
}

int main(){
    NODE *first, *node;
    int arr[] = {12, 38, 57};
    first = createList(arr, 3);
    printList(first);

    node = searchNode(first, 38);
    insertNode(node, 46);
    printList(first);
    freeList(first);
}