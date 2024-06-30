#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble(int *arr, int n){
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

int main(){
    int arr[] = {69, 10, 56, 32, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, n);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}