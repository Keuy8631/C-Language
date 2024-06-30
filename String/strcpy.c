#include <stdio.h>

char *str_cpy(char *dest, const char *src){
	char *dest_ptr = dest;
	while((*dest_ptr++ = *src++)){}
	return dest;
}

int main() {
    char src[] = "Hello, world!";
    char dest[50];

    str_cpy(dest, src);

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}