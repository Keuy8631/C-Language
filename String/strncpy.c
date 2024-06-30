#include <stdio.h>

char *str_n_cpy(char *dest, const char *src, unsigned int n){
	char *dest_ptr = dest;
	unsigned int i = 0;
	for(i=0; i<n && *src; i++) *dest_ptr++ = *src++;
	for(;i<n;i++) *dest_ptr++ = '\0';
	return dest;
}

int main() {
    char src[] = "Hello";
    char dest[10];

    str_n_cpy(dest, src, 10);

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}