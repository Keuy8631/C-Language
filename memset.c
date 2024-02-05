#include <stdio.h>
#include <string.h>
#include <cstdlib>

int main(){
//    char str[50];
   char* str = (char*)malloc(50*sizeof(char));

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'$',7);
   memset(str, '6', 50);
   puts(str);
   
   return 0;
}