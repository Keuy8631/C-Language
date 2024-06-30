#include <stdio.h>

void traverseArr(int* arr, int N, int M){
	for (int i=0; i<N; i++){
		for (int j=0; j<M; j++){
			printf("%d ", *((arr + i*M) + j));
		}
		printf("\n");
	}
}

int main(){
	int N = 3, M = 2;

	int arr[][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };

	traverseArr((int*)arr, N, M);
	return 0;
}
