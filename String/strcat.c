#include <stdio.h>

char *string_concat(char *dest, const char *src){
	char *dest_tmp = dest;
	while(*dest_tmp) dest_tmp++;
	while(*src) *dest_tmp++ = *src++;
	*dest_tmp = '\0';
	return dest;
}

int main(){
    char dest[50] = "Hello ";
    const char *src = "world!";

    string_concat(dest, src);

    printf("Resulting string: %s\n", dest);

    return 0;
}