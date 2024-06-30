#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack{
    int top;
    unsigned capacity;
    int *arr;
};

struct Stack *createStack(int cap){
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = cap;
    stack->arr = (int*)malloc(cap*sizeof(int));
    return stack;
}

int isFull(struct Stack *stack){
    return stack->top == stack->capacity;
}

int isEmpty(struct Stack *stack){
    return stack->top == -1;
}

void push(struct Stack *stack, int item){
    if(isFull(stack)) return;
    stack->arr[++stack->top] = item;
    printf("%d is pushed into stack\n", item);
}

int pop(struct Stack *stack){
    if(isEmpty(stack)) return INT_MIN;
    return stack->arr[stack->top--];
}

int peek(struct Stack *stack){
    if(isEmpty(stack)) return INT_MIN;
    return stack->arr[stack->top];
}

int main(){
    struct Stack *stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("The item on the top is %d\n", peek(stack));
    printf("%d popped from stack\n", pop(stack));
    printf("The item on the top is %d\n", peek(stack));

    return 0;
}