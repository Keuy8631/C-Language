#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char vol[] = "HELLO WORLD!";
    for(int i=0; i<strlen(vol); i++){
        if(isalnum(vol[i]))
            printf("%c", tolower(vol[i]));
    }
}