/* 節點的搜尋與插入 */
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
        current = (NODE*)malloc(sizeof(NODE));  /* 取得心結點的位址 */
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
    if(first==NULL) printf("List is empty!\n"); /* if(first==NULL) -> if(!first) */
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

/* search() */
NODE *searchNode(NODE* first, int item){
    NODE *curr = first;
    while(curr){
        if(curr->data==item)
            return curr;
        else curr = curr->next;
    }
    return NULL;
}

/* insertNode() */
void insertNode(NODE* node, int val){   /* node為想插入的list, val為新增加的數值 */
    NODE *newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = val;                    /* 將新節點的data設為val */
    newnode->next = node->next;             /* 將新節點的next設為原節點的next */
    node->next = newnode;                   /* 將原節點的next指向新節點 */
}

/* deleteNode() */
NODE *deleteNode(NODE *first, NODE *node){
    NODE *ptr = first;
    if(ptr==NULL){
        printf("Nothing to delete!\n");
        return NULL;
    }
    if(node==first)             /* 如果刪除為第一個節點*/
        first = first->next;    /* 把first指向下一個節點 */
    else{
        while(ptr->next!=node)  /* 找到要刪除之節點的前一個節點 */
            ptr = ptr->next;
        ptr->next = node->next; /* 重新設定ptr的next成員 */
    }
    free(node);
    return first;
}

int main(){
    NODE *first, *node;
    int arr[] = {12, 38, 57};
    first = createList(arr, 3);
    printList(first);

    node = searchNode(first, 38);
    first = deleteNode(first, node);
    printList(first);

    first = deleteNode(first, first);
    printList(first);

    first = deleteNode(first, first);
    printList(first);

    freeList(first);
}