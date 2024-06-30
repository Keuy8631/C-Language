#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int r = 3, c = 4;
	int *arr[r];
	for(int i=0; i<r; i++)
		arr[i] = (int*)calloc(c, sizeof(int));
	
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            printf("%d ", arr[r][c]);
        printf("\n");
    }
    printf("Create!\n");

	int cnt = 0;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			arr[i][j] = ++cnt; // *(*(arr+i)+j)
			
    printf("Now\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			printf("%d ", arr[i][j]);
        printf("\n");
    }
			
	for(int i=0; i<r; i++)
		free(arr[i]);
		
	return 0;
}