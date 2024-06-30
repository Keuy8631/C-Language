#include <stdio.h>

void swap_pointers(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
}

void swap_values(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 10;
    int a = 1, b = 2;

    printf("Before swap_pointers: *a = %d, *b = %d\n", a, b);
    swap_pointers(&a, &b);
    printf("After swap_pointers: *a = %d, *b = %d\n", a, b);

    printf("Before swap_values: x = %d, y = %d\n", x, y);
    swap_values(&x, &y);
    printf("After swap_values: x = %d, y = %d\n", x, y);

    return 0;
}