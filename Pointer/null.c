#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>
  
int main(){ 
  
    // declaring dynamic memory for ptr 
    int* ptr = (int*)malloc((INT_MAX) * sizeof(int)); 
    int *p = NULL;
    printf("%d\n", *p); // It will crash

    *ptr = 12;
    printf("%d\n", *ptr);

    // checking if the memory allocation is successful 
    if (!ptr) { 
        printf("Memory Allocation Failed"); 
        exit(0); 
    } 
  
    return 0; 
}