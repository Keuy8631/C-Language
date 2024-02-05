#include<stdio.h>
#include<stdlib.h>

void address(int *p1){
    printf("In address:%p, the value is %d.\n", p1, *p1);
}

void Cnt(int *p2){
    *p2+=10;
}

void Swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(){
    int a, b=5;
    double c=3.14;

    int num=20;
    int *ptr=&num; // ptr為指標變數; &->位址運算子(取得位址)
    printf("num=%d, &num=%p\n", num, &num);
    printf("*ptr=%d, ptr=%p, &ptr=%p\n", *ptr, ptr, &ptr);

    printf("a=%4d, sizeof(a)=%d, address(a)=%p\n", a, sizeof(a), &a);
    printf("b=%4d, sizeof(b)=%d, address(b)=%p\n", b, sizeof(b), &b);
    printf("c=%4.2f, sizeof(c)=%d, address(c)=%p\n", c, sizeof(c), &c);

    int x=5, y=10;
    int *x1, *y1;
    x1 = &x;
    y1 = &y;
    *x1 = 6;
    *y1 = 11;
    printf("x=%d, y=%d\n", x, y);

    int t = 12;
    int *p1 = &t;
    address(&t);
    address(p1);

    printf("Before \"Cnt\" function: %d\n", *p1);
    Cnt(p1);
    printf("After \"Cnt\" function: %d\n", *p1);
    printf("Finished!");

    int j = 5, k = 10;
    printf("Before \"Swap\" function: j=%d, k=%d\n", j, k);
    Swap(j, k);
    printf("After \"Swap\" function: j=%d, k=%d\n", j, k);
    printf("Invalid!\n");

    printf("Before \"swap\" function: j=%d, k=%d\n", j, k);
    swap(&j, &k);
    printf("After \"swap\" function: j=%d, k=%d\n", j, k);
    printf("Valid!\n");

    system("pause");
}