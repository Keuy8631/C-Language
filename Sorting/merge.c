#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int l, int m, int r){
    int n1 = (m-l)+1;
    int n2 = r-m;

    int *L = (int*)malloc(n1*sizeof(int));
    int *R = (int*)malloc(n2*sizeof(int));

    for(int i=0; i<n1; i++) L[i] = arr[l+i];
    for(int i=0; i<n2; i++) R[i] = arr[m+1+i];

    int i=0, j=0, k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void sort(int *arr, int l, int r){
    if(l<r){
        int m = (l+r)/2;
        sort(arr, l, m);
        sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){
    int arr[] = {69, 10, 56, 32, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, n-1);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}