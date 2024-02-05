/* 條件式編譯 */

#include<stdio.h>
#include<stdlib.h>
#define STR "Hello World.\n"

int main(){
    #ifdef STR
        printf(STR);
    #else
        printf("STR -> not defined!\n");
    #endif
}