#include<stdio.h>
#define size 3

void showarr(int arr[]){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

struct data{
    char name[];
    char sex;
    int math;
};


int main(){  
    // int a[10] = {100, 206, 300, 409, 509, 601}; //Line 1  
    // int *p[] = {a+0, a+1, a+2, a+3, a+4, a+5}; //Line 2  
    // int **pp = p; //Line 3  
    // pp++; // Line 4  
    // printf("%d %d %d\n",pp-p,*pp - a,**pp); // Line 5  
    // *pp++; // Line 6  
    // printf("%d %d %d\n",pp-p,*pp - a,**pp); // Line 7  
    // ++*pp; // Line 8  
    // printf("%d %d %d\n",pp-p,*pp - a,**pp); // Line 9  
    // ++**pp; // Line 10   
    // printf("%d %d %d\n",pp-p,*pp - a,**pp); // Line 11

    int num[3][4] = {{12, 23, 42, 18},
                     {14, 33, 51, 62},
                     {34, 57, 27, 76}};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(*(*(num+i)+j)>50) *(*(num+i)+j) = 50;
            printf("num[%d][%d]=%d\n", i, j, *(*(num+i)+j));
        }
    }

    printf("The numbers of num is %d\n", sizeof(num)/sizeof(int));
    
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         printf("num[%d][%d]=%d, Address=%p\n", i, j, *(*(num+i)+j), *(num+i)+j);
    //     }
    // }

    printf("num=%p\n", num);
    printf("*num=%p\n", *num);
    printf("**num=%d\n", **num);
    printf("&(**num)=%p\n", &(**num));

    int A[size] = {1, 2, 3};
    showarr(A);


} 