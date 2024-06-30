#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf("arr+1 is %d\n", arr+1);
    printf("arr+1 is %d\n", &(*(arr+1)));

    return 0;
}