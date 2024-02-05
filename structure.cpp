#include<stdio.h>
#include<stdlib.h>

struct data{
    char name[10];
    int math;
    int eng;
}student, *ptr;

// struct data1{
//     char name[10];
//     int age;
// }student = {"Keyu", 26};

int main(){
    struct data1{
        char name[10];
        int age;
    }student = {"Keyu", 26};
    // ptr = &student;
    // printf("Name: ");
    // gets(ptr->name);
    // printf("The score of math: ");
    // scanf("%d", &ptr->math);
    // printf("The score of English: ");
    // scanf("%d", &ptr->eng);

    // printf("Math= %d, ", ptr->math);
    // printf("English= %d, ", ptr->eng);
    // printf("Average= %.2f", (ptr->math+ptr->eng)/2.0);

    printf("Name: %s\n", student.name);
    // gets(student.name);
    printf("Age: %d\n", student.age);
    // scanf("%d", &student.age);

    struct date{
        char month[3];
        char day[3];
    };

    struct gdata{
        char year[10];
        struct date birth;
    }x = {"1997", {"03", "01"}};

    printf("Years: %s\n", x.year);
    printf("Birthday: %s%s\n", x.birth.month, x.birth.day);
    
    struct sdata{
        char name[10];
        int math;
    }std[2];

    for(int i=0; i<2; i++){
        printf("Student: ");
        gets(std[i].name);
        printf("The score of math: ");
        scanf("%d", &std[i].math);
        fflush(stdin);
    }


}