#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int idx = i;
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[idx]) idx = j;
        if(i!=idx) swap(&arr[i], &arr[idx]);
    }
}

int main(){
    int arr[] = {69, 10, 56, 32, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}