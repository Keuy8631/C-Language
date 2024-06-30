#include <stdio.h>

int main(){
	int N = 4;
	int x = 6;
	int *ptr1 = &N;
	int *ptr2 = &x;
	printf("ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);
	x = ptr1-ptr2;
	printf("Subtraction of ptr1 & ptr2 is %d\n", x);
	return 0;
}