// C program to demonstrate the use of #line

#include <stdio.h>

// Macro to print the current line number
#define PrintLineNum printf("Line number is %d in file named %s\n", __LINE__, __FILE__)

int main(){
	// Print the original line number
	PrintLineNum;

// Using #line to change line number and file name
// temporarily
#line 20 "main.c"
	PrintLineNum;

// revert to the original line number and file name
#line 30 "index.c"
	PrintLineNum;

	return 0;
}
