#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr1, *fptr2;
    char ch;
    int cnt = 0;

    fptr1 = fopen("C:\\Users\\Keyu\\Desktop\\Leetcode\\welcom.txt", "r");
    fptr2 = fopen("C:\\Users\\Keyu\\Desktop\\Leetcode\\product.txt", "w");
    
    if(fptr1 && fptr2){
        while ((ch=getc(fptr1))!=EOF){
            putc(ch, fptr2);
            printf("%c", ch);
            // cnt++;
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("\nTotal words: %d\n", cnt);
        printf("Finished!");
    }
    else printf("Error!");
}