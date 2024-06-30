#include <stdio.h>
#include <string.h>

// int str_len(const char *str){
// 	char *ptr = str;
//     while(*ptr) ptr++;
//     return ptr-str;
// }

int str_len(const char *str){
	size_t len = 0;
	while(str[len]) len++;
	return len;
}

int main() { 
    char str[] = "GeeksforGeeks"; 
  
    size_t length = str_len(str); 

    printf("String: %s\n", str); 
  
    printf("Length: %zu\n", length); 
  
    return 0; 
}