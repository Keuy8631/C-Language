#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
};

typedef struct node NODE;

int main(){
    NODE a, b, c;
    NODE *ptr = &a;

    a.val = 12;
    a.next = &b;
    b.val = 30;
    b.next = &c;
    c.val = 64;
    c.next = NULL;

    while(ptr){
        printf("address= %p, ", ptr);
        printf("data=%d, ", ptr->val);
        printf("next=%p\n", ptr->next);
        ptr = ptr->next;
    }
    
}