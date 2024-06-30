#include <stdio.h>

void insertion(int *arr, int n){
    int j = 0;
    for(int i=1; i<n; i++){
        int key = arr[i];
        for(j=i-1; j>=0 && arr[j]>key; j--) arr[j+1] = arr[j];
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {69, 10, 56, 32, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr, n);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}