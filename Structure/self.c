#include <stdio.h> 

typedef struct str{ 
	int mem1; 
	int mem2; 
	struct str* next; 
}str; 

int main(){ 
	str var1 = {1, 2, NULL}; 
	str var2 = {10, 20, NULL}; 

	var1.next = &var2; 

	str *ptr1 = &var1; 

	printf("var1.mem1: %d  var1.mem2: %d\n", ptr1->mem1, ptr1->mem2); 
	printf("var2.mem1: %d var2.mem2: %d\n", ptr1->next->mem1, ptr1->next->mem2); 

	return 0; 
}
// Output:
// var1.mem1: 1  var1.mem2: 2
// var2.mem1: 10 var2.mem2: 20