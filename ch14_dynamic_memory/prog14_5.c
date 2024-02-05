#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"

// "linklist.h"
// typedef struct node{
//     int data;
//     struct node *next;
// } NODE;

// NODE *createList(int*, int);     /* 建立函數 */
// void printList(NODE*);           /* 列印函數 */
// void freeList(NODE*);            /* 釋放串列記憶空間函數 */
// void insertNode(NODE*, int);     /* 插入節點函數 */
// NODE *searchNode(NODE*, int);    /* 搜尋節點函數*/
// NODE *deleteNode(NODE*, NODE*);  /* 刪除節點函數*/


/* createList() */
NODE *createList(int *arr, int len){
    NODE *first, *current, *previous;
    for(int i=0; i<len; i++){
        current = (NODE*)malloc(sizeof(NODE));
        current->data = *(arr+i);       /* 設定節點的成員資料 */   // *(arr+i) = arr[i]
        if(!i)                          /* 判斷是否為第一個節點 */
            first = current;
        else
            previous->next = current;   /* 把前一節點的next指向目前節點 */
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

int main(){
    NODE *first;
    int arr[] = {14, 27, 32, 46};
    first = createList(arr, 4);
    printList(first);
    freeList(first);

    system("pause");
    return 0;
}