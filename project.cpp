#include<stdio.h>
#include<stdlib.h>

int main(){
    char beep = '\a';
    int inte;
    const int x = 10;
    unsigned int y = -999; // 無號的整數變數，但不知道為啥還是print出負號
    int num = 69.696969;
    int ptr = 50;
    int *point = &ptr;
    int a = 0, b = 0;
    char ch[10];
    if(a) printf("True\n");
    else printf("False\n");
    if(!a) printf("False\n");
    else printf("True\n");
    // x = 99; error
    // scanf("a=%d\tb=%d\n", &a, &b);
    // printf("a+b=%d\n", a+b);
    printf("point=%p\n", point);
    printf("*point=%d\n", *point);
    printf("&point=%p\n", &point);
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("num=%6dcm\n", num);
    printf("num=%-6dcm\n", num);
    printf("num=%6.2dcm\n", num);
    printf("num=%+5dcm\n", num);
    printf("%c", beep);
    printf("ASCII of beep=%d\n", beep);
    printf("sizeof(int)=%d bytes\n", sizeof(inte));

    system("pause");
    return 0;
}