#include<stdio.h>

int main(){
    struct state{
        unsigned sex: 1;
        unsigned marriage: 1;
        unsigned age: 7;
    };
    struct state Keyu = {1, 0, 26};

    if(!Keyu.sex) printf("Sex: Girl\n");
    else printf("Sex: Boy\n");

    if(!Keyu.marriage) printf("Single\n");
    else printf("Married\n");

    printf("Age: %d\n", Keyu.age);
    printf("sizeof(Keyu)=%d\n", sizeof(Keyu));
    
}