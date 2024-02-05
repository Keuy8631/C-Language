#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *next;
}NODE;

int main(){
    int num;
    NODE *fst, *curr, *pre;
    printf("Number of nodes: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        curr = (NODE*)malloc(sizeof(NODE));
        printf("Data for node %d: ", i+1);
        scanf("%d", &(curr->val));
        if(!i)
            fst = curr;
        else
            pre->next = curr;
        curr->next = NULL;
        pre = curr;
    }
    curr = fst;

    while (curr){
        printf("address=%p, ", curr);
        printf("data=%d, ", curr->val);
        printf("next=%p\n", curr->next);
        curr = curr->next;
    }
}