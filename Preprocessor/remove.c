#include <stdio.h>
#define LIMIT 100
int main(){
	printf("%d\n", LIMIT);
// removing defined macro LIMIT
#undef LIMIT
	// Next line causes error as LIMIT is not defined
    int LIMIT = 101;
	printf("%d\n", LIMIT);
	return 0;
}
// This code is contributed by Santanu
