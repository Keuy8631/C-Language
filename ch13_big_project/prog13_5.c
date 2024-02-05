/* #if、#else、#endif */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

int main(){
    #ifdef SIZE
        #if SIZE>10
            char str[SIZE] = "Hello World.";
        #else
            char* str = "SIZE too small";
        #endif
    #else
        char* str = "SIZE not defined";
    #endif

    printf("%s\n", str);
}