#include <stdio.h>
#include <string.h>

int str_cmp(const char *str1, const char *str2){
	while(*str1 && (*str1==*str2)){
		str1++;
		str2++;
	}
	return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main(){ 
    char str1[] = "Geeks"; 
    char str2[] = "For"; 
    char str3[] = "Geeks"; 
  
    int result1 = str_cmp(str1, str2); 
    int result2 = str_cmp(str2, str3); 
    int result3 = str_cmp(str1, str1); 
  
    printf("G-F is %d\n", 'G'-'F');
    printf("Comparison of str1 and str2: %d\n", result1); 
    printf("Comparison of str2 and str3: %d\n", result2); 
    printf("Comparison of str1 and str1: %d\n", result3); 
  
    return 0; 
}