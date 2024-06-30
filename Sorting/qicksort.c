#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int *arr, int l, int r){
	int pivot = arr[r];
	int i = l-1;
	for(int j=l; j<r; j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[r]);
	return (i+1);
}

void sort(int *arr, int l, int r){
	if(l<r){
		int piv = partition(arr, l, r);
		sort(arr, l, piv-1);
		sort(arr, piv+1, r);
	}
}

int main(){
    int arr[] = {69, 10, 56, 32, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, n-1);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}