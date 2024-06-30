#include <stdio.h>
#include <string.h>

char *string_n_concat(char *dest, const char *src, unsigned int n){
	char *dest_ptr = dest;
	while(*dest_ptr) dest_ptr++;
	for(int i=0; i<n && *src; i++)
		*dest_ptr++ = *src++;
	*dest_ptr = '\0';
	return dest;
}

int main(){
    char dest[50] = "Hello ";
    const char *src = "world!";

    string_n_concat(dest, src, 5);

    printf("Resulting string: %s\n", dest);

    return 0;
}