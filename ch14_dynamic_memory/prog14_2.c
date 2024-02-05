#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;

    struct  student{
        char name[10];
        int score;
    } *ptr;

    printf("Number of student: ");
    scanf("%d", &num);

    ptr = (struct student*)malloc(num*sizeof(struct student));

    for(int i=0; i<num; i++){
        fflush(stdin);
        printf("Student%d name: ", i+1);
        gets((ptr+i)->name);
        printf("Student%d score is ", i+1);
        scanf("%d", &(ptr+i)->score);
    }

    for(int i=0; i<num; i++){
        printf("%s: score=%d\n", (ptr+i)->name, (ptr+i)->score);
    }

    free(ptr);
    

}