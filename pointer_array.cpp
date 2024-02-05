#include<stdio.h>
#include<stdlib.h>

void replace(int* arry, int num, int n){
    *(arry+num) = n;
}

int main(){
    int a[5] = {32, 16, 35, 65, 52};
    printf("a=%p\n", a);    // 指標常數
    printf("&a=%p\n", &a);  // 指標常數a的位址

    for(int i=0; i<5; i++){
        printf("&a[%d]=%p\n", i, &a[i]);
    }

    int b[3] = {5, 7, 9};
    printf("b[0]=%d, *(b+0)=%d\n", b[0], *(b));
    printf("b[1]=%d, *(b+1)=%d\n", b[1], *(b+1));
    printf("b[2]=%d, *(b+2)=%d\n", b[2], *(b+2));

    int sum = 0;
    for(int j=0; j<3; j++){
        sum += *(b+j);
    }
    printf("The sum of array B=%d\n", sum);

    int c[5] = {1, 2, 3, 4, 5};
    replace(c, 2, 69);
    for(int i=0; i<5; i++){
        printf("c[%d]=%d\n", i, *(c+i));
    }

    char name[20];
    char* ptr = "How are you?";
    printf("What's your name?");
    gets(name);
    printf("Hi, %s, ", name);
    puts(++ptr);

    char* ptr1[2] = {"Keyu", "littlehorse"};
    for(int i=0; i<2; i++){
        printf("ptr[%d]=%s\n", i, *(ptr1+i));
    }

    system("pause");
}