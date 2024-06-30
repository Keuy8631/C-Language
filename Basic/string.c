// C Program to illustrate strings
#include <stdio.h>

int main(){

	// creating array of character
	char arr[6] = { 'G', 'e', 'e', 'k', 's', '\0' };
	// printing string
    for(int i=0; arr[i]; i++){
		printf("%c", arr[i]);
    }

    printf("\n");

    int arry[2][3] = { 10, 20, 30, 40, 50, 60 };
    printf("2D Array:\n");
    // printing 2d array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",arry[i][j]);
        }
        printf("\n");
    }


	return 0;
}