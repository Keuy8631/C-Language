#include<stdio.h>
#include<stdlib.h>

int main(){
    int* ptr;
    ptr = (int*)malloc(3*sizeof(int));

    for(int i=0; i<3; i++){
        *(ptr+i) = i*i;
        printf("ptr[%d]= %d\n", i, *(ptr+i));
    }

    free(ptr);

}