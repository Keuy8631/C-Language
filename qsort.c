#include <stdio.h>
#include <stdlib.h>

// int cmpfunc(const void *a, const void *b){
//     return ( *(int*)a - *(int*)b );
// }
int cmpfunc(const void *a, const void *b){
    int A = *(int*)a;
    int B = *(int*)b;
    if(A==B) return 0;
    return (A<B) ? -1 : 1;
}

int main(){
    int n;
    int values[] = {88 ,56 ,100 ,2 ,25};

    printf("Before:\n");
    for(n=0; n<5; n++){
        printf("%d ", values[n]);
    }

    qsort(values, 5, sizeof(int), cmpfunc);

    printf("\nAfter:\n");
    for(n=0; n<5; n++ ) {
        printf("%d ", values[n]);
    }
    
    return 0;
}