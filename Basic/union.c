#include <stdio.h>

union student{
	int age;
	char marks;
};
/*
typedef union student{
	...
}S;
*/
// typedef union student S;
int main(){
	union student s;
	s.age = 'A';
	s.marks = 'K';
	printf("age = %d\nmarks = %d", s.age, s.marks);
}