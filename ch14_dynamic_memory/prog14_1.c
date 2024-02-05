#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)malloc(3*sizeof(int));

    *ptr = 12;
    *(ptr+1) = 52;
    *(ptr+2) = 95;
    
    for(int i=0; i<3; i++){
        printf("ptr[%d]= %d\n", i, *(ptr+i));
    }

    free(ptr);
}