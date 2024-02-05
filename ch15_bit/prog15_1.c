#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

void show_binary(int num){
    int list[SIZE];
    for(int i=0; i<=SIZE; i++){
        list[i] = num%2;
        num /= 2;
    }

    for(int i=SIZE-2; i>=0; i--)
        printf("%d", list[i]);
}

int main(){
    printf("89 to binary is ");
    show_binary(89);
}