#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 69, 100, 564, 231};
    int n = sizeof(arr)/sizeof(int);
    int n_1 = *(&arr+1) - arr;
    printf("arr is       %d\n", arr);
    printf("&arr+1 is    %d\n", &arr+1);
    printf("*(&arr+1) is %d\n", *(&arr+1));
    printf("array size: %d\n", n);
    printf("array size: %d\n", n_1);
}