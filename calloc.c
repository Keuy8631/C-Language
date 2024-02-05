#include <stdio.h>
#include <stdlib.h>

int main(){
    int** arr = (int**)calloc(5, sizeof(int*));
    for(int i=0; i<5; i++){
        *(arr+i) = (int*)calloc(10, sizeof(int));
        // arr[i] = (int*)calloc(10, sizeof(int));
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}