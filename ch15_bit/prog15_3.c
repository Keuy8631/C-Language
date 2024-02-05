#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

void show_binary(int num){
    int b[SIZE] = {0};
    for(int i=1; i<SIZE; i++){
        b[SIZE-i] = num%2;
        num /= 2;
    }
    for(int i=0; i<SIZE; i++){
        printf("%d", b[i]);
    }
    printf("\n");
}

int main(){
    long a;
    // a = (89<<1); // 將整數89往左移一個位元
    a = 89;
    printf("89 to binary = ");
    show_binary(a);
    for(int i=0; i<SIZE; i++){
        a = (a<<1);
        printf("Shift left = ");
        show_binary(a);
        printf("After shift left, the decimal num: %d\n", a);
    }

    
    // printf("Shift left = ");
    // show_binary(a);
}